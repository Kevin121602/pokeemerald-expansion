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
	end
# 111 "data/maps/SlateportCity/scripts.pory"

# 112 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnterSlateport::
# 113 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_VISITED_SLATEPORT_CITY
# 114 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_CONTEST_HALL_STATE, 0
# 115 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER
# 116 "data/maps/SlateportCity/scripts.pory"
	return
# 117 "data/maps/SlateportCity/scripts.pory"

# 118 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MovePeopleForSternInterview::
# 119 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_CAPT_STERN, 28, 13
# 120 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_OLD_WOMAN, 25, 13
# 121 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_RICH_BOY, 25, 14
# 122 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_COOK, 27, 16
# 123 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_GIRL, 28, 16
# 124 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_FAT_MAN, 29, 16
# 125 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_MAN_1, 31, 14
# 126 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_CAPT_STERN, MOVEMENT_TYPE_FACE_DOWN
# 127 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_OLD_WOMAN, MOVEMENT_TYPE_FACE_DOWN_AND_RIGHT
# 128 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_RICH_BOY, MOVEMENT_TYPE_FACE_UP_AND_RIGHT
# 129 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_COOK, MOVEMENT_TYPE_FACE_UP
# 130 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_GIRL, MOVEMENT_TYPE_FACE_UP
# 131 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_FAT_MAN, MOVEMENT_TYPE_FACE_UP
# 132 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_MAN_1, MOVEMENT_TYPE_FACE_LEFT
# 133 "data/maps/SlateportCity/scripts.pory"
	return
# 134 "data/maps/SlateportCity/scripts.pory"

# 135 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OpenPartyMenu::
# 136 "data/maps/SlateportCity/scripts.pory"
	special ChooseRotomForRandomFormChange
# 137 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 138 "data/maps/SlateportCity/scripts.pory"
	lock
# 139 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 140 "data/maps/SlateportCity/scripts.pory"
	return
# 141 "data/maps/SlateportCity/scripts.pory"

# 142 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SetReadyForScottScene::
# 143 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 144 "data/maps/SlateportCity/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 145 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_0x8004, 30, SlateportCity_EventScript_MoveScottLeft
# 146 "data/maps/SlateportCity/scripts.pory"
	@setobjectxyperm LOCALID_SCOTT, 23, 27
# 147 "data/maps/SlateportCity/scripts.pory"
	@setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 148 "data/maps/SlateportCity/scripts.pory"
	return
# 149 "data/maps/SlateportCity/scripts.pory"

# 150 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MoveScottLeft::
# 151 "data/maps/SlateportCity/scripts.pory"
	@setobjectxyperm LOCALID_SCOTT, 22, 27
# 152 "data/maps/SlateportCity/scripts.pory"
	@setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 153 "data/maps/SlateportCity/scripts.pory"
	return
# 154 "data/maps/SlateportCity/scripts.pory"

# 155 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnFrame:
# 156 "data/maps/SlateportCity/scripts.pory"
	.2byte 0
# 157 "data/maps/SlateportCity/scripts.pory"

# 158 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottScene::
# 159 "data/maps/SlateportCity/scripts.pory"
	lockall
# 160 "data/maps/SlateportCity/scripts.pory"
	@addobject LOCALID_SCOTT
# 161 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerFaceScott
# 162 "data/maps/SlateportCity/scripts.pory"
	@applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottApproachPlayer
# 163 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 164 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_YouDroveTeamAquaAway, MSGBOX_DEFAULT
# 165 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 166 "data/maps/SlateportCity/scripts.pory"
	@applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 167 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 168 "data/maps/SlateportCity/scripts.pory"
	delay 60
# 169 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MaybeThisTrainer, MSGBOX_DEFAULT
# 170 "data/maps/SlateportCity/scripts.pory"
	@applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 171 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 172 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_LetsRegisterEachOther, MSGBOX_DEFAULT
# 173 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 174 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 175 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 176 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RegisteredScott, MSGBOX_DEFAULT
# 177 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 178 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 179 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 180 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_ENABLE_SCOTT_MATCH_CALL
# 181 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou, MSGBOX_DEFAULT
# 182 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 183 "data/maps/SlateportCity/scripts.pory"
	@applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExit
# 184 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 185 "data/maps/SlateportCity/scripts.pory"
	@removeobject LOCALID_SCOTT
# 186 "data/maps/SlateportCity/scripts.pory"
	@setobjectxyperm LOCALID_SCOTT, 10, 12
# 187 "data/maps/SlateportCity/scripts.pory"
	@setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_DOWN
# 188 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 189 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 2
# 190 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 191 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 192 "data/maps/SlateportCity/scripts.pory"
	end
# 193 "data/maps/SlateportCity/scripts.pory"

# 194 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceScott:
# 195 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 196 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 197 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 198 "data/maps/SlateportCity/scripts.pory"
	step_end
# 199 "data/maps/SlateportCity/scripts.pory"

# 200 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottApproachPlayer:
# 201 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 202 "data/maps/SlateportCity/scripts.pory"
	walk_right
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
	step_end
# 209 "data/maps/SlateportCity/scripts.pory"

# 210 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExit:
# 211 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 212 "data/maps/SlateportCity/scripts.pory"
	walk_left
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
	step_end
# 220 "data/maps/SlateportCity/scripts.pory"

# 221 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyGuru::
# 222 "data/maps/SlateportCity/scripts.pory"
	lock
# 223 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 224 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_EnergyGuruSellWhatYouNeed
# 225 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 226 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_EnergyGuru
# 227 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 228 "data/maps/SlateportCity/scripts.pory"
	release
# 229 "data/maps/SlateportCity/scripts.pory"
	end
# 230 "data/maps/SlateportCity/scripts.pory"

# 231 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 232 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_EnergyGuru:
# 233 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PROTEIN
# 234 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_IRON
# 235 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CARBOS
# 236 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ZINC
# 237 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CALCIUM
# 238 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_HP_UP
# 239 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NONE
# 240 "data/maps/SlateportCity/scripts.pory"
	release
# 241 "data/maps/SlateportCity/scripts.pory"
	end
# 242 "data/maps/SlateportCity/scripts.pory"

# 243 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Trader1::
# 244 "data/maps/SlateportCity/scripts.pory"
	lock
# 245 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 246 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SLATEPORT_CITY_TRADE_1_COMPLETED, SlateportCity_EventScript_Trade1Completed
# 247 "data/maps/SlateportCity/scripts.pory"
	ingame_trade INGAME_TRADE_ALOLAN_GRIMER, SlateportCity_Text_IllTradeIfYouWant1, SlateportCity_EventScript_MukTrade, SlateportCity_EventScript_NotRequestedMon1, SlateportCity_Text_RememberToRecycle
# 248 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_SLATEPORT_CITY_TRADE_1_COMPLETED
# 249 "data/maps/SlateportCity/scripts.pory"
	release
# 250 "data/maps/SlateportCity/scripts.pory"
	end
# 251 "data/maps/SlateportCity/scripts.pory"

# 252 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MukTrade::
# 253 "data/maps/SlateportCity/scripts.pory"
	ingame_trade INGAME_TRADE_ALOLAN_MUK, SlateportCity_Text_WillingToTradeMuks, SlateportCity_EventScript_DeclineTrade1, SlateportCity_EventScript_NotRequestedMon2, SlateportCity_Text_RememberToRecycle
# 254 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_SLATEPORT_CITY_TRADE_1_COMPLETED
# 255 "data/maps/SlateportCity/scripts.pory"
	release
# 256 "data/maps/SlateportCity/scripts.pory"
	end
# 257 "data/maps/SlateportCity/scripts.pory"

# 258 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DeclineTrade1::
# 259 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_YoungPeopleDont, MSGBOX_DEFAULT
# 260 "data/maps/SlateportCity/scripts.pory"
	release
# 261 "data/maps/SlateportCity/scripts.pory"
	end
# 262 "data/maps/SlateportCity/scripts.pory"

# 263 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NotRequestedMon1::
# 264 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ThatsNotAGrimer, MSGBOX_DEFAULT
# 265 "data/maps/SlateportCity/scripts.pory"
	release
# 266 "data/maps/SlateportCity/scripts.pory"
	end
# 267 "data/maps/SlateportCity/scripts.pory"

# 268 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NotRequestedMon2::
# 269 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ThatsNotAMuk, MSGBOX_DEFAULT
# 270 "data/maps/SlateportCity/scripts.pory"
	release
# 271 "data/maps/SlateportCity/scripts.pory"
	end
# 272 "data/maps/SlateportCity/scripts.pory"

# 273 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Trade1Completed::
# 274 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RememberToRecycle, MSGBOX_DEFAULT
# 275 "data/maps/SlateportCity/scripts.pory"
	release
# 276 "data/maps/SlateportCity/scripts.pory"
	end
# 277 "data/maps/SlateportCity/scripts.pory"

# 278 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_IllTradeIfYouWant1:
# 279 "data/maps/SlateportCity/scripts.pory"
	.string "Oil spills are such a tragedy.\p"
# 280 "data/maps/SlateportCity/scripts.pory"
	.string "Look at what happened to this Grimer I\n"
# 281 "data/maps/SlateportCity/scripts.pory"
	.string "found by the harbor…\p"
# 282 "data/maps/SlateportCity/scripts.pory"
	.string "Maybe you can care for this Grimer better\n"
# 283 "data/maps/SlateportCity/scripts.pory"
	.string "than I can.\p"
# 284 "data/maps/SlateportCity/scripts.pory"
	.string "If you have a Grimer of your own, I would\n"
# 285 "data/maps/SlateportCity/scripts.pory"
	.string "be willing to trade.$"
# 286 "data/maps/SlateportCity/scripts.pory"

# 287 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WillingToTradeMuks:
# 288 "data/maps/SlateportCity/scripts.pory"
	.string "I see, would you be willing to trade Muks\n"
# 289 "data/maps/SlateportCity/scripts.pory"
	.string "instead?$"
# 290 "data/maps/SlateportCity/scripts.pory"

# 291 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ThatsNotAGrimer:
# 292 "data/maps/SlateportCity/scripts.pory"
	.string "That's not a Grimer, silly.$"
# 293 "data/maps/SlateportCity/scripts.pory"

# 294 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ThatsNotAMuk:
# 295 "data/maps/SlateportCity/scripts.pory"
	.string "That's not a Muk, silly.$"
# 296 "data/maps/SlateportCity/scripts.pory"

# 297 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_YoungPeopleDont:
# 298 "data/maps/SlateportCity/scripts.pory"
	.string "Young people don't care about the\n"
# 299 "data/maps/SlateportCity/scripts.pory"
	.string "environment these days…$"
# 300 "data/maps/SlateportCity/scripts.pory"

# 301 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RememberToRecycle:
# 302 "data/maps/SlateportCity/scripts.pory"
	.string "Remember to recycle!$"
# 303 "data/maps/SlateportCity/scripts.pory"

# 304 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Trader2::
# 305 "data/maps/SlateportCity/scripts.pory"
	lock
# 306 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 307 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SLATEPORT_CITY_TRADE_2_COMPLETED, SlateportCity_EventScript_TradeCompleted
# 308 "data/maps/SlateportCity/scripts.pory"
	ingame_trade INGAME_TRADE_GALARIAN_WEEZING, SlateportCity_Text_IllTradeIfYouWant2, SlateportCity_EventScript_DeclineTrade2, SlateportCity_EventScript_NotRequestedMon3, SlateportCity_Text_MyWeezingLooks
# 309 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_SLATEPORT_CITY_TRADE_2_COMPLETED
# 310 "data/maps/SlateportCity/scripts.pory"
	release
# 311 "data/maps/SlateportCity/scripts.pory"
	end
# 312 "data/maps/SlateportCity/scripts.pory"

# 313 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DeclineTrade2::
# 314 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_YouDontWantToThatsOkay, MSGBOX_DEFAULT
# 315 "data/maps/SlateportCity/scripts.pory"
	release
# 316 "data/maps/SlateportCity/scripts.pory"
	end
# 317 "data/maps/SlateportCity/scripts.pory"

# 318 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NotRequestedMon3::
# 319 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontTryToPull, MSGBOX_DEFAULT
# 320 "data/maps/SlateportCity/scripts.pory"
	release
# 321 "data/maps/SlateportCity/scripts.pory"
	end
# 322 "data/maps/SlateportCity/scripts.pory"

# 323 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_TradeCompleted::
# 324 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AnyPokemonCanBeCute, MSGBOX_DEFAULT
# 325 "data/maps/SlateportCity/scripts.pory"
	release
# 326 "data/maps/SlateportCity/scripts.pory"
	end
# 327 "data/maps/SlateportCity/scripts.pory"

# 328 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_IllTradeIfYouWant2:
# 329 "data/maps/SlateportCity/scripts.pory"
	.string "The name's Devin, and I just set up\n"
# 330 "data/maps/SlateportCity/scripts.pory"
	.string "this tent, I call it the Devin Tent!\p"
# 331 "data/maps/SlateportCity/scripts.pory"
	.string "Anyway, I have this Weezing I want to\n"
# 332 "data/maps/SlateportCity/scripts.pory"
	.string "trade.\p"
# 333 "data/maps/SlateportCity/scripts.pory"
	.string "If you have a Weezing from Kanto i'll\n"
# 334 "data/maps/SlateportCity/scripts.pory"
	.string "trade you for it!\p"
# 335 "data/maps/SlateportCity/scripts.pory"
	.string "There's just one catch, this Weezing is\n"
# 336 "data/maps/SlateportCity/scripts.pory"
	.string "quite afraid of heights you see.\p"
# 337 "data/maps/SlateportCity/scripts.pory"
	.string "So if you could keep it as Levitate, so\n"
# 338 "data/maps/SlateportCity/scripts.pory"
	.string "it doesn't have to worry about falling,\l"
# 339 "data/maps/SlateportCity/scripts.pory"
	.string "that would be great.\p"
# 340 "data/maps/SlateportCity/scripts.pory"
	.string "Are you up for it?$"
# 341 "data/maps/SlateportCity/scripts.pory"

# 342 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MyWeezingLooks:
# 343 "data/maps/SlateportCity/scripts.pory"
	.string "My Weezing looks happier already.$"
# 344 "data/maps/SlateportCity/scripts.pory"

# 345 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontTryToPull:
# 346 "data/maps/SlateportCity/scripts.pory"
	.string "Don't try to pull a fast one on me.$"
# 347 "data/maps/SlateportCity/scripts.pory"

# 348 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_YouDontWantToThatsOkay:
# 349 "data/maps/SlateportCity/scripts.pory"
	.string "Thats fine.$"
# 350 "data/maps/SlateportCity/scripts.pory"

# 351 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AnyPokemonCanBeCute:
# 352 "data/maps/SlateportCity/scripts.pory"
	.string "How is my Weezing doing?$"
# 353 "data/maps/SlateportCity/scripts.pory"

# 354 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EffortRibbonWoman::
# 355 "data/maps/SlateportCity/scripts.pory"
	lock
# 356 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 357 "data/maps/SlateportCity/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 358 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhYourPokemon, MSGBOX_DEFAULT
# 359 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, LeadMonHasEffortRibbon
# 360 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_EventScript_MonHasEffortRibbon
# 361 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, Special_AreLeadMonEVsMaxedOut
# 362 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_MonEVsNotMaxed
# 363 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseGiveItThisEffortRibbon, MSGBOX_DEFAULT
# 364 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 365 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ReceivedEffortRibbon
# 366 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 367 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PutEffortRibbonOnMon, MSGBOX_DEFAULT
# 368 "data/maps/SlateportCity/scripts.pory"
	special GiveLeadMonEffortRibbon
# 369 "data/maps/SlateportCity/scripts.pory"
	release
# 370 "data/maps/SlateportCity/scripts.pory"
	end
# 371 "data/maps/SlateportCity/scripts.pory"

# 372 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonEVsNotMaxed::
# 373 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoForItLittleHarder, MSGBOX_DEFAULT
# 374 "data/maps/SlateportCity/scripts.pory"
	release
# 375 "data/maps/SlateportCity/scripts.pory"
	end
# 376 "data/maps/SlateportCity/scripts.pory"

# 377 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonHasEffortRibbon::
# 378 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EffortRibbonLooksGoodOnIt, MSGBOX_DEFAULT
# 379 "data/maps/SlateportCity/scripts.pory"
	release
# 380 "data/maps/SlateportCity/scripts.pory"
	end
# 381 "data/maps/SlateportCity/scripts.pory"

# 382 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Cook::
# 383 "data/maps/SlateportCity/scripts.pory"
	lock
# 384 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 385 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_CookSternInterview
# 386 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaweedFullOfLife, MSGBOX_DEFAULT
# 387 "data/maps/SlateportCity/scripts.pory"
	release
# 388 "data/maps/SlateportCity/scripts.pory"
	end
# 389 "data/maps/SlateportCity/scripts.pory"

# 390 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CookSternInterview::
# 391 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainComeBackWithBigFish, MSGBOX_DEFAULT
# 392 "data/maps/SlateportCity/scripts.pory"
	release
# 393 "data/maps/SlateportCity/scripts.pory"
	end
# 394 "data/maps/SlateportCity/scripts.pory"

# 395 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWoman::
# 396 "data/maps/SlateportCity/scripts.pory"
	lock
# 397 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 398 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_OldWomanSternInterview
# 399 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HowTownIsBornAndGrows, MSGBOX_DEFAULT
# 400 "data/maps/SlateportCity/scripts.pory"
	release
# 401 "data/maps/SlateportCity/scripts.pory"
	end
# 402 "data/maps/SlateportCity/scripts.pory"

# 403 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWomanSternInterview::
# 404 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptSternBeingInterviewed, MSGBOX_DEFAULT
# 405 "data/maps/SlateportCity/scripts.pory"
	release
# 406 "data/maps/SlateportCity/scripts.pory"
	end
# 407 "data/maps/SlateportCity/scripts.pory"

# 408 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Girl::
# 409 "data/maps/SlateportCity/scripts.pory"
	lock
# 410 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 411 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SlateportWonderfulPlace, MSGBOX_DEFAULT
# 412 "data/maps/SlateportCity/scripts.pory"
	release
# 413 "data/maps/SlateportCity/scripts.pory"
	end
# 414 "data/maps/SlateportCity/scripts.pory"

# 415 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSternInterview::
# 416 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_InterviewerSoCool, MSGBOX_DEFAULT
# 417 "data/maps/SlateportCity/scripts.pory"
	release
# 418 "data/maps/SlateportCity/scripts.pory"
	end
# 419 "data/maps/SlateportCity/scripts.pory"

# 420 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSecretBase::
# 421 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyBricksSoDecorWontGetDirty, MSGBOX_DEFAULT
# 422 "data/maps/SlateportCity/scripts.pory"
	release
# 423 "data/maps/SlateportCity/scripts.pory"
	end
# 424 "data/maps/SlateportCity/scripts.pory"

# 425 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoy::
# 426 "data/maps/SlateportCity/scripts.pory"
	lock
# 427 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 428 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_RichBoySternInterview
# 429 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoingToCompeteInBattleTent, MSGBOX_DEFAULT
# 430 "data/maps/SlateportCity/scripts.pory"
	release
# 431 "data/maps/SlateportCity/scripts.pory"
	end
# 432 "data/maps/SlateportCity/scripts.pory"

# 433 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoySternInterview::
# 434 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternSaysDiscoveredSomething, MSGBOX_DEFAULT
# 435 "data/maps/SlateportCity/scripts.pory"
	release
# 436 "data/maps/SlateportCity/scripts.pory"
	end
# 437 "data/maps/SlateportCity/scripts.pory"

# 438 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatMan::
# 439 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_FatManSternInterview
# 440 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BushedHikingFromMauville, MSGBOX_NPC
# 441 "data/maps/SlateportCity/scripts.pory"
	end
# 442 "data/maps/SlateportCity/scripts.pory"

# 443 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatManSternInterview::
# 444 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AmIOnTV, MSGBOX_SIGN
# 445 "data/maps/SlateportCity/scripts.pory"
	end
# 446 "data/maps/SlateportCity/scripts.pory"

# 447 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1::
# 448 "data/maps/SlateportCity/scripts.pory"
	lock
# 449 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 450 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_Man1SternInterview
# 451 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EveryoneCallsHimCaptStern, MSGBOX_DEFAULT
# 452 "data/maps/SlateportCity/scripts.pory"
	release
# 453 "data/maps/SlateportCity/scripts.pory"
	end
# 454 "data/maps/SlateportCity/scripts.pory"

# 455 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1SternInterview::
# 456 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainsACelebrity, MSGBOX_DEFAULT
# 457 "data/maps/SlateportCity/scripts.pory"
	release
# 458 "data/maps/SlateportCity/scripts.pory"
	end
# 459 "data/maps/SlateportCity/scripts.pory"

# 460 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1::
# 461 "data/maps/SlateportCity/scripts.pory"
	lock
# 462 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 463 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_DOCK_REJECTED_DEVON_GOODS, SlateportCity_EventScript_Woman1AquaGone
# 464 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsLongLineOverThere, MSGBOX_DEFAULT
# 465 "data/maps/SlateportCity/scripts.pory"
	release
# 466 "data/maps/SlateportCity/scripts.pory"
	end
# 467 "data/maps/SlateportCity/scripts.pory"

# 468 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1AquaGone::
# 469 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_VisitedMuseumOften, MSGBOX_DEFAULT
# 470 "data/maps/SlateportCity/scripts.pory"
	release
# 471 "data/maps/SlateportCity/scripts.pory"
	end
# 472 "data/maps/SlateportCity/scripts.pory"

# 473 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BattleTentSign::
# 474 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentSign, MSGBOX_SIGN
# 475 "data/maps/SlateportCity/scripts.pory"
	end
# 476 "data/maps/SlateportCity/scripts.pory"

# 477 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardSign::
# 478 "data/maps/SlateportCity/scripts.pory"
	lockall
# 479 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_SternsShipyardFerryComplete
# 480 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, SlateportCity_EventScript_SternsShipyardNearsCompletion
# 481 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardWantedSign, MSGBOX_DEFAULT
# 482 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 483 "data/maps/SlateportCity/scripts.pory"
	end
# 484 "data/maps/SlateportCity/scripts.pory"

# 485 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardNearsCompletion::
# 486 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardNearsCompletion, MSGBOX_DEFAULT
# 487 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 488 "data/maps/SlateportCity/scripts.pory"
	end
# 489 "data/maps/SlateportCity/scripts.pory"

# 490 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardFerryComplete::
# 491 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardFerryComplete, MSGBOX_DEFAULT
# 492 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 493 "data/maps/SlateportCity/scripts.pory"
	end
# 494 "data/maps/SlateportCity/scripts.pory"

# 495 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokemonFanClubSign::
# 496 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PokemonFanClubSign, MSGBOX_SIGN
# 497 "data/maps/SlateportCity/scripts.pory"
	end
# 498 "data/maps/SlateportCity/scripts.pory"

# 499 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OceanicMuseumSign::
# 500 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OceanicMuseumSign, MSGBOX_SIGN
# 501 "data/maps/SlateportCity/scripts.pory"
	end
# 502 "data/maps/SlateportCity/scripts.pory"

# 503 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CitySign::
# 504 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CitySign, MSGBOX_SIGN
# 505 "data/maps/SlateportCity/scripts.pory"
	end
# 506 "data/maps/SlateportCity/scripts.pory"

# 507 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MarketSign::
# 508 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MarketSign, MSGBOX_SIGN
# 509 "data/maps/SlateportCity/scripts.pory"
	end
# 510 "data/maps/SlateportCity/scripts.pory"

# 511 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSign::
# 512 "data/maps/SlateportCity/scripts.pory"
	lockall
# 513 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_HarborSignFerryComplete
# 514 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborFerryUnderConstruction, MSGBOX_DEFAULT
# 515 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 516 "data/maps/SlateportCity/scripts.pory"
	end
# 517 "data/maps/SlateportCity/scripts.pory"

# 518 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSignFerryComplete::
# 519 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborSign, MSGBOX_DEFAULT
# 520 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 521 "data/maps/SlateportCity/scripts.pory"
	end
# 522 "data/maps/SlateportCity/scripts.pory"

# 523 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NameRatersHouseSign::
# 524 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_NameRatersHouseSign, MSGBOX_SIGN
# 525 "data/maps/SlateportCity/scripts.pory"
	end
# 526 "data/maps/SlateportCity/scripts.pory"

# 527 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Maniac::
# 528 "data/maps/SlateportCity/scripts.pory"
	lock
# 529 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 530 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_ManiacSternInterview
# 531 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 532 "data/maps/SlateportCity/scripts.pory"
	release
# 533 "data/maps/SlateportCity/scripts.pory"
	end
# 534 "data/maps/SlateportCity/scripts.pory"

# 535 "data/maps/SlateportCity/scripts.pory"
@ Unclear if the text here was meant to be different, but its not
# 536 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ManiacSternInterview::
# 537 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 538 "data/maps/SlateportCity/scripts.pory"
	release
# 539 "data/maps/SlateportCity/scripts.pory"
	end
# 540 "data/maps/SlateportCity/scripts.pory"

# 541 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman2::
# 542 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CantChangeTradeMonName, MSGBOX_NPC
# 543 "data/maps/SlateportCity/scripts.pory"
	end
# 544 "data/maps/SlateportCity/scripts.pory"

# 545 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor1::
# 546 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaIsSoWet, MSGBOX_NPC
# 547 "data/maps/SlateportCity/scripts.pory"
	end
# 548 "data/maps/SlateportCity/scripts.pory"

# 549 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor2::
# 550 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SinkOldBoats, MSGBOX_NPC
# 551 "data/maps/SlateportCity/scripts.pory"
	end
# 552 "data/maps/SlateportCity/scripts.pory"

# 553 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokefanF::
# 554 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyTooMuch, MSGBOX_NPC
# 555 "data/maps/SlateportCity/scripts.pory"
	end
# 556 "data/maps/SlateportCity/scripts.pory"

# 557 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man2::
# 558 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentBuiltRecently, MSGBOX_NPC
# 559 "data/maps/SlateportCity/scripts.pory"
	end
# 560 "data/maps/SlateportCity/scripts.pory"

# 561 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt1::
# 562 "data/maps/SlateportCity/scripts.pory"
	lock
# 563 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 564 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_QuitPushing, MSGBOX_DEFAULT
# 565 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 566 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_1, Common_Movement_FaceOriginalDirection
# 567 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 568 "data/maps/SlateportCity/scripts.pory"
	release
# 569 "data/maps/SlateportCity/scripts.pory"
	end
# 570 "data/maps/SlateportCity/scripts.pory"

# 571 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt2::
# 572 "data/maps/SlateportCity/scripts.pory"
	lock
# 573 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 574 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaHasPolicy, MSGBOX_DEFAULT
# 575 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 576 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_2, Common_Movement_FaceOriginalDirection
# 577 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 578 "data/maps/SlateportCity/scripts.pory"
	release
# 579 "data/maps/SlateportCity/scripts.pory"
	end
# 580 "data/maps/SlateportCity/scripts.pory"

# 581 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt3::
# 582 "data/maps/SlateportCity/scripts.pory"
	lock
# 583 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 584 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BossIsBrilliant, MSGBOX_DEFAULT
# 585 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 586 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_3, Common_Movement_FaceOriginalDirection
# 587 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 588 "data/maps/SlateportCity/scripts.pory"
	release
# 589 "data/maps/SlateportCity/scripts.pory"
	end
# 590 "data/maps/SlateportCity/scripts.pory"

# 591 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt4::
# 592 "data/maps/SlateportCity/scripts.pory"
	lock
# 593 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 594 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsNewSchemeIWonder, MSGBOX_DEFAULT
# 595 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 596 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_4, Common_Movement_FaceOriginalDirection
# 597 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 598 "data/maps/SlateportCity/scripts.pory"
	release
# 599 "data/maps/SlateportCity/scripts.pory"
	end
# 600 "data/maps/SlateportCity/scripts.pory"

# 601 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt5::
# 602 "data/maps/SlateportCity/scripts.pory"
	lock
# 603 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 604 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldTakeItAll, MSGBOX_DEFAULT
# 605 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 606 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_5, Common_Movement_FaceOriginalDirection
# 607 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 608 "data/maps/SlateportCity/scripts.pory"
	release
# 609 "data/maps/SlateportCity/scripts.pory"
	end
# 610 "data/maps/SlateportCity/scripts.pory"

# 611 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt6::
# 612 "data/maps/SlateportCity/scripts.pory"
	lock
# 613 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 614 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontButtIn, MSGBOX_DEFAULT
# 615 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 616 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_6, Common_Movement_FaceOriginalDirection
# 617 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 618 "data/maps/SlateportCity/scripts.pory"
	release
# 619 "data/maps/SlateportCity/scripts.pory"
	end
# 620 "data/maps/SlateportCity/scripts.pory"

# 621 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt7::
# 622 "data/maps/SlateportCity/scripts.pory"
	lock
# 623 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 624 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RemindsMeOfLongLineForGames, MSGBOX_DEFAULT
# 625 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 626 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_7, Common_Movement_FaceOriginalDirection
# 627 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 628 "data/maps/SlateportCity/scripts.pory"
	release
# 629 "data/maps/SlateportCity/scripts.pory"
	end
# 630 "data/maps/SlateportCity/scripts.pory"

# 631 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt8::
# 632 "data/maps/SlateportCity/scripts.pory"
	lock
# 633 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 634 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhyAreWeLiningUp, MSGBOX_DEFAULT
# 635 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 636 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_8, Common_Movement_FaceOriginalDirection
# 637 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 638 "data/maps/SlateportCity/scripts.pory"
	release
# 639 "data/maps/SlateportCity/scripts.pory"
	end
# 640 "data/maps/SlateportCity/scripts.pory"

# 641 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt9::
# 642 "data/maps/SlateportCity/scripts.pory"
	lock
# 643 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 644 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 645 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_ExclamationMark
# 646 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 647 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_Delay48
# 648 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 649 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatDoYouWant, MSGBOX_DEFAULT
# 650 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 651 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
# 652 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 653 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 654 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 655 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FacePlayer
# 656 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 657 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_IllReadSignForYou, MSGBOX_DEFAULT
# 658 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 659 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
# 660 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 661 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 662 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 663 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SaysSomethingLikeSeaIsEndless, MSGBOX_DEFAULT
# 664 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 665 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FacePlayer
# 666 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 667 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 668 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 669 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
# 670 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 671 "data/maps/SlateportCity/scripts.pory"
	release
# 672 "data/maps/SlateportCity/scripts.pory"
	end
# 673 "data/maps/SlateportCity/scripts.pory"

# 674 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_DelayAquaGrunt:
# 675 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 676 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 677 "data/maps/SlateportCity/scripts.pory"
	step_end
# 678 "data/maps/SlateportCity/scripts.pory"

# 679 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt10::
# 680 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldveBroughtMyGameBoy, MSGBOX_SIGN
# 681 "data/maps/SlateportCity/scripts.pory"
	end
# 682 "data/maps/SlateportCity/scripts.pory"

# 683 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt11::
# 684 "data/maps/SlateportCity/scripts.pory"
	lock
# 685 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 686 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HotSpringsAfterOperation, MSGBOX_DEFAULT
# 687 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 688 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_11, Common_Movement_FaceOriginalDirection
# 689 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 690 "data/maps/SlateportCity/scripts.pory"
	release
# 691 "data/maps/SlateportCity/scripts.pory"
	end
# 692 "data/maps/SlateportCity/scripts.pory"

# 693 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DollClerk::
# 694 "data/maps/SlateportCity/scripts.pory"
	lock
# 695 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 696 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 697 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 698 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor_Dolls
# 699 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 700 "data/maps/SlateportCity/scripts.pory"
	release
# 701 "data/maps/SlateportCity/scripts.pory"
	end
# 702 "data/maps/SlateportCity/scripts.pory"

# 703 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 704 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor_Dolls:
# 705 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_AZURILL_DOLL
# 706 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_MARILL_DOLL
# 707 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_SKITTY_DOLL
# 708 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_NONE
# 709 "data/maps/SlateportCity/scripts.pory"
	release
# 710 "data/maps/SlateportCity/scripts.pory"
	end
# 711 "data/maps/SlateportCity/scripts.pory"

# 712 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ComeBackWithSecretPower::
# 713 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_ComeBackWithSecretPower, MSGBOX_DEFAULT
# 714 "data/maps/SlateportCity/scripts.pory"
	release
# 715 "data/maps/SlateportCity/scripts.pory"
	end
# 716 "data/maps/SlateportCity/scripts.pory"

# 717 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DecorClerk::
# 718 "data/maps/SlateportCity/scripts.pory"
	lock
# 719 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 720 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 721 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 722 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor
# 723 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 724 "data/maps/SlateportCity/scripts.pory"
	release
# 725 "data/maps/SlateportCity/scripts.pory"
	end
# 726 "data/maps/SlateportCity/scripts.pory"

# 727 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 728 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor:
# 729 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_RED_BRICK
# 730 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_BLUE_BRICK
# 731 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_YELLOW_BRICK
# 732 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_RED_BALLOON
# 733 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_BLUE_BALLOON
# 734 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_YELLOW_BALLOON
# 735 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_C_LOW_NOTE_MAT
# 736 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_D_NOTE_MAT
# 737 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_E_NOTE_MAT
# 738 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_F_NOTE_MAT
# 739 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_G_NOTE_MAT
# 740 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_A_NOTE_MAT
# 741 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_B_NOTE_MAT
# 742 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_C_HIGH_NOTE_MAT
# 743 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_NONE
# 744 "data/maps/SlateportCity/scripts.pory"
	release
# 745 "data/maps/SlateportCity/scripts.pory"
	end
# 746 "data/maps/SlateportCity/scripts.pory"

# 747 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AccurateMoveTMClerk::
# 748 "data/maps/SlateportCity/scripts.pory"
	lock
# 749 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 750 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 751 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 752 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_AccurateTMs
# 753 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 754 "data/maps/SlateportCity/scripts.pory"
	release
# 755 "data/maps/SlateportCity/scripts.pory"
	end
# 756 "data/maps/SlateportCity/scripts.pory"

# 757 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EvolutionItemClerk::
# 758 "data/maps/SlateportCity/scripts.pory"
	lock
# 759 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 760 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ISellEvolutionItems
# 761 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 762 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_EvolutionItems
# 763 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 764 "data/maps/SlateportCity/scripts.pory"
	release
# 765 "data/maps/SlateportCity/scripts.pory"
	end
# 766 "data/maps/SlateportCity/scripts.pory"

# 767 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonSpecificItemClerk::
# 768 "data/maps/SlateportCity/scripts.pory"
	lock
# 769 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 770 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ISellItemsThatMake
# 771 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 772 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_MonSpecificItems
# 773 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 774 "data/maps/SlateportCity/scripts.pory"
	release
# 775 "data/maps/SlateportCity/scripts.pory"
	end
# 776 "data/maps/SlateportCity/scripts.pory"

# 777 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 778 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_AccurateTMs:
# 779 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_AERIAL_ACE
# 780 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_DISARMING_VOICE
# 781 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_FEINT_ATTACK
# 782 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_MAGICAL_LEAF
# 783 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_SHOCK_WAVE
# 784 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NONE
# 785 "data/maps/SlateportCity/scripts.pory"
	release
# 786 "data/maps/SlateportCity/scripts.pory"
	end
# 787 "data/maps/SlateportCity/scripts.pory"

# 788 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 789 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_EvolutionItems:
# 790 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_GALARICA_CUFF
# 791 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_GALARICA_WREATH
# 792 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_METAL_ALLOY
# 793 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_BLACK_AUGURITE
# 794 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PEAT_BLOCK
# 795 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TART_APPLE
# 796 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SWEET_APPLE
# 797 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SYRUPY_APPLE
# 798 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NONE
# 799 "data/maps/SlateportCity/scripts.pory"
	release
# 800 "data/maps/SlateportCity/scripts.pory"
	end
# 801 "data/maps/SlateportCity/scripts.pory"

# 802 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 803 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_MonSpecificItems:
# 804 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_DRAGON_SCALE
# 805 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ELECTIRIZER
# 806 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_MAGMARIZER
# 807 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_REAPER_CLOTH
# 808 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PRISM_SCALE
# 809 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SACHET
# 810 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CRACKED_POT
# 811 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_UNREMARKABLE_TEACUP
# 812 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_DAMP_ROCK
# 813 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_HEAT_ROCK
# 814 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ICY_ROCK
# 815 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NONE
# 816 "data/maps/SlateportCity/scripts.pory"
	release
# 817 "data/maps/SlateportCity/scripts.pory"
	end
# 818 "data/maps/SlateportCity/scripts.pory"

# 819 "data/maps/SlateportCity/scripts.pory"
@ Scene with Capt Sterns interview and Team Aqua announcing plans to steal Submarine
# 820 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CaptStern::
# 821 "data/maps/SlateportCity/scripts.pory"
	lockall
# 822 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternMoveAheadWithExploration, MSGBOX_DEFAULT
# 823 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GabbyWonderfulThanksForInterview, MSGBOX_DEFAULT
# 824 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 825 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GABBY, Common_Movement_WalkInPlaceFasterRight
# 826 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 827 "data/maps/SlateportCity/scripts.pory"
	delay 10
# 828 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_TY, Common_Movement_WalkInPlaceFasterDown
# 829 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 830 "data/maps/SlateportCity/scripts.pory"
	delay 25
# 831 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, SlateportCity_Movement_SternWatchGabbyAndTyExit
# 832 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerFaceStern
# 833 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GABBY, SlateportCity_Movement_GabbyExit
# 834 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_TY, SlateportCity_Movement_TyExit
# 835 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 836 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_GABBY
# 837 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_TY
# 838 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhewFirstInterview, MSGBOX_DEFAULT
# 839 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
# 840 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 841 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhPlayerWeMadeDiscovery, MSGBOX_DEFAULT
# 842 "data/maps/SlateportCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 843 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaWillAssumeControlOfSubmarine, MSGBOX_DEFAULT
# 844 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_COOK, Common_Movement_WalkInPlaceFasterLeft
# 845 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_FAT_MAN, Common_Movement_WalkInPlaceFasterLeft
# 846 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, SlateportCity_Movement_OldWomanConcern
# 847 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_RICH_BOY, Common_Movement_QuestionMark
# 848 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_MAN_1, SlateportCity_Movement_ManConcern
# 849 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 850 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterDown
# 851 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 852 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhatWasAllThat, MSGBOX_DEFAULT
# 853 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 854 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_ExclamationMark
# 855 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 856 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_Delay48
# 857 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 858 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
# 859 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 860 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FromHarborTryingToTakeSub, MSGBOX_DEFAULT
# 861 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 862 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 863 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, SlateportCity_Movement_SternEnterHarbor
# 864 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerEnterHarbor
# 865 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 866 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_CAPT_STERN
# 867 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_CAPTAIN_STERN
# 868 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SUBMARINE_SHADOW
# 869 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT
# 870 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_ARCHIE
# 871 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_CITY_STATE, 2
# 872 "data/maps/SlateportCity/scripts.pory"
	warp MAP_SLATEPORT_CITY_HARBOR, 11, 14
# 873 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 874 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 875 "data/maps/SlateportCity/scripts.pory"
	end
# 876 "data/maps/SlateportCity/scripts.pory"

# 877 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_OldWomanConcern:
# 878 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 879 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 880 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 881 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 882 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 883 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 884 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 885 "data/maps/SlateportCity/scripts.pory"
	step_end
# 886 "data/maps/SlateportCity/scripts.pory"

# 887 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ManConcern:
# 888 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 889 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 890 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 891 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_down
# 892 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 893 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 894 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 895 "data/maps/SlateportCity/scripts.pory"
	step_end
# 896 "data/maps/SlateportCity/scripts.pory"

# 897 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_GabbyExit:
# 898 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 899 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 900 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 901 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 902 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 903 "data/maps/SlateportCity/scripts.pory"
	walk_left
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
	step_end
# 911 "data/maps/SlateportCity/scripts.pory"

# 912 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_TyExit:
# 913 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 914 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 915 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 916 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 917 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 918 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 919 "data/maps/SlateportCity/scripts.pory"
	walk_left
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
	step_end
# 927 "data/maps/SlateportCity/scripts.pory"

# 928 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_Unused:
# 929 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 930 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 931 "data/maps/SlateportCity/scripts.pory"
	step_end
# 932 "data/maps/SlateportCity/scripts.pory"

# 933 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternEnterHarbor:
# 934 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 935 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 936 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 937 "data/maps/SlateportCity/scripts.pory"
	set_invisible
# 938 "data/maps/SlateportCity/scripts.pory"
	step_end
# 939 "data/maps/SlateportCity/scripts.pory"

# 940 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternWatchGabbyAndTyExit:
# 941 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 942 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 943 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 944 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 945 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 946 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 947 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 948 "data/maps/SlateportCity/scripts.pory"
	step_end
# 949 "data/maps/SlateportCity/scripts.pory"

# 950 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerEnterHarbor:
# 951 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 952 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 953 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 954 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 955 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 956 "data/maps/SlateportCity/scripts.pory"
	step_end
# 957 "data/maps/SlateportCity/scripts.pory"

# 958 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceStern:
# 959 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 960 "data/maps/SlateportCity/scripts.pory"
	delay_16
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
	walk_in_place_faster_down
# 967 "data/maps/SlateportCity/scripts.pory"
	step_end
# 968 "data/maps/SlateportCity/scripts.pory"

# 969 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Ty::
# 970 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BigSmileForCamera, MSGBOX_SIGN
# 971 "data/maps/SlateportCity/scripts.pory"
	end
# 972 "data/maps/SlateportCity/scripts.pory"

# 973 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Gabby::
# 974 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MostInvaluableExperience, MSGBOX_SIGN
# 975 "data/maps/SlateportCity/scripts.pory"
	end
# 976 "data/maps/SlateportCity/scripts.pory"

# 977 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man3::
# 978 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WonderIfLighthouseStartlesPokemon, MSGBOX_NPC
# 979 "data/maps/SlateportCity/scripts.pory"
	end
# 980 "data/maps/SlateportCity/scripts.pory"

# 981 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryPowderClerk::
# 982 "data/maps/SlateportCity/scripts.pory"
	lock
# 983 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 984 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POWDER_JAR, SlateportCity_EventScript_ReceivedPowderJar
# 985 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerries, MSGBOX_DEFAULT
# 986 "data/maps/SlateportCity/scripts.pory"
	giveitem ITEM_POWDER_JAR
# 987 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_RECEIVED_POWDER_JAR
# 988 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 989 "data/maps/SlateportCity/scripts.pory"
	release
# 990 "data/maps/SlateportCity/scripts.pory"
	end
# 991 "data/maps/SlateportCity/scripts.pory"

# 992 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ReceivedPowderJar::
# 993 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, 1
# 994 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 995 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_ExplainBerryPowder
# 996 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BroughtMeSomeBerryPowder, MSGBOX_DEFAULT
# 997 "data/maps/SlateportCity/scripts.pory"
	special DisplayBerryPowderVendorMenu
# 998 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 999 "data/maps/SlateportCity/scripts.pory"
	end
# 1000 "data/maps/SlateportCity/scripts.pory"

# 1001 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ExplainBerryPowder::
# 1002 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 1003 "data/maps/SlateportCity/scripts.pory"
	release
# 1004 "data/maps/SlateportCity/scripts.pory"
	end
# 1005 "data/maps/SlateportCity/scripts.pory"

# 1006 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ChooseBerryPowderItem::
# 1007 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ExchangeWhatWithIt
# 1008 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 1009 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BERRY_POWDER_VENDOR
# 1010 "data/maps/SlateportCity/scripts.pory"
	special ShowScrollableMultichoice
# 1011 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 1012 "data/maps/SlateportCity/scripts.pory"
	switch VAR_RESULT
# 1013 "data/maps/SlateportCity/scripts.pory"
	case 0, SlateportCity_EventScript_EnergyPowder
# 1014 "data/maps/SlateportCity/scripts.pory"
	case 1, SlateportCity_EventScript_EnergyRoot
# 1015 "data/maps/SlateportCity/scripts.pory"
	case 2, SlateportCity_EventScript_HealPowder
# 1016 "data/maps/SlateportCity/scripts.pory"
	case 3, SlateportCity_EventScript_RevivalHerb
# 1017 "data/maps/SlateportCity/scripts.pory"
	case 4, SlateportCity_EventScript_Protein
# 1018 "data/maps/SlateportCity/scripts.pory"
	case 5, SlateportCity_EventScript_Iron
# 1019 "data/maps/SlateportCity/scripts.pory"
	case 6, SlateportCity_EventScript_Carbos
# 1020 "data/maps/SlateportCity/scripts.pory"
	case 7, SlateportCity_EventScript_Calcium
# 1021 "data/maps/SlateportCity/scripts.pory"
	case 8, SlateportCity_EventScript_Zinc
# 1022 "data/maps/SlateportCity/scripts.pory"
	case 9, SlateportCity_EventScript_HPUp
# 1023 "data/maps/SlateportCity/scripts.pory"
	case 10, SlateportCity_EventScript_PPUp
# 1024 "data/maps/SlateportCity/scripts.pory"
	case 11, SlateportCity_EventScript_CancelPowderItemSelect
# 1025 "data/maps/SlateportCity/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_EventScript_CancelPowderItemSelect
# 1026 "data/maps/SlateportCity/scripts.pory"
	end
# 1027 "data/maps/SlateportCity/scripts.pory"

# 1028 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyPowder::
# 1029 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_POWDER
# 1030 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_POWDER
# 1031 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 1032 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1033 "data/maps/SlateportCity/scripts.pory"
	end
# 1034 "data/maps/SlateportCity/scripts.pory"

# 1035 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyRoot::
# 1036 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_ROOT
# 1037 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_ROOT
# 1038 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 80
# 1039 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1040 "data/maps/SlateportCity/scripts.pory"
	end
# 1041 "data/maps/SlateportCity/scripts.pory"

# 1042 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HealPowder::
# 1043 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HEAL_POWDER
# 1044 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HEAL_POWDER
# 1045 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 1046 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1047 "data/maps/SlateportCity/scripts.pory"
	end
# 1048 "data/maps/SlateportCity/scripts.pory"

# 1049 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RevivalHerb::
# 1050 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_REVIVAL_HERB
# 1051 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_REVIVAL_HERB
# 1052 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 300
# 1053 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1054 "data/maps/SlateportCity/scripts.pory"
	end
# 1055 "data/maps/SlateportCity/scripts.pory"

# 1056 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Protein::
# 1057 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PROTEIN
# 1058 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PROTEIN
# 1059 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 1060 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1061 "data/maps/SlateportCity/scripts.pory"
	end
# 1062 "data/maps/SlateportCity/scripts.pory"

# 1063 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Iron::
# 1064 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_IRON
# 1065 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_IRON
# 1066 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 1067 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1068 "data/maps/SlateportCity/scripts.pory"
	end
# 1069 "data/maps/SlateportCity/scripts.pory"

# 1070 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Carbos::
# 1071 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CARBOS
# 1072 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CARBOS
# 1073 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 1074 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1075 "data/maps/SlateportCity/scripts.pory"
	end
# 1076 "data/maps/SlateportCity/scripts.pory"

# 1077 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Calcium::
# 1078 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CALCIUM
# 1079 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CALCIUM
# 1080 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 1081 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1082 "data/maps/SlateportCity/scripts.pory"
	end
# 1083 "data/maps/SlateportCity/scripts.pory"

# 1084 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Zinc::
# 1085 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ZINC
# 1086 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ZINC
# 1087 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 1088 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1089 "data/maps/SlateportCity/scripts.pory"
	end
# 1090 "data/maps/SlateportCity/scripts.pory"

# 1091 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HPUp::
# 1092 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HP_UP
# 1093 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HP_UP
# 1094 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 1095 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1096 "data/maps/SlateportCity/scripts.pory"
	end
# 1097 "data/maps/SlateportCity/scripts.pory"

# 1098 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PPUp::
# 1099 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PP_UP
# 1100 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PP_UP
# 1101 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 3000
# 1102 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1103 "data/maps/SlateportCity/scripts.pory"
	end
# 1104 "data/maps/SlateportCity/scripts.pory"

# 1105 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CancelPowderItemSelect::
# 1106 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ComeBackToTradeBerryPowder, MSGBOX_DEFAULT
# 1107 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 1108 "data/maps/SlateportCity/scripts.pory"
	release
# 1109 "data/maps/SlateportCity/scripts.pory"
	end
# 1110 "data/maps/SlateportCity/scripts.pory"

# 1111 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_TryBuyBerryPowderItem::
# 1112 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExchangeBerryPowderForItem, MSGBOX_YESNO
# 1113 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_EventScript_ChooseBerryPowderItem
# 1114 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 1115 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 1116 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NotEnoughBerryPowder
# 1117 "data/maps/SlateportCity/scripts.pory"
	giveitem VAR_0x8008
# 1118 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NoRoomForBerryPowderItem
# 1119 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 1120 "data/maps/SlateportCity/scripts.pory"
	special TakeBerryPowder
# 1121 "data/maps/SlateportCity/scripts.pory"
	special PrintPlayerBerryPowderAmount
# 1122 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FineBerryPowderTradeSomethingElse, MSGBOX_YESNO
# 1123 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SlateportCity_EventScript_ChooseBerryPowderItem
# 1124 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhenYouGetMoreBringItToMe, MSGBOX_DEFAULT
# 1125 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 1126 "data/maps/SlateportCity/scripts.pory"
	release
# 1127 "data/maps/SlateportCity/scripts.pory"
	end
# 1128 "data/maps/SlateportCity/scripts.pory"

# 1129 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NoRoomForBerryPowderItem::
# 1130 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_TheBagIsFull, MSGBOX_DEFAULT
# 1131 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 1132 "data/maps/SlateportCity/scripts.pory"
	release
# 1133 "data/maps/SlateportCity/scripts.pory"
	end
# 1134 "data/maps/SlateportCity/scripts.pory"

# 1135 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NotEnoughBerryPowder::
# 1136 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontHaveEnoughBerryPowder, MSGBOX_DEFAULT
# 1137 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 1138 "data/maps/SlateportCity/scripts.pory"
	end
# 1139 "data/maps/SlateportCity/scripts.pory"

# 1140 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottBattleTentScene::
# 1141 "data/maps/SlateportCity/scripts.pory"
	lockall
# 1142 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 1143 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1144 "data/maps/SlateportCity/scripts.pory"
	opendoor 10, 12
# 1145 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 1146 "data/maps/SlateportCity/scripts.pory"
	@addobject LOCALID_SCOTT
# 1147 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PushPlayerDown
# 1148 "data/maps/SlateportCity/scripts.pory"
	@applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExitBattleTent
# 1149 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1150 "data/maps/SlateportCity/scripts.pory"
	closedoor 10, 12
# 1151 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 1152 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_TakingBattleTentChallenge, MSGBOX_DEFAULT
# 1153 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 1154 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerWatchScottExit
# 1155 "data/maps/SlateportCity/scripts.pory"
	@applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExitAfterBattleTent
# 1156 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1157 "data/maps/SlateportCity/scripts.pory"
	@removeobject LOCALID_SCOTT
# 1158 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 1159 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
# 1160 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 1161 "data/maps/SlateportCity/scripts.pory"
	end
# 1162 "data/maps/SlateportCity/scripts.pory"

# 1163 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PushPlayerDown:
# 1164 "data/maps/SlateportCity/scripts.pory"
	lock_facing_direction
# 1165 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 1166 "data/maps/SlateportCity/scripts.pory"
	unlock_facing_direction
# 1167 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1168 "data/maps/SlateportCity/scripts.pory"

# 1169 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerWatchScottExit:
# 1170 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1171 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 1172 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1173 "data/maps/SlateportCity/scripts.pory"

# 1174 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitBattleTent:
# 1175 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 1176 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 1177 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1178 "data/maps/SlateportCity/scripts.pory"

# 1179 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitAfterBattleTent:
# 1180 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1181 "data/maps/SlateportCity/scripts.pory"
	walk_right
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
	step_end
# 1189 "data/maps/SlateportCity/scripts.pory"

# 1190 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryCrushRankingsSign::
# 1191 "data/maps/SlateportCity/scripts.pory"
	lockall
# 1192 "data/maps/SlateportCity/scripts.pory"
	special ShowBerryCrushRankings
# 1193 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 1194 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 1195 "data/maps/SlateportCity/scripts.pory"
	end
# 1196 "data/maps/SlateportCity/scripts.pory"

# 1197 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ISellEvolutionItems:
# 1198 "data/maps/SlateportCity/scripts.pory"
	.string "Welcome!\p"
# 1199 "data/maps/SlateportCity/scripts.pory"
	.string "I sell one-of-a-kind evolution items!$"
# 1200 "data/maps/SlateportCity/scripts.pory"

# 1201 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ISellItemsThatMake:
# 1202 "data/maps/SlateportCity/scripts.pory"
	.string "Welcome!\p"
# 1203 "data/maps/SlateportCity/scripts.pory"
	.string "I sell items that make certain Pokémon\n"
# 1204 "data/maps/SlateportCity/scripts.pory"
	.string "stronger!$"
# 1205 "data/maps/SlateportCity/scripts.pory"

# 1206 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EnergyGuruSellWhatYouNeed:
# 1207 "data/maps/SlateportCity/scripts.pory"
	.string "I'm the ENERGY GURU! I'll go for it and\n"
# 1208 "data/maps/SlateportCity/scripts.pory"
	.string "sell you what you need!$"
# 1209 "data/maps/SlateportCity/scripts.pory"

# 1210 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OhYourPokemon:
# 1211 "data/maps/SlateportCity/scripts.pory"
	.string "Oh?\n"
# 1212 "data/maps/SlateportCity/scripts.pory"
	.string "Your {STR_VAR_1}…$"
# 1213 "data/maps/SlateportCity/scripts.pory"

# 1214 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseGiveItThisEffortRibbon:
# 1215 "data/maps/SlateportCity/scripts.pory"
	.string "Went for it stupendously!\p"
# 1216 "data/maps/SlateportCity/scripts.pory"
	.string "As its reward, please give it this\n"
# 1217 "data/maps/SlateportCity/scripts.pory"
	.string "EFFORT RIBBON.$"
# 1218 "data/maps/SlateportCity/scripts.pory"

# 1219 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ReceivedEffortRibbon:
# 1220 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} received the EFFORT RIBBON.$"
# 1221 "data/maps/SlateportCity/scripts.pory"

# 1222 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PutEffortRibbonOnMon:
# 1223 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} put the EFFORT RIBBON\n"
# 1224 "data/maps/SlateportCity/scripts.pory"
	.string "on {STR_VAR_1}.$"
# 1225 "data/maps/SlateportCity/scripts.pory"

# 1226 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoForItLittleHarder:
# 1227 "data/maps/SlateportCity/scripts.pory"
	.string "You have to go for it a little harder.\p"
# 1228 "data/maps/SlateportCity/scripts.pory"
	.string "If you do, I'll give your Pokémon\n"
# 1229 "data/maps/SlateportCity/scripts.pory"
	.string "something nice.$"
# 1230 "data/maps/SlateportCity/scripts.pory"

# 1231 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EffortRibbonLooksGoodOnIt:
# 1232 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! Your {STR_VAR_1}, that EFFORT\n"
# 1233 "data/maps/SlateportCity/scripts.pory"
	.string "RIBBON looks good on it!$"
# 1234 "data/maps/SlateportCity/scripts.pory"

# 1235 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WonderIfLighthouseStartlesPokemon:
# 1236 "data/maps/SlateportCity/scripts.pory"
	.string "The light of the lighthouse reaches\n"
# 1237 "data/maps/SlateportCity/scripts.pory"
	.string "dozens of miles away.\p"
# 1238 "data/maps/SlateportCity/scripts.pory"
	.string "I wonder if it doesn't startle Pokémon\n"
# 1239 "data/maps/SlateportCity/scripts.pory"
	.string "in the sea.$"
# 1240 "data/maps/SlateportCity/scripts.pory"

# 1241 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SeaweedFullOfLife:
# 1242 "data/maps/SlateportCity/scripts.pory"
	.string "Ooh, look at this!\p"
# 1243 "data/maps/SlateportCity/scripts.pory"
	.string "The seaweed you can get around these\n"
# 1244 "data/maps/SlateportCity/scripts.pory"
	.string "parts is fresh and full of life.\p"
# 1245 "data/maps/SlateportCity/scripts.pory"
	.string "Why, it looks like it can even rear up\n"
# 1246 "data/maps/SlateportCity/scripts.pory"
	.string "and attack!$"
# 1247 "data/maps/SlateportCity/scripts.pory"

# 1248 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HowTownIsBornAndGrows:
# 1249 "data/maps/SlateportCity/scripts.pory"
	.string "Where the water is clean, the fruits\n"
# 1250 "data/maps/SlateportCity/scripts.pory"
	.string "of bountiful harvest gather.\p"
# 1251 "data/maps/SlateportCity/scripts.pory"
	.string "And where people gather, a market\n"
# 1252 "data/maps/SlateportCity/scripts.pory"
	.string "soon starts.\p"
# 1253 "data/maps/SlateportCity/scripts.pory"
	.string "That is how a town is born and grows.$"
# 1254 "data/maps/SlateportCity/scripts.pory"

# 1255 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SlateportWonderfulPlace:
# 1256 "data/maps/SlateportCity/scripts.pory"
	.string "Shopping where you can breathe the\n"
# 1257 "data/maps/SlateportCity/scripts.pory"
	.string "scent of the ocean…\p"
# 1258 "data/maps/SlateportCity/scripts.pory"
	.string "Slateport is such a wonderful place!$"
# 1259 "data/maps/SlateportCity/scripts.pory"

# 1260 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyBricksSoDecorWontGetDirty:
# 1261 "data/maps/SlateportCity/scripts.pory"
	.string "If you put Dolls or Cushions on\n"
# 1262 "data/maps/SlateportCity/scripts.pory"
	.string "the floor, they'll get dirty.\p"
# 1263 "data/maps/SlateportCity/scripts.pory"
	.string "I'm going to buy some Bricks so my\n"
# 1264 "data/maps/SlateportCity/scripts.pory"
	.string "Dolls and Cushions won't get dirty\l"
# 1265 "data/maps/SlateportCity/scripts.pory"
	.string "when I leave them out.$"
# 1266 "data/maps/SlateportCity/scripts.pory"

# 1267 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoingToCompeteInBattleTent:
# 1268 "data/maps/SlateportCity/scripts.pory"
	.string "Wroooar! I'm going to compete in\n"
# 1269 "data/maps/SlateportCity/scripts.pory"
	.string "the Battle Tent, too!\p"
# 1270 "data/maps/SlateportCity/scripts.pory"
	.string "But before that, I need to catch\n"
# 1271 "data/maps/SlateportCity/scripts.pory"
	.string "some Pokémon!$"
# 1272 "data/maps/SlateportCity/scripts.pory"

# 1273 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BushedHikingFromMauville:
# 1274 "data/maps/SlateportCity/scripts.pory"
	.string "Whew… I'm just bushed…\p"
# 1275 "data/maps/SlateportCity/scripts.pory"
	.string "I hiked over from Mauville City.\n"
# 1276 "data/maps/SlateportCity/scripts.pory"
	.string "But, boy, this city's huge.\p"
# 1277 "data/maps/SlateportCity/scripts.pory"
	.string "If I'd known this, I would've ridden\n"
# 1278 "data/maps/SlateportCity/scripts.pory"
	.string "my Bike here.$"
# 1279 "data/maps/SlateportCity/scripts.pory"

# 1280 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EveryoneCallsHimCaptStern:
# 1281 "data/maps/SlateportCity/scripts.pory"
	.string "Stern, the fellow who built the\n"
# 1282 "data/maps/SlateportCity/scripts.pory"
	.string "Museum, also happens to be the leader\l"
# 1283 "data/maps/SlateportCity/scripts.pory"
	.string "of an undersea exploration team.\p"
# 1284 "data/maps/SlateportCity/scripts.pory"
	.string "So, everyone calls him Capt. Stern.$"
# 1285 "data/maps/SlateportCity/scripts.pory"

# 1286 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsLongLineOverThere:
# 1287 "data/maps/SlateportCity/scripts.pory"
	.string "What is that over there?\n"
# 1288 "data/maps/SlateportCity/scripts.pory"
	.string "That long line…$"
# 1289 "data/maps/SlateportCity/scripts.pory"

# 1290 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_VisitedMuseumOften:
# 1291 "data/maps/SlateportCity/scripts.pory"
	.string "When I was a child, I visited\n"
# 1292 "data/maps/SlateportCity/scripts.pory"
	.string "the Museum often.\p"
# 1293 "data/maps/SlateportCity/scripts.pory"
	.string "I used to dream about the mysteries of\n"
# 1294 "data/maps/SlateportCity/scripts.pory"
	.string "the sea after seeing the exhibits.$"
# 1295 "data/maps/SlateportCity/scripts.pory"

# 1296 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_QuitPushing:
# 1297 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, there! Quit pushing!\n"
# 1298 "data/maps/SlateportCity/scripts.pory"
	.string "This is the line, can't you see?$"
# 1299 "data/maps/SlateportCity/scripts.pory"

# 1300 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaHasPolicy:
# 1301 "data/maps/SlateportCity/scripts.pory"
	.string "Team Aqua has a policy of\n"
# 1302 "data/maps/SlateportCity/scripts.pory"
	.string "assembling and dispersing at\l"
# 1303 "data/maps/SlateportCity/scripts.pory"
	.string "the operation site.$"
# 1304 "data/maps/SlateportCity/scripts.pory"

# 1305 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BossIsBrilliant:
# 1306 "data/maps/SlateportCity/scripts.pory"
	.string "Our Boss is brilliant.\p"
# 1307 "data/maps/SlateportCity/scripts.pory"
	.string "What would he want to do with\n"
# 1308 "data/maps/SlateportCity/scripts.pory"
	.string "a Museum now?$"
# 1309 "data/maps/SlateportCity/scripts.pory"

# 1310 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsNewSchemeIWonder:
# 1311 "data/maps/SlateportCity/scripts.pory"
	.string "What's the new scheme, I wonder?\p"
# 1312 "data/maps/SlateportCity/scripts.pory"
	.string "Our Boss is scary when he's mad, so\n"
# 1313 "data/maps/SlateportCity/scripts.pory"
	.string "I'd better not screw things up…$"
# 1314 "data/maps/SlateportCity/scripts.pory"

# 1315 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldTakeItAll:
# 1316 "data/maps/SlateportCity/scripts.pory"
	.string "If there's something we need in\n"
# 1317 "data/maps/SlateportCity/scripts.pory"
	.string "the Museum, we should take it all!$"
# 1318 "data/maps/SlateportCity/scripts.pory"

# 1319 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontButtIn:
# 1320 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, you there!\n"
# 1321 "data/maps/SlateportCity/scripts.pory"
	.string "Don't butt in!$"
# 1322 "data/maps/SlateportCity/scripts.pory"

# 1323 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RemindsMeOfLongLineForGames:
# 1324 "data/maps/SlateportCity/scripts.pory"
	.string "A long line, huh?\p"
# 1325 "data/maps/SlateportCity/scripts.pory"
	.string "It reminds me of the times I lined up to\n"
# 1326 "data/maps/SlateportCity/scripts.pory"
	.string "buy smash-hit games…$"
# 1327 "data/maps/SlateportCity/scripts.pory"

# 1328 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhyAreWeLiningUp:
# 1329 "data/maps/SlateportCity/scripts.pory"
	.string "Why are we even lining up and paying?\n"
# 1330 "data/maps/SlateportCity/scripts.pory"
	.string "We should just march in!$"
# 1331 "data/maps/SlateportCity/scripts.pory"

# 1332 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatDoYouWant:
# 1333 "data/maps/SlateportCity/scripts.pory"
	.string "What?\n"
# 1334 "data/maps/SlateportCity/scripts.pory"
	.string "What do you want?$"
# 1335 "data/maps/SlateportCity/scripts.pory"

# 1336 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_IllReadSignForYou:
# 1337 "data/maps/SlateportCity/scripts.pory"
	.string "You want to read this sign?\n"
# 1338 "data/maps/SlateportCity/scripts.pory"
	.string "I'll read it for you!$"
# 1339 "data/maps/SlateportCity/scripts.pory"

# 1340 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SaysSomethingLikeSeaIsEndless:
# 1341 "data/maps/SlateportCity/scripts.pory"
	.string "Let's see…\p"
# 1342 "data/maps/SlateportCity/scripts.pory"
	.string "Um… I think it says something like\n"
# 1343 "data/maps/SlateportCity/scripts.pory"
	.string "“the life in the sea is endless.”\p"
# 1344 "data/maps/SlateportCity/scripts.pory"
	.string "Yup, I'm pretty sure that's what\n"
# 1345 "data/maps/SlateportCity/scripts.pory"
	.string "it says.$"
# 1346 "data/maps/SlateportCity/scripts.pory"

# 1347 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldveBroughtMyGameBoy:
# 1348 "data/maps/SlateportCity/scripts.pory"
	.string "Grumble…\p"
# 1349 "data/maps/SlateportCity/scripts.pory"
	.string "I should've brought my Game Boy\n"
# 1350 "data/maps/SlateportCity/scripts.pory"
	.string "Advance so I wouldn't get bored in line…\p"
# 1351 "data/maps/SlateportCity/scripts.pory"
	.string "Grumble…$"
# 1352 "data/maps/SlateportCity/scripts.pory"

# 1353 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HotSpringsAfterOperation:
# 1354 "data/maps/SlateportCity/scripts.pory"
	.string "When this operation's over, I'll take\n"
# 1355 "data/maps/SlateportCity/scripts.pory"
	.string "you to a hot spring spa!\p"
# 1356 "data/maps/SlateportCity/scripts.pory"
	.string "That's what our leader said.\n"
# 1357 "data/maps/SlateportCity/scripts.pory"
	.string "I can't wait!$"
# 1358 "data/maps/SlateportCity/scripts.pory"

# 1359 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SeaIsSoWet:
# 1360 "data/maps/SlateportCity/scripts.pory"
	.string "The sea is just so vast…\p"
# 1361 "data/maps/SlateportCity/scripts.pory"
	.string "Could the sea have been made by\n"
# 1362 "data/maps/SlateportCity/scripts.pory"
	.string "the tears shed by Pokémon?$"
# 1363 "data/maps/SlateportCity/scripts.pory"

# 1364 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SinkOldBoats:
# 1365 "data/maps/SlateportCity/scripts.pory"
	.string "Do you know what they do with old\n"
# 1366 "data/maps/SlateportCity/scripts.pory"
	.string "ships that become too creaky to sail?\p"
# 1367 "data/maps/SlateportCity/scripts.pory"
	.string "They sink them in the sea so they\n"
# 1368 "data/maps/SlateportCity/scripts.pory"
	.string "become habitats for Pokémon.$"
# 1369 "data/maps/SlateportCity/scripts.pory"

# 1370 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyTooMuch:
# 1371 "data/maps/SlateportCity/scripts.pory"
	.string "Whenever I visit here, I get carried\n"
# 1372 "data/maps/SlateportCity/scripts.pory"
	.string "away and buy too much.$"
# 1373 "data/maps/SlateportCity/scripts.pory"

# 1374 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GetNameRaterToHelpYou:
# 1375 "data/maps/SlateportCity/scripts.pory"
	.string "If you want to change your Pokémon's\n"
# 1376 "data/maps/SlateportCity/scripts.pory"
	.string "nickname, you can do it in the Party\l"
# 1377 "data/maps/SlateportCity/scripts.pory"
	.string "Menu!$"
# 1378 "data/maps/SlateportCity/scripts.pory"

# 1379 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CantChangeTradeMonName:
# 1380 "data/maps/SlateportCity/scripts.pory"
	.string "Any Pokémon you get in a trade,\n"
# 1381 "data/maps/SlateportCity/scripts.pory"
	.string "you can change its nickname.\p"
# 1382 "data/maps/SlateportCity/scripts.pory"
	.string "The world is your oyster, man!$"
# 1383 "data/maps/SlateportCity/scripts.pory"

# 1384 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentBuiltRecently:
# 1385 "data/maps/SlateportCity/scripts.pory"
	.string "Recently, a Battle Tent was built\n"
# 1386 "data/maps/SlateportCity/scripts.pory"
	.string "in Slateport.\p"
# 1387 "data/maps/SlateportCity/scripts.pory"
	.string "Gyms are fun, but the Battle Tent's\n"
# 1388 "data/maps/SlateportCity/scripts.pory"
	.string "awesome in its own way.\p"
# 1389 "data/maps/SlateportCity/scripts.pory"
	.string "You should go find tough Pokémon\n"
# 1390 "data/maps/SlateportCity/scripts.pory"
	.string "for the Battle Tent!$"
# 1391 "data/maps/SlateportCity/scripts.pory"

# 1392 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptSternBeingInterviewed:
# 1393 "data/maps/SlateportCity/scripts.pory"
	.string "I was hoping that it was a famous star\n"
# 1394 "data/maps/SlateportCity/scripts.pory"
	.string "so I could get an autograph.\p"
# 1395 "data/maps/SlateportCity/scripts.pory"
	.string "But who's that being interviewed?\n"
# 1396 "data/maps/SlateportCity/scripts.pory"
	.string "Isn't that Capt. Stern?$"
# 1397 "data/maps/SlateportCity/scripts.pory"

# 1398 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_InterviewerSoCool:
# 1399 "data/maps/SlateportCity/scripts.pory"
	.string "That lady interviewer is so cool\n"
# 1400 "data/maps/SlateportCity/scripts.pory"
	.string "and pretty.\p"
# 1401 "data/maps/SlateportCity/scripts.pory"
	.string "When I grow up, I'm going to be\n"
# 1402 "data/maps/SlateportCity/scripts.pory"
	.string "an international journalist!$"
# 1403 "data/maps/SlateportCity/scripts.pory"

# 1404 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternSaysDiscoveredSomething:
# 1405 "data/maps/SlateportCity/scripts.pory"
	.string "Capt. Stern says they discovered\n"
# 1406 "data/maps/SlateportCity/scripts.pory"
	.string "something at the bottom of the sea.\p"
# 1407 "data/maps/SlateportCity/scripts.pory"
	.string "I wonder what it is?\n"
# 1408 "data/maps/SlateportCity/scripts.pory"
	.string "What could it be?$"
# 1409 "data/maps/SlateportCity/scripts.pory"

# 1410 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainComeBackWithBigFish:
# 1411 "data/maps/SlateportCity/scripts.pory"
	.string "What's going on here?\p"
# 1412 "data/maps/SlateportCity/scripts.pory"
	.string "Did the good Captain come back with\n"
# 1413 "data/maps/SlateportCity/scripts.pory"
	.string "a big fish from the ocean floor?$"
# 1414 "data/maps/SlateportCity/scripts.pory"

# 1415 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AmIOnTV:
# 1416 "data/maps/SlateportCity/scripts.pory"
	.string "Hey! Are you watching?\n"
# 1417 "data/maps/SlateportCity/scripts.pory"
	.string "Am I on TV?$"
# 1418 "data/maps/SlateportCity/scripts.pory"

# 1419 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainsACelebrity:
# 1420 "data/maps/SlateportCity/scripts.pory"
	.string "A TV interview! Here!\n"
# 1421 "data/maps/SlateportCity/scripts.pory"
	.string "The Captain's a celebrity!$"
# 1422 "data/maps/SlateportCity/scripts.pory"

# 1423 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BigSmileForCamera:
# 1424 "data/maps/SlateportCity/scripts.pory"
	.string "TY: Okay, Capt. Stern, a big smile\n"
# 1425 "data/maps/SlateportCity/scripts.pory"
	.string "for the camera!$"
# 1426 "data/maps/SlateportCity/scripts.pory"

# 1427 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MostInvaluableExperience:
# 1428 "data/maps/SlateportCity/scripts.pory"
	.string "Gabby: I see, I see. You've had a most\n"
# 1429 "data/maps/SlateportCity/scripts.pory"
	.string "invaluable experience…$"
# 1430 "data/maps/SlateportCity/scripts.pory"

# 1431 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternMoveAheadWithExploration:
# 1432 "data/maps/SlateportCity/scripts.pory"
	.string "Capt. Stern: Yes, indeed. We intend to\n"
# 1433 "data/maps/SlateportCity/scripts.pory"
	.string "move ahead with our exploration.$"
# 1434 "data/maps/SlateportCity/scripts.pory"

# 1435 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GabbyWonderfulThanksForInterview:
# 1436 "data/maps/SlateportCity/scripts.pory"
	.string "Gabby: That's wonderful, Capt. Stern!\n"
# 1437 "data/maps/SlateportCity/scripts.pory"
	.string "Thank you for taking the time from\l"
# 1438 "data/maps/SlateportCity/scripts.pory"
	.string "your busy schedule to talk to us.\p"
# 1439 "data/maps/SlateportCity/scripts.pory"
	.string "We hope we can interview you again\n"
# 1440 "data/maps/SlateportCity/scripts.pory"
	.string "with news of more discoveries!$"
# 1441 "data/maps/SlateportCity/scripts.pory"

# 1442 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhewFirstInterview:
# 1443 "data/maps/SlateportCity/scripts.pory"
	.string "Capt. Stern: Whew…\p"
# 1444 "data/maps/SlateportCity/scripts.pory"
	.string "That was my first time to be filmed for\n"
# 1445 "data/maps/SlateportCity/scripts.pory"
	.string "TV. That was nerve-wracking.$"
# 1446 "data/maps/SlateportCity/scripts.pory"

# 1447 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OhPlayerWeMadeDiscovery:
# 1448 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! {PLAYER}{KUN}!\n"
# 1449 "data/maps/SlateportCity/scripts.pory"
	.string "You're looking great!\p"
# 1450 "data/maps/SlateportCity/scripts.pory"
	.string "We made a huge discovery on our last\n"
# 1451 "data/maps/SlateportCity/scripts.pory"
	.string "seafloor exploration.\p"
# 1452 "data/maps/SlateportCity/scripts.pory"
	.string "We found an underwater cavern on\n"
# 1453 "data/maps/SlateportCity/scripts.pory"
	.string "Route 128.\p"
# 1454 "data/maps/SlateportCity/scripts.pory"
	.string "We think it's the habitat of a Pokémon\n"
# 1455 "data/maps/SlateportCity/scripts.pory"
	.string "that's said to have been long extinct.$"
# 1456 "data/maps/SlateportCity/scripts.pory"

# 1457 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaWillAssumeControlOfSubmarine:
# 1458 "data/maps/SlateportCity/scripts.pory"
	.string "Fufufu…\n"
# 1459 "data/maps/SlateportCity/scripts.pory"
	.string "Capt. Stern, I presume.\p"
# 1460 "data/maps/SlateportCity/scripts.pory"
	.string "We of Team Aqua will assume\n"
# 1461 "data/maps/SlateportCity/scripts.pory"
	.string "control of your submarine!\p"
# 1462 "data/maps/SlateportCity/scripts.pory"
	.string "Your objections are meaningless!\n"
# 1463 "data/maps/SlateportCity/scripts.pory"
	.string "We expect your total cooperation!\p"
# 1464 "data/maps/SlateportCity/scripts.pory"
	.string "Fufufu…\n"
# 1465 "data/maps/SlateportCity/scripts.pory"
	.string "Just watch and learn what Team\l"
# 1466 "data/maps/SlateportCity/scripts.pory"
	.string "Aqua has planned!$"
# 1467 "data/maps/SlateportCity/scripts.pory"

# 1468 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhatWasAllThat:
# 1469 "data/maps/SlateportCity/scripts.pory"
	.string "Capt. Stern: What was that all about?\p"
# 1470 "data/maps/SlateportCity/scripts.pory"
	.string "It sounded like someone using\n"
# 1471 "data/maps/SlateportCity/scripts.pory"
	.string "a megaphone…\p"
# 1472 "data/maps/SlateportCity/scripts.pory"
	.string "Where did it come from?$"
# 1473 "data/maps/SlateportCity/scripts.pory"

# 1474 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FromHarborTryingToTakeSub:
# 1475 "data/maps/SlateportCity/scripts.pory"
	.string "It's from the Harbor!\p"
# 1476 "data/maps/SlateportCity/scripts.pory"
	.string "The submarine!\n"
# 1477 "data/maps/SlateportCity/scripts.pory"
	.string "They're trying to take it!$"
# 1478 "data/maps/SlateportCity/scripts.pory"

# 1479 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseComeWithMe:
# 1480 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}{KUN}!\n"
# 1481 "data/maps/SlateportCity/scripts.pory"
	.string "Please, come with me!$"
# 1482 "data/maps/SlateportCity/scripts.pory"

# 1483 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentSign:
# 1484 "data/maps/SlateportCity/scripts.pory"
	.string "Battle Tent Slateport Site\n"
# 1485 "data/maps/SlateportCity/scripts.pory"
	.string "“Find it! The ultimate Pokémon!”$"
# 1486 "data/maps/SlateportCity/scripts.pory"

# 1487 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardWantedSign:
# 1488 "data/maps/SlateportCity/scripts.pory"
	.string "Stern's Shipyard\p"
# 1489 "data/maps/SlateportCity/scripts.pory"
	.string "“Wanted: A sailor capable of sailing\n"
# 1490 "data/maps/SlateportCity/scripts.pory"
	.string "in all currents.”$"
# 1491 "data/maps/SlateportCity/scripts.pory"

# 1492 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardNearsCompletion:
# 1493 "data/maps/SlateportCity/scripts.pory"
	.string "Stern's Shipyard\p"
# 1494 "data/maps/SlateportCity/scripts.pory"
	.string "“The ferry S.S. Tidal nears\n"
# 1495 "data/maps/SlateportCity/scripts.pory"
	.string "completion for serving the ports of\l"
# 1496 "data/maps/SlateportCity/scripts.pory"
	.string "Slateport and Lilycove.”$"
# 1497 "data/maps/SlateportCity/scripts.pory"

# 1498 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardFerryComplete:
# 1499 "data/maps/SlateportCity/scripts.pory"
	.string "Stern's Shipyard\p"
# 1500 "data/maps/SlateportCity/scripts.pory"
	.string "“Boarding of the Slateport-Lilycove\n"
# 1501 "data/maps/SlateportCity/scripts.pory"
	.string "ferry S.S. Tidal is handled at the\l"
# 1502 "data/maps/SlateportCity/scripts.pory"
	.string "Harbor.”$"
# 1503 "data/maps/SlateportCity/scripts.pory"

# 1504 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PokemonFanClubSign:
# 1505 "data/maps/SlateportCity/scripts.pory"
	.string "Pokémon Fan Club\n"
# 1506 "data/maps/SlateportCity/scripts.pory"
	.string "“Calling all fans of Pokémon!”$"
# 1507 "data/maps/SlateportCity/scripts.pory"

# 1508 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OceanicMuseumSign:
# 1509 "data/maps/SlateportCity/scripts.pory"
	.string "“The endless sea sustains\n"
# 1510 "data/maps/SlateportCity/scripts.pory"
	.string "all life.”\p"
# 1511 "data/maps/SlateportCity/scripts.pory"
	.string "Oceanic Museum$"
# 1512 "data/maps/SlateportCity/scripts.pory"

# 1513 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CitySign:
# 1514 "data/maps/SlateportCity/scripts.pory"
	.string "Slateport City\p"
# 1515 "data/maps/SlateportCity/scripts.pory"
	.string "“The port where people and Pokémon\n"
# 1516 "data/maps/SlateportCity/scripts.pory"
	.string "cross paths.”$"
# 1517 "data/maps/SlateportCity/scripts.pory"

# 1518 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MarketSign:
# 1519 "data/maps/SlateportCity/scripts.pory"
	.string "Slateport Market\n"
# 1520 "data/maps/SlateportCity/scripts.pory"
	.string "“Unique items found nowhere else!”$"
# 1521 "data/maps/SlateportCity/scripts.pory"

# 1522 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborFerryUnderConstruction:
# 1523 "data/maps/SlateportCity/scripts.pory"
	.string "Slateport Harbor\p"
# 1524 "data/maps/SlateportCity/scripts.pory"
	.string "“The ferry S.S. Tidal is under\n"
# 1525 "data/maps/SlateportCity/scripts.pory"
	.string "construction in the Shipyard.\p"
# 1526 "data/maps/SlateportCity/scripts.pory"
	.string "“Service is scheduled to begin\n"
# 1527 "data/maps/SlateportCity/scripts.pory"
	.string "shortly.”$"
# 1528 "data/maps/SlateportCity/scripts.pory"

# 1529 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborSign:
# 1530 "data/maps/SlateportCity/scripts.pory"
	.string "Slateport Harbor\p"
# 1531 "data/maps/SlateportCity/scripts.pory"
	.string "“Enjoy a delightful cruise on\n"
# 1532 "data/maps/SlateportCity/scripts.pory"
	.string "the ferry S.S. Tidal.”$"
# 1533 "data/maps/SlateportCity/scripts.pory"

# 1534 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_NameRatersHouseSign:
# 1535 "data/maps/SlateportCity/scripts.pory"
	.string "Name Rater's House\n"
# 1536 "data/maps/SlateportCity/scripts.pory"
	.string "“Pokémon nicknames rated.”$"
# 1537 "data/maps/SlateportCity/scripts.pory"

# 1538 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerries:
# 1539 "data/maps/SlateportCity/scripts.pory"
	.string "If a wild Pokémon gets hurt, it heals\n"
# 1540 "data/maps/SlateportCity/scripts.pory"
	.string "itself by chewing on BERRIES.\p"
# 1541 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1542 "data/maps/SlateportCity/scripts.pory"
	.string "Somebody saw that and got the idea\n"
# 1543 "data/maps/SlateportCity/scripts.pory"
	.string "of making medicine from BERRIES.\p"
# 1544 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1545 "data/maps/SlateportCity/scripts.pory"
	.string "To turn BERRIES into medicine,\n"
# 1546 "data/maps/SlateportCity/scripts.pory"
	.string "they must be crushed into powder.\p"
# 1547 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1548 "data/maps/SlateportCity/scripts.pory"
	.string "You seem to have an interest\n"
# 1549 "data/maps/SlateportCity/scripts.pory"
	.string "in BERRIES!\p"
# 1550 "data/maps/SlateportCity/scripts.pory"
	.string "I've got something good for someone\n"
# 1551 "data/maps/SlateportCity/scripts.pory"
	.string "like you.$"
# 1552 "data/maps/SlateportCity/scripts.pory"

# 1553 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerryPowder:
# 1554 "data/maps/SlateportCity/scripts.pory"
	.string "I recently had machines installed at\n"
# 1555 "data/maps/SlateportCity/scripts.pory"
	.string "Pokémon CenterS for crushing BERRIES.\p"
# 1556 "data/maps/SlateportCity/scripts.pory"
	.string "The BERRY CRUSH machines are at\n"
# 1557 "data/maps/SlateportCity/scripts.pory"
	.string "the DIRECT CORNER upstairs.\p"
# 1558 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know?\p"
# 1559 "data/maps/SlateportCity/scripts.pory"
	.string "Could you make BERRY POWDER for\n"
# 1560 "data/maps/SlateportCity/scripts.pory"
	.string "me using those machines?\p"
# 1561 "data/maps/SlateportCity/scripts.pory"
	.string "I can make you all sorts of medicine\n"
# 1562 "data/maps/SlateportCity/scripts.pory"
	.string "if you bring me lots of BERRY POWDER.$"
# 1563 "data/maps/SlateportCity/scripts.pory"

# 1564 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BroughtMeSomeBerryPowder:
# 1565 "data/maps/SlateportCity/scripts.pory"
	.string "Have you brought me some\n"
# 1566 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER?$"
# 1567 "data/maps/SlateportCity/scripts.pory"

# 1568 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeWhatWithIt:
# 1569 "data/maps/SlateportCity/scripts.pory"
	.string "What would you like to exchange\n"
# 1570 "data/maps/SlateportCity/scripts.pory"
	.string "it with?$"
# 1571 "data/maps/SlateportCity/scripts.pory"

# 1572 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeBerryPowderForItem:
# 1573 "data/maps/SlateportCity/scripts.pory"
	.string "Okay, you want to exchange your\n"
# 1574 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for one {STR_VAR_1}?$"
# 1575 "data/maps/SlateportCity/scripts.pory"

# 1576 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontHaveEnoughBerryPowder:
# 1577 "data/maps/SlateportCity/scripts.pory"
	.string "Oh, dear. You don't have enough\n"
# 1578 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER.$"
# 1579 "data/maps/SlateportCity/scripts.pory"

# 1580 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FineBerryPowderTradeSomethingElse:
# 1581 "data/maps/SlateportCity/scripts.pory"
	.string "This is fine BERRY POWDER.\n"
# 1582 "data/maps/SlateportCity/scripts.pory"
	.string "It will make excellent medicine.\p"
# 1583 "data/maps/SlateportCity/scripts.pory"
	.string "Would you like to trade more of your\n"
# 1584 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for something else?$"
# 1585 "data/maps/SlateportCity/scripts.pory"

# 1586 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhenYouGetMoreBringItToMe:
# 1587 "data/maps/SlateportCity/scripts.pory"
	.string "Okay! When you get some more\n"
# 1588 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER, bring it to me, please!$"
# 1589 "data/maps/SlateportCity/scripts.pory"

# 1590 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ComeBackToTradeBerryPowder:
# 1591 "data/maps/SlateportCity/scripts.pory"
	.string "Come back if you'd like to trade your\n"
# 1592 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for some medicine.\p"
# 1593 "data/maps/SlateportCity/scripts.pory"
	.string "I'm always running a bazaar here.\p"
# 1594 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know?$"
# 1595 "data/maps/SlateportCity/scripts.pory"

# 1596 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_YouDroveTeamAquaAway:
# 1597 "data/maps/SlateportCity/scripts.pory"
	.string "Scott: Huh?\n"
# 1598 "data/maps/SlateportCity/scripts.pory"
	.string "I'm sure I met you somewhere before.\p"
# 1599 "data/maps/SlateportCity/scripts.pory"
	.string "Have I introduced myself to you?\n"
# 1600 "data/maps/SlateportCity/scripts.pory"
	.string "If not, my name's Scott.\p"
# 1601 "data/maps/SlateportCity/scripts.pory"
	.string "I just saw Team Aqua run away from\n"
# 1602 "data/maps/SlateportCity/scripts.pory"
	.string "here like they were stung.\p"
# 1603 "data/maps/SlateportCity/scripts.pory"
	.string "Let me guess--you drove them away?$"
# 1604 "data/maps/SlateportCity/scripts.pory"

# 1605 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MaybeThisTrainer:
# 1606 "data/maps/SlateportCity/scripts.pory"
	.string "Scott: Hmm…\n"
# 1607 "data/maps/SlateportCity/scripts.pory"
	.string "Maybe, just maybe, this Trainer…$"
# 1608 "data/maps/SlateportCity/scripts.pory"

# 1609 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_LetsRegisterEachOther:
# 1610 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: All right! I think you're going\n"
# 1611 "data/maps/SlateportCity/scripts.pory"
	.string "to become a good friend.\p"
# 1612 "data/maps/SlateportCity/scripts.pory"
	.string "So, let's register each other in our\n"
# 1613 "data/maps/SlateportCity/scripts.pory"
	.string "PokénavS.\p"
# 1614 "data/maps/SlateportCity/scripts.pory"
	.string "… … … … … …$"
# 1615 "data/maps/SlateportCity/scripts.pory"

# 1616 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RegisteredScott:
# 1617 "data/maps/SlateportCity/scripts.pory"
	.string "Registered this SCOTT person\n"
# 1618 "data/maps/SlateportCity/scripts.pory"
	.string "in the Pokénav.$"
# 1619 "data/maps/SlateportCity/scripts.pory"

# 1620 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou:
# 1621 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: What I'd like to do is tag along\n"
# 1622 "data/maps/SlateportCity/scripts.pory"
	.string "with you, but I do want to keep an eye\l"
# 1623 "data/maps/SlateportCity/scripts.pory"
	.string "on the talents of other people, too.\p"
# 1624 "data/maps/SlateportCity/scripts.pory"
	.string "So, I'll be off to roam other towns\n"
# 1625 "data/maps/SlateportCity/scripts.pory"
	.string "a bit more.\p"
# 1626 "data/maps/SlateportCity/scripts.pory"
	.string "Be seeing you, {PLAYER}{KUN}!$"
# 1627 "data/maps/SlateportCity/scripts.pory"

# 1628 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_TakingBattleTentChallenge:
# 1629 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Oh, hey!\n"
# 1630 "data/maps/SlateportCity/scripts.pory"
	.string "If it isn't {PLAYER}{KUN}!\p"
# 1631 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}{KUN}, let me guess--you're going\n"
# 1632 "data/maps/SlateportCity/scripts.pory"
	.string "to take the BATTLE TENT challenge?\p"
# 1633 "data/maps/SlateportCity/scripts.pory"
	.string "Yeah! That's a good idea!\n"
# 1634 "data/maps/SlateportCity/scripts.pory"
	.string "That's a really great idea!\p"
# 1635 "data/maps/SlateportCity/scripts.pory"
	.string "After all, a tough TRAINER is\n"
# 1636 "data/maps/SlateportCity/scripts.pory"
	.string "the perfect fit for the BATTLE TENT!\p"
# 1637 "data/maps/SlateportCity/scripts.pory"
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
