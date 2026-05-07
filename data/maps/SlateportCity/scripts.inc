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


SlateportCity_EventScript_AfterYou::
# 44 "data/maps/SlateportCity/scripts.pory"
	lockall
# 45 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 46 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_AFTER_YOU, SlateportCity_EventScript_AfterYou_2
# 49 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_EventScript_AfterYou_Text_1
# 51 "data/maps/SlateportCity/scripts.pory"
	giveitem ITEM_TM_AFTER_YOU
# 52 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_RECEIVED_AFTER_YOU
# 53 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_EventScript_AfterYou_Text_0
SlateportCity_EventScript_AfterYou_1:
# 55 "data/maps/SlateportCity/scripts.pory"
	release
	end

SlateportCity_EventScript_AfterYou_2:
# 47 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_EventScript_AfterYou_Text_0
	goto SlateportCity_EventScript_AfterYou_1


SlateportCity_EventScript_MeFirst::
# 60 "data/maps/SlateportCity/scripts.pory"
	lockall
# 61 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 62 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_ME_FIRST, SlateportCity_EventScript_MeFirst_2
# 65 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_EventScript_MeFirst_Text_1
# 67 "data/maps/SlateportCity/scripts.pory"
	giveitem ITEM_TM_ME_FIRST
# 68 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_RECEIVED_ME_FIRST
# 69 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_EventScript_MeFirst_Text_0
SlateportCity_EventScript_MeFirst_1:
# 71 "data/maps/SlateportCity/scripts.pory"
	release
	end

SlateportCity_EventScript_MeFirst_2:
# 63 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_EventScript_MeFirst_Text_0
	goto SlateportCity_EventScript_MeFirst_1


# 75 "data/maps/SlateportCity/scripts.pory"

# 76 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_FAT_MAN, 1
# 77 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_MAN_1, 2
# 78 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_RICH_BOY, 3
# 79 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_1, 5
# 80 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_COOK, 6
# 81 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_OLD_WOMAN, 7
# 82 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GIRL, 8
# 83 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_TY, 9
# 84 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GABBY, 10
# 85 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_CAPT_STERN, 11
# 86 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_2, 18
# 87 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_3, 19
# 88 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_4, 26
# 89 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_5, 27
# 90 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_6, 28
# 91 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_7, 29
# 92 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_8, 30
# 93 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_9, 31
# 94 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_GRUNT_11, 33
# 95 "data/maps/SlateportCity/scripts.pory"
.set LOCALID_SCOTT, 35
# 96 "data/maps/SlateportCity/scripts.pory"

# 97 "data/maps/SlateportCity/scripts.pory"
@ Note: LOCALID_SLATEPORT_ENERGY_GURU is a local id for this map used elsewhere. It's defined in event_objects.h
# 98 "data/maps/SlateportCity/scripts.pory"

# 99 "data/maps/SlateportCity/scripts.pory"
SlateportCity_MapScripts::
# 100 "data/maps/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, SlateportCity_OnTransition
# 101 "data/maps/SlateportCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, SlateportCity_OnFrame
# 102 "data/maps/SlateportCity/scripts.pory"
	.byte 0
# 103 "data/maps/SlateportCity/scripts.pory"

# 104 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnTransition:
# 105 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_SYS_GAUNTLET
# 106 "data/maps/SlateportCity/scripts.pory"
	call EventScript_HideMrBriney
# 107 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_MUSEUM_1F_STATE, 0
# 108 "data/maps/SlateportCity/scripts.pory"
	call SlateportCity_EventScript_EnterSlateport
# 109 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_MovePeopleForSternInterview
# 110 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_SetReadyForScottScene
# 111 "data/maps/SlateportCity/scripts.pory"
	end
# 112 "data/maps/SlateportCity/scripts.pory"

# 113 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnterSlateport::
# 114 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_VISITED_SLATEPORT_CITY
# 115 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 116 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER
# 117 "data/maps/SlateportCity/scripts.pory"
	return
# 118 "data/maps/SlateportCity/scripts.pory"

# 119 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MovePeopleForSternInterview::
# 120 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_CAPT_STERN, 28, 13
# 121 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_OLD_WOMAN, 25, 13
# 122 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_RICH_BOY, 25, 14
# 123 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_COOK, 27, 16
# 124 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_GIRL, 28, 16
# 125 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_FAT_MAN, 29, 16
# 126 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_MAN_1, 31, 14
# 127 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_CAPT_STERN, MOVEMENT_TYPE_FACE_DOWN
# 128 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_OLD_WOMAN, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT
# 129 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_RICH_BOY, MOVEMENT_TYPE_FACE_UP_AND_RIGHT
# 130 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_COOK, MOVEMENT_TYPE_FACE_UP
# 131 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_GIRL, MOVEMENT_TYPE_FACE_UP
# 132 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_FAT_MAN, MOVEMENT_TYPE_FACE_UP
# 133 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_MAN_1, MOVEMENT_TYPE_FACE_LEFT
# 134 "data/maps/SlateportCity/scripts.pory"
	return
# 135 "data/maps/SlateportCity/scripts.pory"

# 136 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OpenPartyMenu::
# 137 "data/maps/SlateportCity/scripts.pory"
	special ChooseRotomForRandomFormChange
# 138 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 139 "data/maps/SlateportCity/scripts.pory"
	lock
# 140 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 141 "data/maps/SlateportCity/scripts.pory"
	return
# 142 "data/maps/SlateportCity/scripts.pory"

# 143 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SetReadyForScottScene::
# 144 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 145 "data/maps/SlateportCity/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 146 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_0x8004, 30, SlateportCity_EventScript_MoveScottLeft
# 147 "data/maps/SlateportCity/scripts.pory"
	@setobjectxyperm LOCALID_SCOTT, 23, 27
# 148 "data/maps/SlateportCity/scripts.pory"
	@setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 149 "data/maps/SlateportCity/scripts.pory"
	return
# 150 "data/maps/SlateportCity/scripts.pory"

# 151 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MoveScottLeft::
# 152 "data/maps/SlateportCity/scripts.pory"
	@setobjectxyperm LOCALID_SCOTT, 22, 27
# 153 "data/maps/SlateportCity/scripts.pory"
	@setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 154 "data/maps/SlateportCity/scripts.pory"
	return
# 155 "data/maps/SlateportCity/scripts.pory"

# 156 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnFrame:
# 157 "data/maps/SlateportCity/scripts.pory"
	map_script_2 VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_ScottScene
# 158 "data/maps/SlateportCity/scripts.pory"
	.2byte 0
# 159 "data/maps/SlateportCity/scripts.pory"

# 160 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottScene::
# 161 "data/maps/SlateportCity/scripts.pory"
	lockall
# 162 "data/maps/SlateportCity/scripts.pory"
	@addobject LOCALID_SCOTT
# 163 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerFaceScott
# 164 "data/maps/SlateportCity/scripts.pory"
	@applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottApproachPlayer
# 165 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 166 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_YouDroveTeamAquaAway, MSGBOX_DEFAULT
# 167 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 168 "data/maps/SlateportCity/scripts.pory"
	@applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 169 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 170 "data/maps/SlateportCity/scripts.pory"
	delay 60
# 171 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MaybeThisTrainer, MSGBOX_DEFAULT
# 172 "data/maps/SlateportCity/scripts.pory"
	@applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 173 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 174 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_LetsRegisterEachOther, MSGBOX_DEFAULT
# 175 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 176 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 177 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 178 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RegisteredScott, MSGBOX_DEFAULT
# 179 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 180 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 181 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 182 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_ENABLE_SCOTT_MATCH_CALL
# 183 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou, MSGBOX_DEFAULT
# 184 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 185 "data/maps/SlateportCity/scripts.pory"
	@applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExit
# 186 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 187 "data/maps/SlateportCity/scripts.pory"
	@removeobject LOCALID_SCOTT
# 188 "data/maps/SlateportCity/scripts.pory"
	@setobjectxyperm LOCALID_SCOTT, 10, 12
# 189 "data/maps/SlateportCity/scripts.pory"
	@setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_DOWN
# 190 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 191 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 2
# 192 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 193 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 194 "data/maps/SlateportCity/scripts.pory"
	end
# 195 "data/maps/SlateportCity/scripts.pory"

# 196 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceScott:
# 197 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 198 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 199 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 200 "data/maps/SlateportCity/scripts.pory"
	step_end
# 201 "data/maps/SlateportCity/scripts.pory"

# 202 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottApproachPlayer:
# 203 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 204 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 205 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 206 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 207 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 208 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 209 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 210 "data/maps/SlateportCity/scripts.pory"
	step_end
# 211 "data/maps/SlateportCity/scripts.pory"

# 212 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExit:
# 213 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 214 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 215 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 216 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 217 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 218 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 219 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 220 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 221 "data/maps/SlateportCity/scripts.pory"
	step_end
# 222 "data/maps/SlateportCity/scripts.pory"

# 223 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyGuru::
# 224 "data/maps/SlateportCity/scripts.pory"
	lock
# 225 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 226 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_EnergyGuruSellWhatYouNeed
# 227 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 228 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_EnergyGuru
# 229 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 230 "data/maps/SlateportCity/scripts.pory"
	release
# 231 "data/maps/SlateportCity/scripts.pory"
	end
# 232 "data/maps/SlateportCity/scripts.pory"

# 233 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 234 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_EnergyGuru:
# 235 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PROTEIN
# 236 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_IRON
# 237 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CARBOS
# 238 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ZINC
# 239 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CALCIUM
# 240 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_HP_UP
# 241 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NONE
# 242 "data/maps/SlateportCity/scripts.pory"
	release
# 243 "data/maps/SlateportCity/scripts.pory"
	end
# 244 "data/maps/SlateportCity/scripts.pory"

# 245 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Trader1::
# 246 "data/maps/SlateportCity/scripts.pory"
	lock
# 247 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 248 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SLATEPORT_CITY_TRADE_1_COMPLETED, SlateportCity_EventScript_Trade1Completed
# 249 "data/maps/SlateportCity/scripts.pory"
	ingame_trade INGAME_TRADE_ALOLAN_GRIMER, SlateportCity_Text_IllTradeIfYouWant1, SlateportCity_EventScript_MukTrade, SlateportCity_EventScript_NotRequestedMon1, SlateportCity_Text_RememberToRecycle
# 250 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_SLATEPORT_CITY_TRADE_1_COMPLETED
# 251 "data/maps/SlateportCity/scripts.pory"
	release
# 252 "data/maps/SlateportCity/scripts.pory"
	end
# 253 "data/maps/SlateportCity/scripts.pory"

# 254 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MukTrade::
# 255 "data/maps/SlateportCity/scripts.pory"
	ingame_trade INGAME_TRADE_ALOLAN_MUK, SlateportCity_Text_WillingToTradeMuks, SlateportCity_EventScript_DeclineTrade1, SlateportCity_EventScript_NotRequestedMon2, SlateportCity_Text_RememberToRecycle
# 256 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_SLATEPORT_CITY_TRADE_1_COMPLETED
# 257 "data/maps/SlateportCity/scripts.pory"
	release
# 258 "data/maps/SlateportCity/scripts.pory"
	end
# 259 "data/maps/SlateportCity/scripts.pory"

# 260 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DeclineTrade1::
# 261 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_YoungPeopleDont, MSGBOX_DEFAULT
# 262 "data/maps/SlateportCity/scripts.pory"
	release
# 263 "data/maps/SlateportCity/scripts.pory"
	end
# 264 "data/maps/SlateportCity/scripts.pory"

# 265 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NotRequestedMon1::
# 266 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ThatsNotAGrimer, MSGBOX_DEFAULT
# 267 "data/maps/SlateportCity/scripts.pory"
	release
# 268 "data/maps/SlateportCity/scripts.pory"
	end
# 269 "data/maps/SlateportCity/scripts.pory"

# 270 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NotRequestedMon2::
# 271 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ThatsNotAMuk, MSGBOX_DEFAULT
# 272 "data/maps/SlateportCity/scripts.pory"
	release
# 273 "data/maps/SlateportCity/scripts.pory"
	end
# 274 "data/maps/SlateportCity/scripts.pory"

# 275 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Trade1Completed::
# 276 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RememberToRecycle, MSGBOX_DEFAULT
# 277 "data/maps/SlateportCity/scripts.pory"
	release
# 278 "data/maps/SlateportCity/scripts.pory"
	end
# 279 "data/maps/SlateportCity/scripts.pory"

# 280 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_IllTradeIfYouWant1:
# 281 "data/maps/SlateportCity/scripts.pory"
	.string "Oil spills are such a tragedy.\p"
# 282 "data/maps/SlateportCity/scripts.pory"
	.string "Look at what happened to this Grimer I\n"
# 283 "data/maps/SlateportCity/scripts.pory"
	.string "found by the harbor…\p"
# 284 "data/maps/SlateportCity/scripts.pory"
	.string "Maybe you can care for this Grimer better\n"
# 285 "data/maps/SlateportCity/scripts.pory"
	.string "than I can.\p"
# 286 "data/maps/SlateportCity/scripts.pory"
	.string "If you have a Grimer of your own, I would\n"
# 287 "data/maps/SlateportCity/scripts.pory"
	.string "be willing to trade.$"
# 288 "data/maps/SlateportCity/scripts.pory"

# 289 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WillingToTradeMuks:
# 290 "data/maps/SlateportCity/scripts.pory"
	.string "I see, would you be willing to trade Muks\n"
# 291 "data/maps/SlateportCity/scripts.pory"
	.string "instead?$"
# 292 "data/maps/SlateportCity/scripts.pory"

# 293 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ThatsNotAGrimer:
# 294 "data/maps/SlateportCity/scripts.pory"
	.string "That's not a Grimer, silly.$"
# 295 "data/maps/SlateportCity/scripts.pory"

# 296 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ThatsNotAMuk:
# 297 "data/maps/SlateportCity/scripts.pory"
	.string "That's not a Muk, silly.$"
# 298 "data/maps/SlateportCity/scripts.pory"

# 299 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_YoungPeopleDont:
# 300 "data/maps/SlateportCity/scripts.pory"
	.string "Young people don't care about the\n"
# 301 "data/maps/SlateportCity/scripts.pory"
	.string "environment these days…$"
# 302 "data/maps/SlateportCity/scripts.pory"

# 303 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RememberToRecycle:
# 304 "data/maps/SlateportCity/scripts.pory"
	.string "Remember to recycle!$"
# 305 "data/maps/SlateportCity/scripts.pory"

# 306 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Trader2::
# 307 "data/maps/SlateportCity/scripts.pory"
	lock
# 308 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 309 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SLATEPORT_CITY_TRADE_2_COMPLETED, SlateportCity_EventScript_TradeCompleted
# 310 "data/maps/SlateportCity/scripts.pory"
	ingame_trade INGAME_TRADE_GALARIAN_WEEZING, SlateportCity_Text_IllTradeIfYouWant2, SlateportCity_EventScript_DeclineTrade2, SlateportCity_EventScript_NotRequestedMon3, SlateportCity_Text_MyWeezingLooks
# 311 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_SLATEPORT_CITY_TRADE_2_COMPLETED
# 312 "data/maps/SlateportCity/scripts.pory"
	release
# 313 "data/maps/SlateportCity/scripts.pory"
	end
# 314 "data/maps/SlateportCity/scripts.pory"

# 315 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DeclineTrade2::
# 316 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_YouDontWantToThatsOkay, MSGBOX_DEFAULT
# 317 "data/maps/SlateportCity/scripts.pory"
	release
# 318 "data/maps/SlateportCity/scripts.pory"
	end
# 319 "data/maps/SlateportCity/scripts.pory"

# 320 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NotRequestedMon3::
# 321 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontTryToPull, MSGBOX_DEFAULT
# 322 "data/maps/SlateportCity/scripts.pory"
	release
# 323 "data/maps/SlateportCity/scripts.pory"
	end
# 324 "data/maps/SlateportCity/scripts.pory"

# 325 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_TradeCompleted::
# 326 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AnyPokemonCanBeCute, MSGBOX_DEFAULT
# 327 "data/maps/SlateportCity/scripts.pory"
	release
# 328 "data/maps/SlateportCity/scripts.pory"
	end
# 329 "data/maps/SlateportCity/scripts.pory"

# 330 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_IllTradeIfYouWant2:
# 331 "data/maps/SlateportCity/scripts.pory"
	.string "The name's Devin, and I just set up\n"
# 332 "data/maps/SlateportCity/scripts.pory"
	.string "this tent, I call it the Devin Tent!\p"
# 333 "data/maps/SlateportCity/scripts.pory"
	.string "Anyway, I have this Weezing I want to\n"
# 334 "data/maps/SlateportCity/scripts.pory"
	.string "trade.\p"
# 335 "data/maps/SlateportCity/scripts.pory"
	.string "If you have a Weezing from Kanto i'll\n"
# 336 "data/maps/SlateportCity/scripts.pory"
	.string "trade you for it!\p"
# 337 "data/maps/SlateportCity/scripts.pory"
	.string "There's just one catch, this Weezing is\n"
# 338 "data/maps/SlateportCity/scripts.pory"
	.string "quite afraid of heights you see.\p"
# 339 "data/maps/SlateportCity/scripts.pory"
	.string "So if you could keep it as Levitate, so\n"
# 340 "data/maps/SlateportCity/scripts.pory"
	.string "it doesn't have to worry about falling,\l"
# 341 "data/maps/SlateportCity/scripts.pory"
	.string "that would be great.\p"
# 342 "data/maps/SlateportCity/scripts.pory"
	.string "Are you up for it?$"
# 343 "data/maps/SlateportCity/scripts.pory"

# 344 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MyWeezingLooks:
# 345 "data/maps/SlateportCity/scripts.pory"
	.string "My Weezing looks happier already.$"
# 346 "data/maps/SlateportCity/scripts.pory"

# 347 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontTryToPull:
# 348 "data/maps/SlateportCity/scripts.pory"
	.string "Don't try to pull a fast one on me.$"
# 349 "data/maps/SlateportCity/scripts.pory"

# 350 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_YouDontWantToThatsOkay:
# 351 "data/maps/SlateportCity/scripts.pory"
	.string "Thats fine.$"
# 352 "data/maps/SlateportCity/scripts.pory"

# 353 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AnyPokemonCanBeCute:
# 354 "data/maps/SlateportCity/scripts.pory"
	.string "How is my Weezing doing?$"
# 355 "data/maps/SlateportCity/scripts.pory"

# 356 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EffortRibbonWoman::
# 357 "data/maps/SlateportCity/scripts.pory"
	lock
# 358 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 359 "data/maps/SlateportCity/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 360 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhYourPokemon, MSGBOX_DEFAULT
# 361 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, LeadMonHasEffortRibbon
# 362 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_EventScript_MonHasEffortRibbon
# 363 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, Special_AreLeadMonEVsMaxedOut
# 364 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_MonEVsNotMaxed
# 365 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseGiveItThisEffortRibbon, MSGBOX_DEFAULT
# 366 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 367 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ReceivedEffortRibbon
# 368 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 369 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PutEffortRibbonOnMon, MSGBOX_DEFAULT
# 370 "data/maps/SlateportCity/scripts.pory"
	special GiveLeadMonEffortRibbon
# 371 "data/maps/SlateportCity/scripts.pory"
	release
# 372 "data/maps/SlateportCity/scripts.pory"
	end
# 373 "data/maps/SlateportCity/scripts.pory"

# 374 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonEVsNotMaxed::
# 375 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoForItLittleHarder, MSGBOX_DEFAULT
# 376 "data/maps/SlateportCity/scripts.pory"
	release
# 377 "data/maps/SlateportCity/scripts.pory"
	end
# 378 "data/maps/SlateportCity/scripts.pory"

# 379 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonHasEffortRibbon::
# 380 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EffortRibbonLooksGoodOnIt, MSGBOX_DEFAULT
# 381 "data/maps/SlateportCity/scripts.pory"
	release
# 382 "data/maps/SlateportCity/scripts.pory"
	end
# 383 "data/maps/SlateportCity/scripts.pory"

# 384 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Cook::
# 385 "data/maps/SlateportCity/scripts.pory"
	lock
# 386 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 387 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_CookSternInterview
# 388 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaweedFullOfLife, MSGBOX_DEFAULT
# 389 "data/maps/SlateportCity/scripts.pory"
	release
# 390 "data/maps/SlateportCity/scripts.pory"
	end
# 391 "data/maps/SlateportCity/scripts.pory"

# 392 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CookSternInterview::
# 393 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainComeBackWithBigFish, MSGBOX_DEFAULT
# 394 "data/maps/SlateportCity/scripts.pory"
	release
# 395 "data/maps/SlateportCity/scripts.pory"
	end
# 396 "data/maps/SlateportCity/scripts.pory"

# 397 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWoman::
# 398 "data/maps/SlateportCity/scripts.pory"
	lock
# 399 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 400 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_OldWomanSternInterview
# 401 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HowTownIsBornAndGrows, MSGBOX_DEFAULT
# 402 "data/maps/SlateportCity/scripts.pory"
	release
# 403 "data/maps/SlateportCity/scripts.pory"
	end
# 404 "data/maps/SlateportCity/scripts.pory"

# 405 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWomanSternInterview::
# 406 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptSternBeingInterviewed, MSGBOX_DEFAULT
# 407 "data/maps/SlateportCity/scripts.pory"
	release
# 408 "data/maps/SlateportCity/scripts.pory"
	end
# 409 "data/maps/SlateportCity/scripts.pory"

# 410 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Girl::
# 411 "data/maps/SlateportCity/scripts.pory"
	lock
# 412 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 413 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SlateportWonderfulPlace, MSGBOX_DEFAULT
# 414 "data/maps/SlateportCity/scripts.pory"
	release
# 415 "data/maps/SlateportCity/scripts.pory"
	end
# 416 "data/maps/SlateportCity/scripts.pory"

# 417 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSternInterview::
# 418 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_InterviewerSoCool, MSGBOX_DEFAULT
# 419 "data/maps/SlateportCity/scripts.pory"
	release
# 420 "data/maps/SlateportCity/scripts.pory"
	end
# 421 "data/maps/SlateportCity/scripts.pory"

# 422 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSecretBase::
# 423 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyBricksSoDecorWontGetDirty, MSGBOX_DEFAULT
# 424 "data/maps/SlateportCity/scripts.pory"
	release
# 425 "data/maps/SlateportCity/scripts.pory"
	end
# 426 "data/maps/SlateportCity/scripts.pory"

# 427 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoy::
# 428 "data/maps/SlateportCity/scripts.pory"
	lock
# 429 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 430 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_RichBoySternInterview
# 431 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoingToCompeteInBattleTent, MSGBOX_DEFAULT
# 432 "data/maps/SlateportCity/scripts.pory"
	release
# 433 "data/maps/SlateportCity/scripts.pory"
	end
# 434 "data/maps/SlateportCity/scripts.pory"

# 435 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoySternInterview::
# 436 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternSaysDiscoveredSomething, MSGBOX_DEFAULT
# 437 "data/maps/SlateportCity/scripts.pory"
	release
# 438 "data/maps/SlateportCity/scripts.pory"
	end
# 439 "data/maps/SlateportCity/scripts.pory"

# 440 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatMan::
# 441 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_FatManSternInterview
# 442 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BushedHikingFromMauville, MSGBOX_NPC
# 443 "data/maps/SlateportCity/scripts.pory"
	end
# 444 "data/maps/SlateportCity/scripts.pory"

# 445 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatManSternInterview::
# 446 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AmIOnTV, MSGBOX_SIGN
# 447 "data/maps/SlateportCity/scripts.pory"
	end
# 448 "data/maps/SlateportCity/scripts.pory"

# 449 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1::
# 450 "data/maps/SlateportCity/scripts.pory"
	lock
# 451 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 452 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_Man1SternInterview
# 453 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EveryoneCallsHimCaptStern, MSGBOX_DEFAULT
# 454 "data/maps/SlateportCity/scripts.pory"
	release
# 455 "data/maps/SlateportCity/scripts.pory"
	end
# 456 "data/maps/SlateportCity/scripts.pory"

# 457 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1SternInterview::
# 458 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainsACelebrity, MSGBOX_DEFAULT
# 459 "data/maps/SlateportCity/scripts.pory"
	release
# 460 "data/maps/SlateportCity/scripts.pory"
	end
# 461 "data/maps/SlateportCity/scripts.pory"

# 462 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1::
# 463 "data/maps/SlateportCity/scripts.pory"
	lock
# 464 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 465 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_DOCK_REJECTED_DEVON_GOODS, SlateportCity_EventScript_Woman1AquaGone
# 466 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsLongLineOverThere, MSGBOX_DEFAULT
# 467 "data/maps/SlateportCity/scripts.pory"
	release
# 468 "data/maps/SlateportCity/scripts.pory"
	end
# 469 "data/maps/SlateportCity/scripts.pory"

# 470 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1AquaGone::
# 471 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_VisitedMuseumOften, MSGBOX_DEFAULT
# 472 "data/maps/SlateportCity/scripts.pory"
	release
# 473 "data/maps/SlateportCity/scripts.pory"
	end
# 474 "data/maps/SlateportCity/scripts.pory"

# 475 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BattleTentSign::
# 476 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentSign, MSGBOX_SIGN
# 477 "data/maps/SlateportCity/scripts.pory"
	end
# 478 "data/maps/SlateportCity/scripts.pory"

# 479 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardSign::
# 480 "data/maps/SlateportCity/scripts.pory"
	lockall
# 481 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_SternsShipyardFerryComplete
# 482 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, SlateportCity_EventScript_SternsShipyardNearsCompletion
# 483 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardWantedSign, MSGBOX_DEFAULT
# 484 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 485 "data/maps/SlateportCity/scripts.pory"
	end
# 486 "data/maps/SlateportCity/scripts.pory"

# 487 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardNearsCompletion::
# 488 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardNearsCompletion, MSGBOX_DEFAULT
# 489 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 490 "data/maps/SlateportCity/scripts.pory"
	end
# 491 "data/maps/SlateportCity/scripts.pory"

# 492 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardFerryComplete::
# 493 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardFerryComplete, MSGBOX_DEFAULT
# 494 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 495 "data/maps/SlateportCity/scripts.pory"
	end
# 496 "data/maps/SlateportCity/scripts.pory"

# 497 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokemonFanClubSign::
# 498 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PokemonFanClubSign, MSGBOX_SIGN
# 499 "data/maps/SlateportCity/scripts.pory"
	end
# 500 "data/maps/SlateportCity/scripts.pory"

# 501 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OceanicMuseumSign::
# 502 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OceanicMuseumSign, MSGBOX_SIGN
# 503 "data/maps/SlateportCity/scripts.pory"
	end
# 504 "data/maps/SlateportCity/scripts.pory"

# 505 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CitySign::
# 506 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CitySign, MSGBOX_SIGN
# 507 "data/maps/SlateportCity/scripts.pory"
	end
# 508 "data/maps/SlateportCity/scripts.pory"

# 509 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MarketSign::
# 510 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MarketSign, MSGBOX_SIGN
# 511 "data/maps/SlateportCity/scripts.pory"
	end
# 512 "data/maps/SlateportCity/scripts.pory"

# 513 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSign::
# 514 "data/maps/SlateportCity/scripts.pory"
	lockall
# 515 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_HarborSignFerryComplete
# 516 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborFerryUnderConstruction, MSGBOX_DEFAULT
# 517 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 518 "data/maps/SlateportCity/scripts.pory"
	end
# 519 "data/maps/SlateportCity/scripts.pory"

# 520 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSignFerryComplete::
# 521 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborSign, MSGBOX_DEFAULT
# 522 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 523 "data/maps/SlateportCity/scripts.pory"
	end
# 524 "data/maps/SlateportCity/scripts.pory"

# 525 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NameRatersHouseSign::
# 526 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_NameRatersHouseSign, MSGBOX_SIGN
# 527 "data/maps/SlateportCity/scripts.pory"
	end
# 528 "data/maps/SlateportCity/scripts.pory"

# 529 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Maniac::
# 530 "data/maps/SlateportCity/scripts.pory"
	lock
# 531 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 532 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_ManiacSternInterview
# 533 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 534 "data/maps/SlateportCity/scripts.pory"
	release
# 535 "data/maps/SlateportCity/scripts.pory"
	end
# 536 "data/maps/SlateportCity/scripts.pory"

# 537 "data/maps/SlateportCity/scripts.pory"
@ Unclear if the text here was meant to be different, but its not
# 538 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ManiacSternInterview::
# 539 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 540 "data/maps/SlateportCity/scripts.pory"
	release
# 541 "data/maps/SlateportCity/scripts.pory"
	end
# 542 "data/maps/SlateportCity/scripts.pory"

# 543 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman2::
# 544 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CantChangeTradeMonName, MSGBOX_NPC
# 545 "data/maps/SlateportCity/scripts.pory"
	end
# 546 "data/maps/SlateportCity/scripts.pory"

# 547 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor1::
# 548 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaIsSoWet, MSGBOX_NPC
# 549 "data/maps/SlateportCity/scripts.pory"
	end
# 550 "data/maps/SlateportCity/scripts.pory"

# 551 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor2::
# 552 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SinkOldBoats, MSGBOX_NPC
# 553 "data/maps/SlateportCity/scripts.pory"
	end
# 554 "data/maps/SlateportCity/scripts.pory"

# 555 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokefanF::
# 556 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyTooMuch, MSGBOX_NPC
# 557 "data/maps/SlateportCity/scripts.pory"
	end
# 558 "data/maps/SlateportCity/scripts.pory"

# 559 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man2::
# 560 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentBuiltRecently, MSGBOX_NPC
# 561 "data/maps/SlateportCity/scripts.pory"
	end
# 562 "data/maps/SlateportCity/scripts.pory"

# 563 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt1::
# 564 "data/maps/SlateportCity/scripts.pory"
	lock
# 565 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 566 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_QuitPushing, MSGBOX_DEFAULT
# 567 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 568 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_1, Common_Movement_FaceOriginalDirection
# 569 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 570 "data/maps/SlateportCity/scripts.pory"
	release
# 571 "data/maps/SlateportCity/scripts.pory"
	end
# 572 "data/maps/SlateportCity/scripts.pory"

# 573 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt2::
# 574 "data/maps/SlateportCity/scripts.pory"
	lock
# 575 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 576 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaHasPolicy, MSGBOX_DEFAULT
# 577 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 578 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_2, Common_Movement_FaceOriginalDirection
# 579 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 580 "data/maps/SlateportCity/scripts.pory"
	release
# 581 "data/maps/SlateportCity/scripts.pory"
	end
# 582 "data/maps/SlateportCity/scripts.pory"

# 583 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt3::
# 584 "data/maps/SlateportCity/scripts.pory"
	lock
# 585 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 586 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BossIsBrilliant, MSGBOX_DEFAULT
# 587 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 588 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_3, Common_Movement_FaceOriginalDirection
# 589 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 590 "data/maps/SlateportCity/scripts.pory"
	release
# 591 "data/maps/SlateportCity/scripts.pory"
	end
# 592 "data/maps/SlateportCity/scripts.pory"

# 593 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt4::
# 594 "data/maps/SlateportCity/scripts.pory"
	lock
# 595 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 596 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsNewSchemeIWonder, MSGBOX_DEFAULT
# 597 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 598 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_4, Common_Movement_FaceOriginalDirection
# 599 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 600 "data/maps/SlateportCity/scripts.pory"
	release
# 601 "data/maps/SlateportCity/scripts.pory"
	end
# 602 "data/maps/SlateportCity/scripts.pory"

# 603 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt5::
# 604 "data/maps/SlateportCity/scripts.pory"
	lock
# 605 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 606 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldTakeItAll, MSGBOX_DEFAULT
# 607 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 608 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_5, Common_Movement_FaceOriginalDirection
# 609 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 610 "data/maps/SlateportCity/scripts.pory"
	release
# 611 "data/maps/SlateportCity/scripts.pory"
	end
# 612 "data/maps/SlateportCity/scripts.pory"

# 613 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt6::
# 614 "data/maps/SlateportCity/scripts.pory"
	lock
# 615 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 616 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontButtIn, MSGBOX_DEFAULT
# 617 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 618 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_6, Common_Movement_FaceOriginalDirection
# 619 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 620 "data/maps/SlateportCity/scripts.pory"
	release
# 621 "data/maps/SlateportCity/scripts.pory"
	end
# 622 "data/maps/SlateportCity/scripts.pory"

# 623 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt7::
# 624 "data/maps/SlateportCity/scripts.pory"
	lock
# 625 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 626 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RemindsMeOfLongLineForGames, MSGBOX_DEFAULT
# 627 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 628 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_7, Common_Movement_FaceOriginalDirection
# 629 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 630 "data/maps/SlateportCity/scripts.pory"
	release
# 631 "data/maps/SlateportCity/scripts.pory"
	end
# 632 "data/maps/SlateportCity/scripts.pory"

# 633 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt8::
# 634 "data/maps/SlateportCity/scripts.pory"
	lock
# 635 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 636 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhyAreWeLiningUp, MSGBOX_DEFAULT
# 637 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 638 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_8, Common_Movement_FaceOriginalDirection
# 639 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 640 "data/maps/SlateportCity/scripts.pory"
	release
# 641 "data/maps/SlateportCity/scripts.pory"
	end
# 642 "data/maps/SlateportCity/scripts.pory"

# 643 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt9::
# 644 "data/maps/SlateportCity/scripts.pory"
	lock
# 645 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 646 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 647 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_ExclamationMark
# 648 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 649 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_Delay48
# 650 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 651 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatDoYouWant, MSGBOX_DEFAULT
# 652 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 653 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
# 654 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 655 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 656 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 657 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FacePlayer
# 658 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 659 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_IllReadSignForYou, MSGBOX_DEFAULT
# 660 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 661 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
# 662 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 663 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 664 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 665 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SaysSomethingLikeSeaIsEndless, MSGBOX_DEFAULT
# 666 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 667 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FacePlayer
# 668 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 669 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 670 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 671 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
# 672 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 673 "data/maps/SlateportCity/scripts.pory"
	release
# 674 "data/maps/SlateportCity/scripts.pory"
	end
# 675 "data/maps/SlateportCity/scripts.pory"

# 676 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_DelayAquaGrunt:
# 677 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 678 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 679 "data/maps/SlateportCity/scripts.pory"
	step_end
# 680 "data/maps/SlateportCity/scripts.pory"

# 681 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt10::
# 682 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldveBroughtMyGameBoy, MSGBOX_SIGN
# 683 "data/maps/SlateportCity/scripts.pory"
	end
# 684 "data/maps/SlateportCity/scripts.pory"

# 685 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt11::
# 686 "data/maps/SlateportCity/scripts.pory"
	lock
# 687 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 688 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HotSpringsAfterOperation, MSGBOX_DEFAULT
# 689 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 690 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_11, Common_Movement_FaceOriginalDirection
# 691 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 692 "data/maps/SlateportCity/scripts.pory"
	release
# 693 "data/maps/SlateportCity/scripts.pory"
	end
# 694 "data/maps/SlateportCity/scripts.pory"

# 695 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DollClerk::
# 696 "data/maps/SlateportCity/scripts.pory"
	lock
# 697 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 698 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 699 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 700 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor_Dolls
# 701 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 702 "data/maps/SlateportCity/scripts.pory"
	release
# 703 "data/maps/SlateportCity/scripts.pory"
	end
# 704 "data/maps/SlateportCity/scripts.pory"

# 705 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 706 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor_Dolls:
# 707 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_AZURILL_DOLL
# 708 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_MARILL_DOLL
# 709 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_SKITTY_DOLL
# 710 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_NONE
# 711 "data/maps/SlateportCity/scripts.pory"
	release
# 712 "data/maps/SlateportCity/scripts.pory"
	end
# 713 "data/maps/SlateportCity/scripts.pory"

# 714 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ComeBackWithSecretPower::
# 715 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_ComeBackWithSecretPower, MSGBOX_DEFAULT
# 716 "data/maps/SlateportCity/scripts.pory"
	release
# 717 "data/maps/SlateportCity/scripts.pory"
	end
# 718 "data/maps/SlateportCity/scripts.pory"

# 719 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DecorClerk::
# 720 "data/maps/SlateportCity/scripts.pory"
	lock
# 721 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 722 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 723 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 724 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor
# 725 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 726 "data/maps/SlateportCity/scripts.pory"
	release
# 727 "data/maps/SlateportCity/scripts.pory"
	end
# 728 "data/maps/SlateportCity/scripts.pory"

# 729 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 730 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor:
# 731 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_RED_BRICK
# 732 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_BLUE_BRICK
# 733 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_YELLOW_BRICK
# 734 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_RED_BALLOON
# 735 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_BLUE_BALLOON
# 736 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_YELLOW_BALLOON
# 737 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_C_LOW_NOTE_MAT
# 738 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_D_NOTE_MAT
# 739 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_E_NOTE_MAT
# 740 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_F_NOTE_MAT
# 741 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_G_NOTE_MAT
# 742 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_A_NOTE_MAT
# 743 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_B_NOTE_MAT
# 744 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_C_HIGH_NOTE_MAT
# 745 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_NONE
# 746 "data/maps/SlateportCity/scripts.pory"
	release
# 747 "data/maps/SlateportCity/scripts.pory"
	end
# 748 "data/maps/SlateportCity/scripts.pory"

# 749 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AccurateMoveTMClerk::
# 750 "data/maps/SlateportCity/scripts.pory"
	lock
# 751 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 752 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 753 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 754 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_AccurateTMs
# 755 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 756 "data/maps/SlateportCity/scripts.pory"
	release
# 757 "data/maps/SlateportCity/scripts.pory"
	end
# 758 "data/maps/SlateportCity/scripts.pory"

# 759 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EvolutionItemClerk::
# 760 "data/maps/SlateportCity/scripts.pory"
	lock
# 761 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 762 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ISellEvolutionItems
# 763 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 764 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_EvolutionItems
# 765 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 766 "data/maps/SlateportCity/scripts.pory"
	release
# 767 "data/maps/SlateportCity/scripts.pory"
	end
# 768 "data/maps/SlateportCity/scripts.pory"

# 769 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonSpecificItemClerk::
# 770 "data/maps/SlateportCity/scripts.pory"
	lock
# 771 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 772 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ISellItemsThatMake
# 773 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 774 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_MonSpecificItems
# 775 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 776 "data/maps/SlateportCity/scripts.pory"
	release
# 777 "data/maps/SlateportCity/scripts.pory"
	end
# 778 "data/maps/SlateportCity/scripts.pory"

# 779 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 780 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_AccurateTMs:
# 781 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_AERIAL_ACE
# 782 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_DISARMING_VOICE
# 783 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_FEINT_ATTACK
# 784 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_MAGICAL_LEAF
# 785 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_SHOCK_WAVE
# 786 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NONE
# 787 "data/maps/SlateportCity/scripts.pory"
	release
# 788 "data/maps/SlateportCity/scripts.pory"
	end
# 789 "data/maps/SlateportCity/scripts.pory"

# 790 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 791 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_EvolutionItems:
# 792 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_GALARICA_CUFF
# 793 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_GALARICA_WREATH
# 794 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_METAL_ALLOY
# 795 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_BLACK_AUGURITE
# 796 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PEAT_BLOCK
# 797 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TART_APPLE
# 798 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SWEET_APPLE
# 799 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SYRUPY_APPLE
# 800 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NONE
# 801 "data/maps/SlateportCity/scripts.pory"
	release
# 802 "data/maps/SlateportCity/scripts.pory"
	end
# 803 "data/maps/SlateportCity/scripts.pory"

# 804 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 805 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_MonSpecificItems:
# 806 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_DRAGON_SCALE
# 807 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ELECTIRIZER
# 808 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_MAGMARIZER
# 809 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_REAPER_CLOTH
# 810 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PRISM_SCALE
# 811 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SACHET
# 812 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CRACKED_POT
# 813 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_UNREMARKABLE_TEACUP
# 814 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_DAMP_ROCK
# 815 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_HEAT_ROCK
# 816 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ICY_ROCK
# 817 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NONE
# 818 "data/maps/SlateportCity/scripts.pory"
	release
# 819 "data/maps/SlateportCity/scripts.pory"
	end
# 820 "data/maps/SlateportCity/scripts.pory"

# 821 "data/maps/SlateportCity/scripts.pory"
@ Scene with Capt Sterns interview and Team Aqua announcing plans to steal Submarine
# 822 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CaptStern::
# 823 "data/maps/SlateportCity/scripts.pory"
	lockall
# 824 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternMoveAheadWithExploration, MSGBOX_DEFAULT
# 825 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GabbyWonderfulThanksForInterview, MSGBOX_DEFAULT
# 826 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 827 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GABBY, Common_Movement_WalkInPlaceFasterRight
# 828 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 829 "data/maps/SlateportCity/scripts.pory"
	delay 10
# 830 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_TY, Common_Movement_WalkInPlaceFasterDown
# 831 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 832 "data/maps/SlateportCity/scripts.pory"
	delay 25
# 833 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, SlateportCity_Movement_SternWatchGabbyAndTyExit
# 834 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerFaceStern
# 835 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GABBY, SlateportCity_Movement_GabbyExit
# 836 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_TY, SlateportCity_Movement_TyExit
# 837 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 838 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_GABBY
# 839 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_TY
# 840 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhewFirstInterview, MSGBOX_DEFAULT
# 841 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
# 842 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 843 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhPlayerWeMadeDiscovery, MSGBOX_DEFAULT
# 844 "data/maps/SlateportCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 845 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaWillAssumeControlOfSubmarine, MSGBOX_DEFAULT
# 846 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_COOK, Common_Movement_WalkInPlaceFasterLeft
# 847 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_FAT_MAN, Common_Movement_WalkInPlaceFasterLeft
# 848 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, SlateportCity_Movement_OldWomanConcern
# 849 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_RICH_BOY, Common_Movement_QuestionMark
# 850 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_MAN_1, SlateportCity_Movement_ManConcern
# 851 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 852 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterDown
# 853 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 854 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhatWasAllThat, MSGBOX_DEFAULT
# 855 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 856 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_ExclamationMark
# 857 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 858 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_Delay48
# 859 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 860 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
# 861 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 862 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FromHarborTryingToTakeSub, MSGBOX_DEFAULT
# 863 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 864 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 865 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, SlateportCity_Movement_SternEnterHarbor
# 866 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerEnterHarbor
# 867 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 868 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_CAPT_STERN
# 869 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_CAPTAIN_STERN
# 870 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SUBMARINE_SHADOW
# 871 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT
# 872 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_ARCHIE
# 873 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_CITY_STATE, 2
# 874 "data/maps/SlateportCity/scripts.pory"
	warp MAP_SLATEPORT_CITY_HARBOR, 11, 14
# 875 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 876 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 877 "data/maps/SlateportCity/scripts.pory"
	end
# 878 "data/maps/SlateportCity/scripts.pory"

# 879 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_OldWomanConcern:
# 880 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 881 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 882 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 883 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 884 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 885 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 886 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 887 "data/maps/SlateportCity/scripts.pory"
	step_end
# 888 "data/maps/SlateportCity/scripts.pory"

# 889 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ManConcern:
# 890 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 891 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 892 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 893 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_down
# 894 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 895 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 896 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 897 "data/maps/SlateportCity/scripts.pory"
	step_end
# 898 "data/maps/SlateportCity/scripts.pory"

# 899 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_GabbyExit:
# 900 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 901 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 902 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 903 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 904 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 905 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 906 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 907 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 908 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 909 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 910 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 911 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 912 "data/maps/SlateportCity/scripts.pory"
	step_end
# 913 "data/maps/SlateportCity/scripts.pory"

# 914 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_TyExit:
# 915 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 916 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 917 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 918 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 919 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 920 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 921 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 922 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 923 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 924 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 925 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 926 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 927 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 928 "data/maps/SlateportCity/scripts.pory"
	step_end
# 929 "data/maps/SlateportCity/scripts.pory"

# 930 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_Unused:
# 931 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 932 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 933 "data/maps/SlateportCity/scripts.pory"
	step_end
# 934 "data/maps/SlateportCity/scripts.pory"

# 935 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternEnterHarbor:
# 936 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 937 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 938 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 939 "data/maps/SlateportCity/scripts.pory"
	set_invisible
# 940 "data/maps/SlateportCity/scripts.pory"
	step_end
# 941 "data/maps/SlateportCity/scripts.pory"

# 942 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternWatchGabbyAndTyExit:
# 943 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 944 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 945 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 946 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 947 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 948 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 949 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 950 "data/maps/SlateportCity/scripts.pory"
	step_end
# 951 "data/maps/SlateportCity/scripts.pory"

# 952 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerEnterHarbor:
# 953 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 954 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 955 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 956 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 957 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 958 "data/maps/SlateportCity/scripts.pory"
	step_end
# 959 "data/maps/SlateportCity/scripts.pory"

# 960 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceStern:
# 961 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 962 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 963 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 964 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 965 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 966 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 967 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 968 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_down
# 969 "data/maps/SlateportCity/scripts.pory"
	step_end
# 970 "data/maps/SlateportCity/scripts.pory"

# 971 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Ty::
# 972 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BigSmileForCamera, MSGBOX_SIGN
# 973 "data/maps/SlateportCity/scripts.pory"
	end
# 974 "data/maps/SlateportCity/scripts.pory"

# 975 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Gabby::
# 976 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MostInvaluableExperience, MSGBOX_SIGN
# 977 "data/maps/SlateportCity/scripts.pory"
	end
# 978 "data/maps/SlateportCity/scripts.pory"

# 979 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man3::
# 980 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WonderIfLighthouseStartlesPokemon, MSGBOX_NPC
# 981 "data/maps/SlateportCity/scripts.pory"
	end
# 982 "data/maps/SlateportCity/scripts.pory"

# 983 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryPowderClerk::
# 984 "data/maps/SlateportCity/scripts.pory"
	lock
# 985 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 986 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POWDER_JAR, SlateportCity_EventScript_ReceivedPowderJar
# 987 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerries, MSGBOX_DEFAULT
# 988 "data/maps/SlateportCity/scripts.pory"
	giveitem ITEM_POWDER_JAR
# 989 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_RECEIVED_POWDER_JAR
# 990 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 991 "data/maps/SlateportCity/scripts.pory"
	release
# 992 "data/maps/SlateportCity/scripts.pory"
	end
# 993 "data/maps/SlateportCity/scripts.pory"

# 994 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ReceivedPowderJar::
# 995 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, 1
# 996 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 997 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_ExplainBerryPowder
# 998 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BroughtMeSomeBerryPowder, MSGBOX_DEFAULT
# 999 "data/maps/SlateportCity/scripts.pory"
	special DisplayBerryPowderVendorMenu
# 1000 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 1001 "data/maps/SlateportCity/scripts.pory"
	end
# 1002 "data/maps/SlateportCity/scripts.pory"

# 1003 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ExplainBerryPowder::
# 1004 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 1005 "data/maps/SlateportCity/scripts.pory"
	release
# 1006 "data/maps/SlateportCity/scripts.pory"
	end
# 1007 "data/maps/SlateportCity/scripts.pory"

# 1008 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ChooseBerryPowderItem::
# 1009 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ExchangeWhatWithIt
# 1010 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 1011 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BERRY_POWDER_VENDOR
# 1012 "data/maps/SlateportCity/scripts.pory"
	special ShowScrollableMultichoice
# 1013 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 1014 "data/maps/SlateportCity/scripts.pory"
	switch VAR_RESULT
# 1015 "data/maps/SlateportCity/scripts.pory"
	case 0, SlateportCity_EventScript_EnergyPowder
# 1016 "data/maps/SlateportCity/scripts.pory"
	case 1, SlateportCity_EventScript_EnergyRoot
# 1017 "data/maps/SlateportCity/scripts.pory"
	case 2, SlateportCity_EventScript_HealPowder
# 1018 "data/maps/SlateportCity/scripts.pory"
	case 3, SlateportCity_EventScript_RevivalHerb
# 1019 "data/maps/SlateportCity/scripts.pory"
	case 4, SlateportCity_EventScript_Protein
# 1020 "data/maps/SlateportCity/scripts.pory"
	case 5, SlateportCity_EventScript_Iron
# 1021 "data/maps/SlateportCity/scripts.pory"
	case 6, SlateportCity_EventScript_Carbos
# 1022 "data/maps/SlateportCity/scripts.pory"
	case 7, SlateportCity_EventScript_Calcium
# 1023 "data/maps/SlateportCity/scripts.pory"
	case 8, SlateportCity_EventScript_Zinc
# 1024 "data/maps/SlateportCity/scripts.pory"
	case 9, SlateportCity_EventScript_HPUp
# 1025 "data/maps/SlateportCity/scripts.pory"
	case 10, SlateportCity_EventScript_PPUp
# 1026 "data/maps/SlateportCity/scripts.pory"
	case 11, SlateportCity_EventScript_CancelPowderItemSelect
# 1027 "data/maps/SlateportCity/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_EventScript_CancelPowderItemSelect
# 1028 "data/maps/SlateportCity/scripts.pory"
	end
# 1029 "data/maps/SlateportCity/scripts.pory"

# 1030 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyPowder::
# 1031 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_POWDER
# 1032 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_POWDER
# 1033 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 1034 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1035 "data/maps/SlateportCity/scripts.pory"
	end
# 1036 "data/maps/SlateportCity/scripts.pory"

# 1037 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyRoot::
# 1038 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_ROOT
# 1039 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_ROOT
# 1040 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 80
# 1041 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1042 "data/maps/SlateportCity/scripts.pory"
	end
# 1043 "data/maps/SlateportCity/scripts.pory"

# 1044 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HealPowder::
# 1045 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HEAL_POWDER
# 1046 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HEAL_POWDER
# 1047 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 1048 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1049 "data/maps/SlateportCity/scripts.pory"
	end
# 1050 "data/maps/SlateportCity/scripts.pory"

# 1051 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RevivalHerb::
# 1052 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_REVIVAL_HERB
# 1053 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_REVIVAL_HERB
# 1054 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 300
# 1055 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1056 "data/maps/SlateportCity/scripts.pory"
	end
# 1057 "data/maps/SlateportCity/scripts.pory"

# 1058 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Protein::
# 1059 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PROTEIN
# 1060 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PROTEIN
# 1061 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 1062 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1063 "data/maps/SlateportCity/scripts.pory"
	end
# 1064 "data/maps/SlateportCity/scripts.pory"

# 1065 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Iron::
# 1066 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_IRON
# 1067 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_IRON
# 1068 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 1069 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1070 "data/maps/SlateportCity/scripts.pory"
	end
# 1071 "data/maps/SlateportCity/scripts.pory"

# 1072 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Carbos::
# 1073 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CARBOS
# 1074 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CARBOS
# 1075 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 1076 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1077 "data/maps/SlateportCity/scripts.pory"
	end
# 1078 "data/maps/SlateportCity/scripts.pory"

# 1079 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Calcium::
# 1080 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CALCIUM
# 1081 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CALCIUM
# 1082 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 1083 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1084 "data/maps/SlateportCity/scripts.pory"
	end
# 1085 "data/maps/SlateportCity/scripts.pory"

# 1086 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Zinc::
# 1087 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ZINC
# 1088 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ZINC
# 1089 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 1090 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1091 "data/maps/SlateportCity/scripts.pory"
	end
# 1092 "data/maps/SlateportCity/scripts.pory"

# 1093 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HPUp::
# 1094 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HP_UP
# 1095 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HP_UP
# 1096 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 1097 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1098 "data/maps/SlateportCity/scripts.pory"
	end
# 1099 "data/maps/SlateportCity/scripts.pory"

# 1100 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PPUp::
# 1101 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PP_UP
# 1102 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PP_UP
# 1103 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 3000
# 1104 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1105 "data/maps/SlateportCity/scripts.pory"
	end
# 1106 "data/maps/SlateportCity/scripts.pory"

# 1107 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CancelPowderItemSelect::
# 1108 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ComeBackToTradeBerryPowder, MSGBOX_DEFAULT
# 1109 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 1110 "data/maps/SlateportCity/scripts.pory"
	release
# 1111 "data/maps/SlateportCity/scripts.pory"
	end
# 1112 "data/maps/SlateportCity/scripts.pory"

# 1113 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_TryBuyBerryPowderItem::
# 1114 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExchangeBerryPowderForItem, MSGBOX_YESNO
# 1115 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_EventScript_ChooseBerryPowderItem
# 1116 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 1117 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 1118 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NotEnoughBerryPowder
# 1119 "data/maps/SlateportCity/scripts.pory"
	giveitem VAR_0x8008
# 1120 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NoRoomForBerryPowderItem
# 1121 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 1122 "data/maps/SlateportCity/scripts.pory"
	special TakeBerryPowder
# 1123 "data/maps/SlateportCity/scripts.pory"
	special PrintPlayerBerryPowderAmount
# 1124 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FineBerryPowderTradeSomethingElse, MSGBOX_YESNO
# 1125 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SlateportCity_EventScript_ChooseBerryPowderItem
# 1126 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhenYouGetMoreBringItToMe, MSGBOX_DEFAULT
# 1127 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 1128 "data/maps/SlateportCity/scripts.pory"
	release
# 1129 "data/maps/SlateportCity/scripts.pory"
	end
# 1130 "data/maps/SlateportCity/scripts.pory"

# 1131 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NoRoomForBerryPowderItem::
# 1132 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_TheBagIsFull, MSGBOX_DEFAULT
# 1133 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 1134 "data/maps/SlateportCity/scripts.pory"
	release
# 1135 "data/maps/SlateportCity/scripts.pory"
	end
# 1136 "data/maps/SlateportCity/scripts.pory"

# 1137 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NotEnoughBerryPowder::
# 1138 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontHaveEnoughBerryPowder, MSGBOX_DEFAULT
# 1139 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 1140 "data/maps/SlateportCity/scripts.pory"
	end
# 1141 "data/maps/SlateportCity/scripts.pory"

# 1142 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottBattleTentScene::
# 1143 "data/maps/SlateportCity/scripts.pory"
	lockall
# 1144 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 1145 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1146 "data/maps/SlateportCity/scripts.pory"
	opendoor 10, 12
# 1147 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 1148 "data/maps/SlateportCity/scripts.pory"
	@addobject LOCALID_SCOTT
# 1149 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PushPlayerDown
# 1150 "data/maps/SlateportCity/scripts.pory"
	@applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExitBattleTent
# 1151 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1152 "data/maps/SlateportCity/scripts.pory"
	closedoor 10, 12
# 1153 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 1154 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_TakingBattleTentChallenge, MSGBOX_DEFAULT
# 1155 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 1156 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerWatchScottExit
# 1157 "data/maps/SlateportCity/scripts.pory"
	@applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExitAfterBattleTent
# 1158 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1159 "data/maps/SlateportCity/scripts.pory"
	@removeobject LOCALID_SCOTT
# 1160 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 1161 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
# 1162 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 1163 "data/maps/SlateportCity/scripts.pory"
	end
# 1164 "data/maps/SlateportCity/scripts.pory"

# 1165 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PushPlayerDown:
# 1166 "data/maps/SlateportCity/scripts.pory"
	lock_facing_direction
# 1167 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 1168 "data/maps/SlateportCity/scripts.pory"
	unlock_facing_direction
# 1169 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1170 "data/maps/SlateportCity/scripts.pory"

# 1171 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerWatchScottExit:
# 1172 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1173 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 1174 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1175 "data/maps/SlateportCity/scripts.pory"

# 1176 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitBattleTent:
# 1177 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 1178 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 1179 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1180 "data/maps/SlateportCity/scripts.pory"

# 1181 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitAfterBattleTent:
# 1182 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1183 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1184 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1185 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1186 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1187 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1188 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1189 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1190 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1191 "data/maps/SlateportCity/scripts.pory"

# 1192 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryCrushRankingsSign::
# 1193 "data/maps/SlateportCity/scripts.pory"
	lockall
# 1194 "data/maps/SlateportCity/scripts.pory"
	special ShowBerryCrushRankings
# 1195 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 1196 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 1197 "data/maps/SlateportCity/scripts.pory"
	end
# 1198 "data/maps/SlateportCity/scripts.pory"

# 1199 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ISellEvolutionItems:
# 1200 "data/maps/SlateportCity/scripts.pory"
	.string "Welcome!\p"
# 1201 "data/maps/SlateportCity/scripts.pory"
	.string "I sell one-of-a-kind evolution items!$"
# 1202 "data/maps/SlateportCity/scripts.pory"

# 1203 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ISellItemsThatMake:
# 1204 "data/maps/SlateportCity/scripts.pory"
	.string "Welcome!\p"
# 1205 "data/maps/SlateportCity/scripts.pory"
	.string "I sell items that make certain Pokémon\n"
# 1206 "data/maps/SlateportCity/scripts.pory"
	.string "stronger!$"
# 1207 "data/maps/SlateportCity/scripts.pory"

# 1208 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EnergyGuruSellWhatYouNeed:
# 1209 "data/maps/SlateportCity/scripts.pory"
	.string "I'm the ENERGY GURU! I'll go for it and\n"
# 1210 "data/maps/SlateportCity/scripts.pory"
	.string "sell you what you need!$"
# 1211 "data/maps/SlateportCity/scripts.pory"

# 1212 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OhYourPokemon:
# 1213 "data/maps/SlateportCity/scripts.pory"
	.string "Oh?\n"
# 1214 "data/maps/SlateportCity/scripts.pory"
	.string "Your {STR_VAR_1}…$"
# 1215 "data/maps/SlateportCity/scripts.pory"

# 1216 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseGiveItThisEffortRibbon:
# 1217 "data/maps/SlateportCity/scripts.pory"
	.string "Went for it stupendously!\p"
# 1218 "data/maps/SlateportCity/scripts.pory"
	.string "As its reward, please give it this\n"
# 1219 "data/maps/SlateportCity/scripts.pory"
	.string "EFFORT RIBBON.$"
# 1220 "data/maps/SlateportCity/scripts.pory"

# 1221 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ReceivedEffortRibbon:
# 1222 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} received the EFFORT RIBBON.$"
# 1223 "data/maps/SlateportCity/scripts.pory"

# 1224 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PutEffortRibbonOnMon:
# 1225 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} put the EFFORT RIBBON\n"
# 1226 "data/maps/SlateportCity/scripts.pory"
	.string "on {STR_VAR_1}.$"
# 1227 "data/maps/SlateportCity/scripts.pory"

# 1228 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoForItLittleHarder:
# 1229 "data/maps/SlateportCity/scripts.pory"
	.string "You have to go for it a little harder.\p"
# 1230 "data/maps/SlateportCity/scripts.pory"
	.string "If you do, I'll give your Pokémon\n"
# 1231 "data/maps/SlateportCity/scripts.pory"
	.string "something nice.$"
# 1232 "data/maps/SlateportCity/scripts.pory"

# 1233 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EffortRibbonLooksGoodOnIt:
# 1234 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! Your {STR_VAR_1}, that EFFORT\n"
# 1235 "data/maps/SlateportCity/scripts.pory"
	.string "RIBBON looks good on it!$"
# 1236 "data/maps/SlateportCity/scripts.pory"

# 1237 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WonderIfLighthouseStartlesPokemon:
# 1238 "data/maps/SlateportCity/scripts.pory"
	.string "The light of the lighthouse reaches\n"
# 1239 "data/maps/SlateportCity/scripts.pory"
	.string "dozens of miles away.\p"
# 1240 "data/maps/SlateportCity/scripts.pory"
	.string "I wonder if it doesn't startle Pokémon\n"
# 1241 "data/maps/SlateportCity/scripts.pory"
	.string "in the sea.$"
# 1242 "data/maps/SlateportCity/scripts.pory"

# 1243 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SeaweedFullOfLife:
# 1244 "data/maps/SlateportCity/scripts.pory"
	.string "Ooh, look at this!\p"
# 1245 "data/maps/SlateportCity/scripts.pory"
	.string "The seaweed you can get around these\n"
# 1246 "data/maps/SlateportCity/scripts.pory"
	.string "parts is fresh and full of life.\p"
# 1247 "data/maps/SlateportCity/scripts.pory"
	.string "Why, it looks like it can even rear up\n"
# 1248 "data/maps/SlateportCity/scripts.pory"
	.string "and attack!$"
# 1249 "data/maps/SlateportCity/scripts.pory"

# 1250 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HowTownIsBornAndGrows:
# 1251 "data/maps/SlateportCity/scripts.pory"
	.string "Where the water is clean, the fruits\n"
# 1252 "data/maps/SlateportCity/scripts.pory"
	.string "of bountiful harvest gather.\p"
# 1253 "data/maps/SlateportCity/scripts.pory"
	.string "And where people gather, a market\n"
# 1254 "data/maps/SlateportCity/scripts.pory"
	.string "soon starts.\p"
# 1255 "data/maps/SlateportCity/scripts.pory"
	.string "That is how a town is born and grows.$"
# 1256 "data/maps/SlateportCity/scripts.pory"

# 1257 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SlateportWonderfulPlace:
# 1258 "data/maps/SlateportCity/scripts.pory"
	.string "Shopping where you can breathe the\n"
# 1259 "data/maps/SlateportCity/scripts.pory"
	.string "scent of the ocean…\p"
# 1260 "data/maps/SlateportCity/scripts.pory"
	.string "Slateport is such a wonderful place!$"
# 1261 "data/maps/SlateportCity/scripts.pory"

# 1262 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyBricksSoDecorWontGetDirty:
# 1263 "data/maps/SlateportCity/scripts.pory"
	.string "If you put Dolls or Cushions on\n"
# 1264 "data/maps/SlateportCity/scripts.pory"
	.string "the floor, they'll get dirty.\p"
# 1265 "data/maps/SlateportCity/scripts.pory"
	.string "I'm going to buy some Bricks so my\n"
# 1266 "data/maps/SlateportCity/scripts.pory"
	.string "Dolls and Cushions won't get dirty\l"
# 1267 "data/maps/SlateportCity/scripts.pory"
	.string "when I leave them out.$"
# 1268 "data/maps/SlateportCity/scripts.pory"

# 1269 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoingToCompeteInBattleTent:
# 1270 "data/maps/SlateportCity/scripts.pory"
	.string "Wroooar! I'm going to compete in\n"
# 1271 "data/maps/SlateportCity/scripts.pory"
	.string "the Battle Tent, too!\p"
# 1272 "data/maps/SlateportCity/scripts.pory"
	.string "But before that, I need to catch\n"
# 1273 "data/maps/SlateportCity/scripts.pory"
	.string "some Pokémon!$"
# 1274 "data/maps/SlateportCity/scripts.pory"

# 1275 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BushedHikingFromMauville:
# 1276 "data/maps/SlateportCity/scripts.pory"
	.string "Whew… I'm just bushed…\p"
# 1277 "data/maps/SlateportCity/scripts.pory"
	.string "I hiked over from Mauville City.\n"
# 1278 "data/maps/SlateportCity/scripts.pory"
	.string "But, boy, this city's huge.\p"
# 1279 "data/maps/SlateportCity/scripts.pory"
	.string "If I'd known this, I would've ridden\n"
# 1280 "data/maps/SlateportCity/scripts.pory"
	.string "my Bike here.$"
# 1281 "data/maps/SlateportCity/scripts.pory"

# 1282 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EveryoneCallsHimCaptStern:
# 1283 "data/maps/SlateportCity/scripts.pory"
	.string "Stern, the fellow who built the\n"
# 1284 "data/maps/SlateportCity/scripts.pory"
	.string "Museum, also happens to be the leader\l"
# 1285 "data/maps/SlateportCity/scripts.pory"
	.string "of an undersea exploration team.\p"
# 1286 "data/maps/SlateportCity/scripts.pory"
	.string "So, everyone calls him Capt. Stern.$"
# 1287 "data/maps/SlateportCity/scripts.pory"

# 1288 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsLongLineOverThere:
# 1289 "data/maps/SlateportCity/scripts.pory"
	.string "What is that over there?\n"
# 1290 "data/maps/SlateportCity/scripts.pory"
	.string "That long line…$"
# 1291 "data/maps/SlateportCity/scripts.pory"

# 1292 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_VisitedMuseumOften:
# 1293 "data/maps/SlateportCity/scripts.pory"
	.string "When I was a child, I visited\n"
# 1294 "data/maps/SlateportCity/scripts.pory"
	.string "the Museum often.\p"
# 1295 "data/maps/SlateportCity/scripts.pory"
	.string "I used to dream about the mysteries of\n"
# 1296 "data/maps/SlateportCity/scripts.pory"
	.string "the sea after seeing the exhibits.$"
# 1297 "data/maps/SlateportCity/scripts.pory"

# 1298 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_QuitPushing:
# 1299 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, there! Quit pushing!\n"
# 1300 "data/maps/SlateportCity/scripts.pory"
	.string "This is the line, can't you see?$"
# 1301 "data/maps/SlateportCity/scripts.pory"

# 1302 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaHasPolicy:
# 1303 "data/maps/SlateportCity/scripts.pory"
	.string "Team Aqua has a policy of\n"
# 1304 "data/maps/SlateportCity/scripts.pory"
	.string "assembling and dispersing at\l"
# 1305 "data/maps/SlateportCity/scripts.pory"
	.string "the operation site.$"
# 1306 "data/maps/SlateportCity/scripts.pory"

# 1307 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BossIsBrilliant:
# 1308 "data/maps/SlateportCity/scripts.pory"
	.string "Our Boss is brilliant.\p"
# 1309 "data/maps/SlateportCity/scripts.pory"
	.string "What would he want to do with\n"
# 1310 "data/maps/SlateportCity/scripts.pory"
	.string "a Museum now?$"
# 1311 "data/maps/SlateportCity/scripts.pory"

# 1312 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsNewSchemeIWonder:
# 1313 "data/maps/SlateportCity/scripts.pory"
	.string "What's the new scheme, I wonder?\p"
# 1314 "data/maps/SlateportCity/scripts.pory"
	.string "Our Boss is scary when he's mad, so\n"
# 1315 "data/maps/SlateportCity/scripts.pory"
	.string "I'd better not screw things up…$"
# 1316 "data/maps/SlateportCity/scripts.pory"

# 1317 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldTakeItAll:
# 1318 "data/maps/SlateportCity/scripts.pory"
	.string "If there's something we need in\n"
# 1319 "data/maps/SlateportCity/scripts.pory"
	.string "the Museum, we should take it all!$"
# 1320 "data/maps/SlateportCity/scripts.pory"

# 1321 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontButtIn:
# 1322 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, you there!\n"
# 1323 "data/maps/SlateportCity/scripts.pory"
	.string "Don't butt in!$"
# 1324 "data/maps/SlateportCity/scripts.pory"

# 1325 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RemindsMeOfLongLineForGames:
# 1326 "data/maps/SlateportCity/scripts.pory"
	.string "A long line, huh?\p"
# 1327 "data/maps/SlateportCity/scripts.pory"
	.string "It reminds me of the times I lined up to\n"
# 1328 "data/maps/SlateportCity/scripts.pory"
	.string "buy smash-hit games…$"
# 1329 "data/maps/SlateportCity/scripts.pory"

# 1330 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhyAreWeLiningUp:
# 1331 "data/maps/SlateportCity/scripts.pory"
	.string "Why are we even lining up and paying?\n"
# 1332 "data/maps/SlateportCity/scripts.pory"
	.string "We should just march in!$"
# 1333 "data/maps/SlateportCity/scripts.pory"

# 1334 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatDoYouWant:
# 1335 "data/maps/SlateportCity/scripts.pory"
	.string "What?\n"
# 1336 "data/maps/SlateportCity/scripts.pory"
	.string "What do you want?$"
# 1337 "data/maps/SlateportCity/scripts.pory"

# 1338 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_IllReadSignForYou:
# 1339 "data/maps/SlateportCity/scripts.pory"
	.string "You want to read this sign?\n"
# 1340 "data/maps/SlateportCity/scripts.pory"
	.string "I'll read it for you!$"
# 1341 "data/maps/SlateportCity/scripts.pory"

# 1342 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SaysSomethingLikeSeaIsEndless:
# 1343 "data/maps/SlateportCity/scripts.pory"
	.string "Let's see…\p"
# 1344 "data/maps/SlateportCity/scripts.pory"
	.string "Um… I think it says something like\n"
# 1345 "data/maps/SlateportCity/scripts.pory"
	.string "“the life in the sea is endless.”\p"
# 1346 "data/maps/SlateportCity/scripts.pory"
	.string "Yup, I'm pretty sure that's what\n"
# 1347 "data/maps/SlateportCity/scripts.pory"
	.string "it says.$"
# 1348 "data/maps/SlateportCity/scripts.pory"

# 1349 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldveBroughtMyGameBoy:
# 1350 "data/maps/SlateportCity/scripts.pory"
	.string "Grumble…\p"
# 1351 "data/maps/SlateportCity/scripts.pory"
	.string "I should've brought my Game Boy\n"
# 1352 "data/maps/SlateportCity/scripts.pory"
	.string "Advance so I wouldn't get bored in line…\p"
# 1353 "data/maps/SlateportCity/scripts.pory"
	.string "Grumble…$"
# 1354 "data/maps/SlateportCity/scripts.pory"

# 1355 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HotSpringsAfterOperation:
# 1356 "data/maps/SlateportCity/scripts.pory"
	.string "When this operation's over, I'll take\n"
# 1357 "data/maps/SlateportCity/scripts.pory"
	.string "you to a hot spring spa!\p"
# 1358 "data/maps/SlateportCity/scripts.pory"
	.string "That's what our leader said.\n"
# 1359 "data/maps/SlateportCity/scripts.pory"
	.string "I can't wait!$"
# 1360 "data/maps/SlateportCity/scripts.pory"

# 1361 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SeaIsSoWet:
# 1362 "data/maps/SlateportCity/scripts.pory"
	.string "The sea is just so vast…\p"
# 1363 "data/maps/SlateportCity/scripts.pory"
	.string "Could the sea have been made by\n"
# 1364 "data/maps/SlateportCity/scripts.pory"
	.string "the tears shed by Pokémon?$"
# 1365 "data/maps/SlateportCity/scripts.pory"

# 1366 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SinkOldBoats:
# 1367 "data/maps/SlateportCity/scripts.pory"
	.string "Do you know what they do with old\n"
# 1368 "data/maps/SlateportCity/scripts.pory"
	.string "ships that become too creaky to sail?\p"
# 1369 "data/maps/SlateportCity/scripts.pory"
	.string "They sink them in the sea so they\n"
# 1370 "data/maps/SlateportCity/scripts.pory"
	.string "become habitats for Pokémon.$"
# 1371 "data/maps/SlateportCity/scripts.pory"

# 1372 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyTooMuch:
# 1373 "data/maps/SlateportCity/scripts.pory"
	.string "Whenever I visit here, I get carried\n"
# 1374 "data/maps/SlateportCity/scripts.pory"
	.string "away and buy too much.$"
# 1375 "data/maps/SlateportCity/scripts.pory"

# 1376 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GetNameRaterToHelpYou:
# 1377 "data/maps/SlateportCity/scripts.pory"
	.string "If you want to change your Pokémon's\n"
# 1378 "data/maps/SlateportCity/scripts.pory"
	.string "nickname, you can do it in the Party\l"
# 1379 "data/maps/SlateportCity/scripts.pory"
	.string "Menu!$"
# 1380 "data/maps/SlateportCity/scripts.pory"

# 1381 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CantChangeTradeMonName:
# 1382 "data/maps/SlateportCity/scripts.pory"
	.string "Any Pokémon you get in a trade,\n"
# 1383 "data/maps/SlateportCity/scripts.pory"
	.string "you can change its nickname.\p"
# 1384 "data/maps/SlateportCity/scripts.pory"
	.string "The world is your oyster, man!$"
# 1385 "data/maps/SlateportCity/scripts.pory"

# 1386 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentBuiltRecently:
# 1387 "data/maps/SlateportCity/scripts.pory"
	.string "Recently, a Battle Tent was built\n"
# 1388 "data/maps/SlateportCity/scripts.pory"
	.string "in Slateport.\p"
# 1389 "data/maps/SlateportCity/scripts.pory"
	.string "Gyms are fun, but the Battle Tent's\n"
# 1390 "data/maps/SlateportCity/scripts.pory"
	.string "awesome in its own way.\p"
# 1391 "data/maps/SlateportCity/scripts.pory"
	.string "You should go find tough Pokémon\n"
# 1392 "data/maps/SlateportCity/scripts.pory"
	.string "for the Battle Tent!$"
# 1393 "data/maps/SlateportCity/scripts.pory"

# 1394 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptSternBeingInterviewed:
# 1395 "data/maps/SlateportCity/scripts.pory"
	.string "I was hoping that it was a famous star\n"
# 1396 "data/maps/SlateportCity/scripts.pory"
	.string "so I could get an autograph.\p"
# 1397 "data/maps/SlateportCity/scripts.pory"
	.string "But who's that being interviewed?\n"
# 1398 "data/maps/SlateportCity/scripts.pory"
	.string "Isn't that Capt. Stern?$"
# 1399 "data/maps/SlateportCity/scripts.pory"

# 1400 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_InterviewerSoCool:
# 1401 "data/maps/SlateportCity/scripts.pory"
	.string "That lady interviewer is so cool\n"
# 1402 "data/maps/SlateportCity/scripts.pory"
	.string "and pretty.\p"
# 1403 "data/maps/SlateportCity/scripts.pory"
	.string "When I grow up, I'm going to be\n"
# 1404 "data/maps/SlateportCity/scripts.pory"
	.string "an international journalist!$"
# 1405 "data/maps/SlateportCity/scripts.pory"

# 1406 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternSaysDiscoveredSomething:
# 1407 "data/maps/SlateportCity/scripts.pory"
	.string "Capt. Stern says they discovered\n"
# 1408 "data/maps/SlateportCity/scripts.pory"
	.string "something at the bottom of the sea.\p"
# 1409 "data/maps/SlateportCity/scripts.pory"
	.string "I wonder what it is?\n"
# 1410 "data/maps/SlateportCity/scripts.pory"
	.string "What could it be?$"
# 1411 "data/maps/SlateportCity/scripts.pory"

# 1412 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainComeBackWithBigFish:
# 1413 "data/maps/SlateportCity/scripts.pory"
	.string "What's going on here?\p"
# 1414 "data/maps/SlateportCity/scripts.pory"
	.string "Did the good Captain come back with\n"
# 1415 "data/maps/SlateportCity/scripts.pory"
	.string "a big fish from the ocean floor?$"
# 1416 "data/maps/SlateportCity/scripts.pory"

# 1417 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AmIOnTV:
# 1418 "data/maps/SlateportCity/scripts.pory"
	.string "Hey! Are you watching?\n"
# 1419 "data/maps/SlateportCity/scripts.pory"
	.string "Am I on TV?$"
# 1420 "data/maps/SlateportCity/scripts.pory"

# 1421 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainsACelebrity:
# 1422 "data/maps/SlateportCity/scripts.pory"
	.string "A TV interview! Here!\n"
# 1423 "data/maps/SlateportCity/scripts.pory"
	.string "The Captain's a celebrity!$"
# 1424 "data/maps/SlateportCity/scripts.pory"

# 1425 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BigSmileForCamera:
# 1426 "data/maps/SlateportCity/scripts.pory"
	.string "TY: Okay, Capt. Stern, a big smile\n"
# 1427 "data/maps/SlateportCity/scripts.pory"
	.string "for the camera!$"
# 1428 "data/maps/SlateportCity/scripts.pory"

# 1429 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MostInvaluableExperience:
# 1430 "data/maps/SlateportCity/scripts.pory"
	.string "Gabby: I see, I see. You've had a most\n"
# 1431 "data/maps/SlateportCity/scripts.pory"
	.string "invaluable experience…$"
# 1432 "data/maps/SlateportCity/scripts.pory"

# 1433 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternMoveAheadWithExploration:
# 1434 "data/maps/SlateportCity/scripts.pory"
	.string "Capt. Stern: Yes, indeed. We intend to\n"
# 1435 "data/maps/SlateportCity/scripts.pory"
	.string "move ahead with our exploration.$"
# 1436 "data/maps/SlateportCity/scripts.pory"

# 1437 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GabbyWonderfulThanksForInterview:
# 1438 "data/maps/SlateportCity/scripts.pory"
	.string "Gabby: That's wonderful, Capt. Stern!\n"
# 1439 "data/maps/SlateportCity/scripts.pory"
	.string "Thank you for taking the time from\l"
# 1440 "data/maps/SlateportCity/scripts.pory"
	.string "your busy schedule to talk to us.\p"
# 1441 "data/maps/SlateportCity/scripts.pory"
	.string "We hope we can interview you again\n"
# 1442 "data/maps/SlateportCity/scripts.pory"
	.string "with news of more discoveries!$"
# 1443 "data/maps/SlateportCity/scripts.pory"

# 1444 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhewFirstInterview:
# 1445 "data/maps/SlateportCity/scripts.pory"
	.string "Capt. Stern: Whew…\p"
# 1446 "data/maps/SlateportCity/scripts.pory"
	.string "That was my first time to be filmed for\n"
# 1447 "data/maps/SlateportCity/scripts.pory"
	.string "TV. That was nerve-wracking.$"
# 1448 "data/maps/SlateportCity/scripts.pory"

# 1449 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OhPlayerWeMadeDiscovery:
# 1450 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! {PLAYER}{KUN}!\n"
# 1451 "data/maps/SlateportCity/scripts.pory"
	.string "You're looking great!\p"
# 1452 "data/maps/SlateportCity/scripts.pory"
	.string "We made a huge discovery on our last\n"
# 1453 "data/maps/SlateportCity/scripts.pory"
	.string "seafloor exploration.\p"
# 1454 "data/maps/SlateportCity/scripts.pory"
	.string "We found an underwater cavern on\n"
# 1455 "data/maps/SlateportCity/scripts.pory"
	.string "Route 128.\p"
# 1456 "data/maps/SlateportCity/scripts.pory"
	.string "We think it's the habitat of a Pokémon\n"
# 1457 "data/maps/SlateportCity/scripts.pory"
	.string "that's said to have been long extinct.$"
# 1458 "data/maps/SlateportCity/scripts.pory"

# 1459 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaWillAssumeControlOfSubmarine:
# 1460 "data/maps/SlateportCity/scripts.pory"
	.string "Fufufu…\n"
# 1461 "data/maps/SlateportCity/scripts.pory"
	.string "Capt. Stern, I presume.\p"
# 1462 "data/maps/SlateportCity/scripts.pory"
	.string "We of Team Aqua will assume\n"
# 1463 "data/maps/SlateportCity/scripts.pory"
	.string "control of your submarine!\p"
# 1464 "data/maps/SlateportCity/scripts.pory"
	.string "Your objections are meaningless!\n"
# 1465 "data/maps/SlateportCity/scripts.pory"
	.string "We expect your total cooperation!\p"
# 1466 "data/maps/SlateportCity/scripts.pory"
	.string "Fufufu…\n"
# 1467 "data/maps/SlateportCity/scripts.pory"
	.string "Just watch and learn what Team\l"
# 1468 "data/maps/SlateportCity/scripts.pory"
	.string "Aqua has planned!$"
# 1469 "data/maps/SlateportCity/scripts.pory"

# 1470 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhatWasAllThat:
# 1471 "data/maps/SlateportCity/scripts.pory"
	.string "Capt. Stern: What was that all about?\p"
# 1472 "data/maps/SlateportCity/scripts.pory"
	.string "It sounded like someone using\n"
# 1473 "data/maps/SlateportCity/scripts.pory"
	.string "a megaphone…\p"
# 1474 "data/maps/SlateportCity/scripts.pory"
	.string "Where did it come from?$"
# 1475 "data/maps/SlateportCity/scripts.pory"

# 1476 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FromHarborTryingToTakeSub:
# 1477 "data/maps/SlateportCity/scripts.pory"
	.string "It's from the Harbor!\p"
# 1478 "data/maps/SlateportCity/scripts.pory"
	.string "The submarine!\n"
# 1479 "data/maps/SlateportCity/scripts.pory"
	.string "They're trying to take it!$"
# 1480 "data/maps/SlateportCity/scripts.pory"

# 1481 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseComeWithMe:
# 1482 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}{KUN}!\n"
# 1483 "data/maps/SlateportCity/scripts.pory"
	.string "Please, come with me!$"
# 1484 "data/maps/SlateportCity/scripts.pory"

# 1485 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentSign:
# 1486 "data/maps/SlateportCity/scripts.pory"
	.string "Battle Tent Slateport Site\n"
# 1487 "data/maps/SlateportCity/scripts.pory"
	.string "“Find it! The ultimate Pokémon!”$"
# 1488 "data/maps/SlateportCity/scripts.pory"

# 1489 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardWantedSign:
# 1490 "data/maps/SlateportCity/scripts.pory"
	.string "Stern's Shipyard\p"
# 1491 "data/maps/SlateportCity/scripts.pory"
	.string "“Wanted: A sailor capable of sailing\n"
# 1492 "data/maps/SlateportCity/scripts.pory"
	.string "in all currents.”$"
# 1493 "data/maps/SlateportCity/scripts.pory"

# 1494 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardNearsCompletion:
# 1495 "data/maps/SlateportCity/scripts.pory"
	.string "Stern's Shipyard\p"
# 1496 "data/maps/SlateportCity/scripts.pory"
	.string "“The ferry S.S. Tidal nears\n"
# 1497 "data/maps/SlateportCity/scripts.pory"
	.string "completion for serving the ports of\l"
# 1498 "data/maps/SlateportCity/scripts.pory"
	.string "Slateport and Lilycove.”$"
# 1499 "data/maps/SlateportCity/scripts.pory"

# 1500 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardFerryComplete:
# 1501 "data/maps/SlateportCity/scripts.pory"
	.string "Stern's Shipyard\p"
# 1502 "data/maps/SlateportCity/scripts.pory"
	.string "“Boarding of the Slateport-Lilycove\n"
# 1503 "data/maps/SlateportCity/scripts.pory"
	.string "ferry S.S. Tidal is handled at the\l"
# 1504 "data/maps/SlateportCity/scripts.pory"
	.string "Harbor.”$"
# 1505 "data/maps/SlateportCity/scripts.pory"

# 1506 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PokemonFanClubSign:
# 1507 "data/maps/SlateportCity/scripts.pory"
	.string "Pokémon Fan Club\n"
# 1508 "data/maps/SlateportCity/scripts.pory"
	.string "“Calling all fans of Pokémon!”$"
# 1509 "data/maps/SlateportCity/scripts.pory"

# 1510 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OceanicMuseumSign:
# 1511 "data/maps/SlateportCity/scripts.pory"
	.string "“The endless sea sustains\n"
# 1512 "data/maps/SlateportCity/scripts.pory"
	.string "all life.”\p"
# 1513 "data/maps/SlateportCity/scripts.pory"
	.string "Oceanic Museum$"
# 1514 "data/maps/SlateportCity/scripts.pory"

# 1515 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CitySign:
# 1516 "data/maps/SlateportCity/scripts.pory"
	.string "Slateport City\p"
# 1517 "data/maps/SlateportCity/scripts.pory"
	.string "“The port where people and Pokémon\n"
# 1518 "data/maps/SlateportCity/scripts.pory"
	.string "cross paths.”$"
# 1519 "data/maps/SlateportCity/scripts.pory"

# 1520 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MarketSign:
# 1521 "data/maps/SlateportCity/scripts.pory"
	.string "Slateport Market\n"
# 1522 "data/maps/SlateportCity/scripts.pory"
	.string "“Unique items found nowhere else!”$"
# 1523 "data/maps/SlateportCity/scripts.pory"

# 1524 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborFerryUnderConstruction:
# 1525 "data/maps/SlateportCity/scripts.pory"
	.string "Slateport Harbor\p"
# 1526 "data/maps/SlateportCity/scripts.pory"
	.string "“The ferry S.S. Tidal is under\n"
# 1527 "data/maps/SlateportCity/scripts.pory"
	.string "construction in the Shipyard.\p"
# 1528 "data/maps/SlateportCity/scripts.pory"
	.string "“Service is scheduled to begin\n"
# 1529 "data/maps/SlateportCity/scripts.pory"
	.string "shortly.”$"
# 1530 "data/maps/SlateportCity/scripts.pory"

# 1531 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborSign:
# 1532 "data/maps/SlateportCity/scripts.pory"
	.string "Slateport Harbor\p"
# 1533 "data/maps/SlateportCity/scripts.pory"
	.string "“Enjoy a delightful cruise on\n"
# 1534 "data/maps/SlateportCity/scripts.pory"
	.string "the ferry S.S. Tidal.”$"
# 1535 "data/maps/SlateportCity/scripts.pory"

# 1536 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_NameRatersHouseSign:
# 1537 "data/maps/SlateportCity/scripts.pory"
	.string "Name Rater's House\n"
# 1538 "data/maps/SlateportCity/scripts.pory"
	.string "“Pokémon nicknames rated.”$"
# 1539 "data/maps/SlateportCity/scripts.pory"

# 1540 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerries:
# 1541 "data/maps/SlateportCity/scripts.pory"
	.string "If a wild Pokémon gets hurt, it heals\n"
# 1542 "data/maps/SlateportCity/scripts.pory"
	.string "itself by chewing on BERRIES.\p"
# 1543 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1544 "data/maps/SlateportCity/scripts.pory"
	.string "Somebody saw that and got the idea\n"
# 1545 "data/maps/SlateportCity/scripts.pory"
	.string "of making medicine from BERRIES.\p"
# 1546 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1547 "data/maps/SlateportCity/scripts.pory"
	.string "To turn BERRIES into medicine,\n"
# 1548 "data/maps/SlateportCity/scripts.pory"
	.string "they must be crushed into powder.\p"
# 1549 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1550 "data/maps/SlateportCity/scripts.pory"
	.string "You seem to have an interest\n"
# 1551 "data/maps/SlateportCity/scripts.pory"
	.string "in BERRIES!\p"
# 1552 "data/maps/SlateportCity/scripts.pory"
	.string "I've got something good for someone\n"
# 1553 "data/maps/SlateportCity/scripts.pory"
	.string "like you.$"
# 1554 "data/maps/SlateportCity/scripts.pory"

# 1555 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerryPowder:
# 1556 "data/maps/SlateportCity/scripts.pory"
	.string "I recently had machines installed at\n"
# 1557 "data/maps/SlateportCity/scripts.pory"
	.string "Pokémon CenterS for crushing BERRIES.\p"
# 1558 "data/maps/SlateportCity/scripts.pory"
	.string "The BERRY CRUSH machines are at\n"
# 1559 "data/maps/SlateportCity/scripts.pory"
	.string "the DIRECT CORNER upstairs.\p"
# 1560 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know?\p"
# 1561 "data/maps/SlateportCity/scripts.pory"
	.string "Could you make BERRY POWDER for\n"
# 1562 "data/maps/SlateportCity/scripts.pory"
	.string "me using those machines?\p"
# 1563 "data/maps/SlateportCity/scripts.pory"
	.string "I can make you all sorts of medicine\n"
# 1564 "data/maps/SlateportCity/scripts.pory"
	.string "if you bring me lots of BERRY POWDER.$"
# 1565 "data/maps/SlateportCity/scripts.pory"

# 1566 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BroughtMeSomeBerryPowder:
# 1567 "data/maps/SlateportCity/scripts.pory"
	.string "Have you brought me some\n"
# 1568 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER?$"
# 1569 "data/maps/SlateportCity/scripts.pory"

# 1570 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeWhatWithIt:
# 1571 "data/maps/SlateportCity/scripts.pory"
	.string "What would you like to exchange\n"
# 1572 "data/maps/SlateportCity/scripts.pory"
	.string "it with?$"
# 1573 "data/maps/SlateportCity/scripts.pory"

# 1574 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeBerryPowderForItem:
# 1575 "data/maps/SlateportCity/scripts.pory"
	.string "Okay, you want to exchange your\n"
# 1576 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for one {STR_VAR_1}?$"
# 1577 "data/maps/SlateportCity/scripts.pory"

# 1578 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontHaveEnoughBerryPowder:
# 1579 "data/maps/SlateportCity/scripts.pory"
	.string "Oh, dear. You don't have enough\n"
# 1580 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER.$"
# 1581 "data/maps/SlateportCity/scripts.pory"

# 1582 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FineBerryPowderTradeSomethingElse:
# 1583 "data/maps/SlateportCity/scripts.pory"
	.string "This is fine BERRY POWDER.\n"
# 1584 "data/maps/SlateportCity/scripts.pory"
	.string "It will make excellent medicine.\p"
# 1585 "data/maps/SlateportCity/scripts.pory"
	.string "Would you like to trade more of your\n"
# 1586 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for something else?$"
# 1587 "data/maps/SlateportCity/scripts.pory"

# 1588 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhenYouGetMoreBringItToMe:
# 1589 "data/maps/SlateportCity/scripts.pory"
	.string "Okay! When you get some more\n"
# 1590 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER, bring it to me, please!$"
# 1591 "data/maps/SlateportCity/scripts.pory"

# 1592 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ComeBackToTradeBerryPowder:
# 1593 "data/maps/SlateportCity/scripts.pory"
	.string "Come back if you'd like to trade your\n"
# 1594 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for some medicine.\p"
# 1595 "data/maps/SlateportCity/scripts.pory"
	.string "I'm always running a bazaar here.\p"
# 1596 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know?$"
# 1597 "data/maps/SlateportCity/scripts.pory"

# 1598 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_YouDroveTeamAquaAway:
# 1599 "data/maps/SlateportCity/scripts.pory"
	.string "Scott: Huh?\n"
# 1600 "data/maps/SlateportCity/scripts.pory"
	.string "I'm sure I met you somewhere before.\p"
# 1601 "data/maps/SlateportCity/scripts.pory"
	.string "Have I introduced myself to you?\n"
# 1602 "data/maps/SlateportCity/scripts.pory"
	.string "If not, my name's Scott.\p"
# 1603 "data/maps/SlateportCity/scripts.pory"
	.string "I just saw Team Aqua run away from\n"
# 1604 "data/maps/SlateportCity/scripts.pory"
	.string "here like they were stung.\p"
# 1605 "data/maps/SlateportCity/scripts.pory"
	.string "Let me guess--you drove them away?$"
# 1606 "data/maps/SlateportCity/scripts.pory"

# 1607 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MaybeThisTrainer:
# 1608 "data/maps/SlateportCity/scripts.pory"
	.string "Scott: Hmm…\n"
# 1609 "data/maps/SlateportCity/scripts.pory"
	.string "Maybe, just maybe, this Trainer…$"
# 1610 "data/maps/SlateportCity/scripts.pory"

# 1611 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_LetsRegisterEachOther:
# 1612 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: All right! I think you're going\n"
# 1613 "data/maps/SlateportCity/scripts.pory"
	.string "to become a good friend.\p"
# 1614 "data/maps/SlateportCity/scripts.pory"
	.string "So, let's register each other in our\n"
# 1615 "data/maps/SlateportCity/scripts.pory"
	.string "PokénavS.\p"
# 1616 "data/maps/SlateportCity/scripts.pory"
	.string "… … … … … …$"
# 1617 "data/maps/SlateportCity/scripts.pory"

# 1618 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RegisteredScott:
# 1619 "data/maps/SlateportCity/scripts.pory"
	.string "Registered this SCOTT person\n"
# 1620 "data/maps/SlateportCity/scripts.pory"
	.string "in the Pokénav.$"
# 1621 "data/maps/SlateportCity/scripts.pory"

# 1622 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou:
# 1623 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: What I'd like to do is tag along\n"
# 1624 "data/maps/SlateportCity/scripts.pory"
	.string "with you, but I do want to keep an eye\l"
# 1625 "data/maps/SlateportCity/scripts.pory"
	.string "on the talents of other people, too.\p"
# 1626 "data/maps/SlateportCity/scripts.pory"
	.string "So, I'll be off to roam other towns\n"
# 1627 "data/maps/SlateportCity/scripts.pory"
	.string "a bit more.\p"
# 1628 "data/maps/SlateportCity/scripts.pory"
	.string "Be seeing you, {PLAYER}{KUN}!$"
# 1629 "data/maps/SlateportCity/scripts.pory"

# 1630 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_TakingBattleTentChallenge:
# 1631 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Oh, hey!\n"
# 1632 "data/maps/SlateportCity/scripts.pory"
	.string "If it isn't {PLAYER}{KUN}!\p"
# 1633 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}{KUN}, let me guess--you're going\n"
# 1634 "data/maps/SlateportCity/scripts.pory"
	.string "to take the BATTLE TENT challenge?\p"
# 1635 "data/maps/SlateportCity/scripts.pory"
	.string "Yeah! That's a good idea!\n"
# 1636 "data/maps/SlateportCity/scripts.pory"
	.string "That's a really great idea!\p"
# 1637 "data/maps/SlateportCity/scripts.pory"
	.string "After all, a tough TRAINER is\n"
# 1638 "data/maps/SlateportCity/scripts.pory"
	.string "the perfect fit for the BATTLE TENT!\p"
# 1639 "data/maps/SlateportCity/scripts.pory"
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

SlateportCity_EventScript_AfterYou_Text_0:
# 47 "data/maps/SlateportCity/scripts.pory"
	.string "That move is the most polite one there\n"
	.string "is!$"

SlateportCity_EventScript_AfterYou_Text_1:
# 49 "data/maps/SlateportCity/scripts.pory"
	.string "My sister is so mean!\n"
	.string "She needs to learn some manners…$"

SlateportCity_EventScript_MeFirst_Text_0:
# 63 "data/maps/SlateportCity/scripts.pory"
	.string "That move is the most selfish one there\n"
	.string "is!$"

SlateportCity_EventScript_MeFirst_Text_1:
# 65 "data/maps/SlateportCity/scripts.pory"
	.string "My sister is too polite.\n"
	.string "She needs to think about herself!$"
