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
	switch VAR_RESULT
# 27 "data/maps/SlateportCity/scripts.pory"
	case 0, SlateportCity_EventScript_ApplianceMan_13
# 34 "data/maps/SlateportCity/scripts.pory"
	case 1, SlateportCity_EventScript_ApplianceMan_14
# 41 "data/maps/SlateportCity/scripts.pory"
	case 2, SlateportCity_EventScript_ApplianceMan_15
# 48 "data/maps/SlateportCity/scripts.pory"
	case 3, SlateportCity_EventScript_ApplianceMan_16
# 55 "data/maps/SlateportCity/scripts.pory"
	case 4, SlateportCity_EventScript_ApplianceMan_17
SlateportCity_EventScript_ApplianceMan_11:
# 63 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_CHANGED_ROTOM_FORM
# 64 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 65 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_EventScript_ApplianceMan_Text_9
# 66 "data/maps/SlateportCity/scripts.pory"
	release
	end

SlateportCity_EventScript_ApplianceMan_1:
# 71 "data/maps/SlateportCity/scripts.pory"
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

SlateportCity_EventScript_ApplianceMan_13:
# 28 "data/maps/SlateportCity/scripts.pory"
	special ChangeRotomFormBufferPositionAndName
# 29 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 30 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_EventScript_ApplianceMan_Text_4
# 31 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 32 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 33 "data/maps/SlateportCity/scripts.pory"
	closemessage
	goto SlateportCity_EventScript_ApplianceMan_11

SlateportCity_EventScript_ApplianceMan_14:
# 35 "data/maps/SlateportCity/scripts.pory"
	special ChangeRotomFormBufferPositionAndName
# 36 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 37 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_EventScript_ApplianceMan_Text_5
# 38 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 39 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 40 "data/maps/SlateportCity/scripts.pory"
	closemessage
	goto SlateportCity_EventScript_ApplianceMan_11

SlateportCity_EventScript_ApplianceMan_15:
# 42 "data/maps/SlateportCity/scripts.pory"
	special ChangeRotomFormBufferPositionAndName
# 43 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 44 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_EventScript_ApplianceMan_Text_6
# 45 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 46 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 47 "data/maps/SlateportCity/scripts.pory"
	closemessage
	goto SlateportCity_EventScript_ApplianceMan_11

SlateportCity_EventScript_ApplianceMan_16:
# 49 "data/maps/SlateportCity/scripts.pory"
	special ChangeRotomFormBufferPositionAndName
# 50 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 51 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_EventScript_ApplianceMan_Text_7
# 52 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 53 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 54 "data/maps/SlateportCity/scripts.pory"
	closemessage
	goto SlateportCity_EventScript_ApplianceMan_11

SlateportCity_EventScript_ApplianceMan_17:
# 56 "data/maps/SlateportCity/scripts.pory"
	special ChangeRotomFormBufferPositionAndName
# 57 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 58 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_EventScript_ApplianceMan_Text_8
# 59 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 60 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 61 "data/maps/SlateportCity/scripts.pory"
	closemessage
	goto SlateportCity_EventScript_ApplianceMan_11


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
SlateportCity_EventScript_SetReadyForScottScene::
# 137 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 138 "data/maps/SlateportCity/scripts.pory"
	getplayerxy VAR_0x8004, VAR_0x8005
# 139 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_0x8004, 30, SlateportCity_EventScript_MoveScottLeft
# 140 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 23, 27
# 141 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 142 "data/maps/SlateportCity/scripts.pory"
	return
# 143 "data/maps/SlateportCity/scripts.pory"

# 144 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MoveScottLeft::
# 145 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 22, 27
# 146 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_RIGHT
# 147 "data/maps/SlateportCity/scripts.pory"
	return
# 148 "data/maps/SlateportCity/scripts.pory"

# 149 "data/maps/SlateportCity/scripts.pory"
SlateportCity_OnFrame:
# 150 "data/maps/SlateportCity/scripts.pory"
	map_script_2 VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 1, SlateportCity_EventScript_ScottScene
# 151 "data/maps/SlateportCity/scripts.pory"
	.2byte 0
# 152 "data/maps/SlateportCity/scripts.pory"

# 153 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottScene::
# 154 "data/maps/SlateportCity/scripts.pory"
	lockall
# 155 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SCOTT
# 156 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerFaceScott
# 157 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottApproachPlayer
# 158 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 159 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_YouDroveTeamAquaAway, MSGBOX_DEFAULT
# 160 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 161 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 162 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 163 "data/maps/SlateportCity/scripts.pory"
	delay 60
# 164 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MaybeThisTrainer, MSGBOX_DEFAULT
# 165 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 166 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 167 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_LetsRegisterEachOther, MSGBOX_DEFAULT
# 168 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 169 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 170 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 171 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RegisteredScott, MSGBOX_DEFAULT
# 172 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 173 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 174 "data/maps/SlateportCity/scripts.pory"
	delay 30
# 175 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_ENABLE_SCOTT_MATCH_CALL
# 176 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou, MSGBOX_DEFAULT
# 177 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 178 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExit
# 179 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 180 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 181 "data/maps/SlateportCity/scripts.pory"
	setobjectxyperm LOCALID_SCOTT, 10, 12
# 182 "data/maps/SlateportCity/scripts.pory"
	setobjectmovementtype LOCALID_SCOTT, MOVEMENT_TYPE_FACE_DOWN
# 183 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 184 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 2
# 185 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 186 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 187 "data/maps/SlateportCity/scripts.pory"
	end
# 188 "data/maps/SlateportCity/scripts.pory"

# 189 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceScott:
# 190 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 191 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 192 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 193 "data/maps/SlateportCity/scripts.pory"
	step_end
# 194 "data/maps/SlateportCity/scripts.pory"

# 195 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottApproachPlayer:
# 196 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 197 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 198 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 199 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 200 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 201 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 202 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 203 "data/maps/SlateportCity/scripts.pory"
	step_end
# 204 "data/maps/SlateportCity/scripts.pory"

# 205 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExit:
# 206 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 207 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 208 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 209 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 210 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 211 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 212 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 213 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 214 "data/maps/SlateportCity/scripts.pory"
	step_end
# 215 "data/maps/SlateportCity/scripts.pory"

# 216 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyGuru::
# 217 "data/maps/SlateportCity/scripts.pory"
	lock
# 218 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 219 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_EnergyGuruSellWhatYouNeed
# 220 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 221 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_EnergyGuru
# 222 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 223 "data/maps/SlateportCity/scripts.pory"
	release
# 224 "data/maps/SlateportCity/scripts.pory"
	end
# 225 "data/maps/SlateportCity/scripts.pory"

# 226 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 227 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_EnergyGuru:
# 228 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PROTEIN
# 229 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_IRON
# 230 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CARBOS
# 231 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_ZINC
# 232 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_CALCIUM
# 233 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_HP_UP
# 234 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NONE
# 235 "data/maps/SlateportCity/scripts.pory"
	release
# 236 "data/maps/SlateportCity/scripts.pory"
	end
# 237 "data/maps/SlateportCity/scripts.pory"

# 238 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Trader1::
# 239 "data/maps/SlateportCity/scripts.pory"
	lock
# 240 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 241 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SLATEPORT_CITY_TRADE_1_COMPLETED, SlateportCity_EventScript_Trade1Completed
# 242 "data/maps/SlateportCity/scripts.pory"
	ingame_trade INGAME_TRADE_ALOLAN_GRIMER, SlateportCity_Text_IllTradeIfYouWant1, SlateportCity_EventScript_MukTrade, SlateportCity_EventScript_NotRequestedMon1, SlateportCity_Text_RememberToRecycle
# 243 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_SLATEPORT_CITY_TRADE_1_COMPLETED
# 244 "data/maps/SlateportCity/scripts.pory"
	release
# 245 "data/maps/SlateportCity/scripts.pory"
	end
# 246 "data/maps/SlateportCity/scripts.pory"

# 247 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MukTrade::
# 248 "data/maps/SlateportCity/scripts.pory"
	ingame_trade INGAME_TRADE_ALOLAN_MUK, SlateportCity_Text_WillingToTradeMuks, SlateportCity_EventScript_DeclineTrade1, SlateportCity_EventScript_NotRequestedMon2, SlateportCity_Text_RememberToRecycle
# 249 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_SLATEPORT_CITY_TRADE_1_COMPLETED
# 250 "data/maps/SlateportCity/scripts.pory"
	release
# 251 "data/maps/SlateportCity/scripts.pory"
	end
# 252 "data/maps/SlateportCity/scripts.pory"

# 253 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DeclineTrade1::
# 254 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_YoungPeopleDont, MSGBOX_DEFAULT
# 255 "data/maps/SlateportCity/scripts.pory"
	release
# 256 "data/maps/SlateportCity/scripts.pory"
	end
# 257 "data/maps/SlateportCity/scripts.pory"

# 258 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NotRequestedMon1::
# 259 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ThatsNotAGrimer, MSGBOX_DEFAULT
# 260 "data/maps/SlateportCity/scripts.pory"
	release
# 261 "data/maps/SlateportCity/scripts.pory"
	end
# 262 "data/maps/SlateportCity/scripts.pory"

# 263 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NotRequestedMon2::
# 264 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ThatsNotAMuk, MSGBOX_DEFAULT
# 265 "data/maps/SlateportCity/scripts.pory"
	release
# 266 "data/maps/SlateportCity/scripts.pory"
	end
# 267 "data/maps/SlateportCity/scripts.pory"

# 268 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Trade1Completed::
# 269 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RememberToRecycle, MSGBOX_DEFAULT
# 270 "data/maps/SlateportCity/scripts.pory"
	release
# 271 "data/maps/SlateportCity/scripts.pory"
	end
# 272 "data/maps/SlateportCity/scripts.pory"

# 273 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_IllTradeIfYouWant1:
# 274 "data/maps/SlateportCity/scripts.pory"
	.string "Oil spills are such a tragedy.\p"
# 275 "data/maps/SlateportCity/scripts.pory"
	.string "Look at what happened to this Grimer I\n"
# 276 "data/maps/SlateportCity/scripts.pory"
	.string "found by the harbor…\p"
# 277 "data/maps/SlateportCity/scripts.pory"
	.string "Maybe you can care for this Grimer better\n"
# 278 "data/maps/SlateportCity/scripts.pory"
	.string "than I can.\p"
# 279 "data/maps/SlateportCity/scripts.pory"
	.string "If you have a Grimer of your own, I would\n"
# 280 "data/maps/SlateportCity/scripts.pory"
	.string "be willing to trade.$"
# 281 "data/maps/SlateportCity/scripts.pory"

# 282 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WillingToTradeMuks:
# 283 "data/maps/SlateportCity/scripts.pory"
	.string "I see, would you be willing to trade Muks\n"
# 284 "data/maps/SlateportCity/scripts.pory"
	.string "instead?$"
# 285 "data/maps/SlateportCity/scripts.pory"

# 286 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ThatsNotAGrimer:
# 287 "data/maps/SlateportCity/scripts.pory"
	.string "That's not a Grimer, silly.$"
# 288 "data/maps/SlateportCity/scripts.pory"

# 289 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ThatsNotAMuk:
# 290 "data/maps/SlateportCity/scripts.pory"
	.string "That's not a Muk, silly.$"
# 291 "data/maps/SlateportCity/scripts.pory"

# 292 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_YoungPeopleDont:
# 293 "data/maps/SlateportCity/scripts.pory"
	.string "Young people don't care about the\n"
# 294 "data/maps/SlateportCity/scripts.pory"
	.string "environment these days…$"
# 295 "data/maps/SlateportCity/scripts.pory"

# 296 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RememberToRecycle:
# 297 "data/maps/SlateportCity/scripts.pory"
	.string "Remember to recycle!$"
# 298 "data/maps/SlateportCity/scripts.pory"

# 299 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Trader2::
# 300 "data/maps/SlateportCity/scripts.pory"
	lock
# 301 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 302 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SLATEPORT_CITY_TRADE_2_COMPLETED, SlateportCity_EventScript_TradeCompleted
# 303 "data/maps/SlateportCity/scripts.pory"
	ingame_trade INGAME_TRADE_GALARIAN_WEEZING, SlateportCity_Text_IllTradeIfYouWant2, SlateportCity_EventScript_DeclineTrade2, SlateportCity_EventScript_NotRequestedMon3, SlateportCity_Text_MyWeezingLooks
# 304 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_SLATEPORT_CITY_TRADE_2_COMPLETED
# 305 "data/maps/SlateportCity/scripts.pory"
	release
# 306 "data/maps/SlateportCity/scripts.pory"
	end
# 307 "data/maps/SlateportCity/scripts.pory"

# 308 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DeclineTrade2::
# 309 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_YouDontWantToThatsOkay, MSGBOX_DEFAULT
# 310 "data/maps/SlateportCity/scripts.pory"
	release
# 311 "data/maps/SlateportCity/scripts.pory"
	end
# 312 "data/maps/SlateportCity/scripts.pory"

# 313 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NotRequestedMon3::
# 314 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontTryToPull, MSGBOX_DEFAULT
# 315 "data/maps/SlateportCity/scripts.pory"
	release
# 316 "data/maps/SlateportCity/scripts.pory"
	end
# 317 "data/maps/SlateportCity/scripts.pory"

# 318 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_TradeCompleted::
# 319 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AnyPokemonCanBeCute, MSGBOX_DEFAULT
# 320 "data/maps/SlateportCity/scripts.pory"
	release
# 321 "data/maps/SlateportCity/scripts.pory"
	end
# 322 "data/maps/SlateportCity/scripts.pory"

# 323 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_IllTradeIfYouWant2:
# 324 "data/maps/SlateportCity/scripts.pory"
	.string "The name's Devin, and I just set up\n"
# 325 "data/maps/SlateportCity/scripts.pory"
	.string "this tent, I call it the Devin Tent!\p"
# 326 "data/maps/SlateportCity/scripts.pory"
	.string "Anyway, I have this Weezing I want to\n"
# 327 "data/maps/SlateportCity/scripts.pory"
	.string "trade.\p"
# 328 "data/maps/SlateportCity/scripts.pory"
	.string "If you have a Weezing from Kanto i'll\n"
# 329 "data/maps/SlateportCity/scripts.pory"
	.string "trade you for it!\p"
# 330 "data/maps/SlateportCity/scripts.pory"
	.string "There's just one catch, this Weezing is\n"
# 331 "data/maps/SlateportCity/scripts.pory"
	.string "quite afraid of heights you see.\p"
# 332 "data/maps/SlateportCity/scripts.pory"
	.string "So if you could keep it as Levitate, so\n"
# 333 "data/maps/SlateportCity/scripts.pory"
	.string "it doesn't have to worry about falling,\l"
# 334 "data/maps/SlateportCity/scripts.pory"
	.string "that would be great.\p"
# 335 "data/maps/SlateportCity/scripts.pory"
	.string "Are you up for it?$"
# 336 "data/maps/SlateportCity/scripts.pory"

# 337 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MyWeezingLooks:
# 338 "data/maps/SlateportCity/scripts.pory"
	.string "My Weezing looks happier already.$"
# 339 "data/maps/SlateportCity/scripts.pory"

# 340 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontTryToPull:
# 341 "data/maps/SlateportCity/scripts.pory"
	.string "Don't try to pull a fast one on me.$"
# 342 "data/maps/SlateportCity/scripts.pory"

# 343 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_YouDontWantToThatsOkay:
# 344 "data/maps/SlateportCity/scripts.pory"
	.string "Thats fine.$"
# 345 "data/maps/SlateportCity/scripts.pory"

# 346 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AnyPokemonCanBeCute:
# 347 "data/maps/SlateportCity/scripts.pory"
	.string "How is my Weezing doing?$"
# 348 "data/maps/SlateportCity/scripts.pory"

# 349 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EffortRibbonWoman::
# 350 "data/maps/SlateportCity/scripts.pory"
	lock
# 351 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 352 "data/maps/SlateportCity/scripts.pory"
	bufferleadmonspeciesname STR_VAR_1
# 353 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhYourPokemon, MSGBOX_DEFAULT
# 354 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, LeadMonHasEffortRibbon
# 355 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, TRUE, SlateportCity_EventScript_MonHasEffortRibbon
# 356 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, Special_AreLeadMonEVsMaxedOut
# 357 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_MonEVsNotMaxed
# 358 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseGiveItThisEffortRibbon, MSGBOX_DEFAULT
# 359 "data/maps/SlateportCity/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 360 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ReceivedEffortRibbon
# 361 "data/maps/SlateportCity/scripts.pory"
	waitfanfare
# 362 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PutEffortRibbonOnMon, MSGBOX_DEFAULT
# 363 "data/maps/SlateportCity/scripts.pory"
	special GiveLeadMonEffortRibbon
# 364 "data/maps/SlateportCity/scripts.pory"
	release
# 365 "data/maps/SlateportCity/scripts.pory"
	end
# 366 "data/maps/SlateportCity/scripts.pory"

# 367 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonEVsNotMaxed::
# 368 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoForItLittleHarder, MSGBOX_DEFAULT
# 369 "data/maps/SlateportCity/scripts.pory"
	release
# 370 "data/maps/SlateportCity/scripts.pory"
	end
# 371 "data/maps/SlateportCity/scripts.pory"

# 372 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MonHasEffortRibbon::
# 373 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EffortRibbonLooksGoodOnIt, MSGBOX_DEFAULT
# 374 "data/maps/SlateportCity/scripts.pory"
	release
# 375 "data/maps/SlateportCity/scripts.pory"
	end
# 376 "data/maps/SlateportCity/scripts.pory"

# 377 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Cook::
# 378 "data/maps/SlateportCity/scripts.pory"
	lock
# 379 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 380 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_CookSternInterview
# 381 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaweedFullOfLife, MSGBOX_DEFAULT
# 382 "data/maps/SlateportCity/scripts.pory"
	release
# 383 "data/maps/SlateportCity/scripts.pory"
	end
# 384 "data/maps/SlateportCity/scripts.pory"

# 385 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CookSternInterview::
# 386 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainComeBackWithBigFish, MSGBOX_DEFAULT
# 387 "data/maps/SlateportCity/scripts.pory"
	release
# 388 "data/maps/SlateportCity/scripts.pory"
	end
# 389 "data/maps/SlateportCity/scripts.pory"

# 390 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWoman::
# 391 "data/maps/SlateportCity/scripts.pory"
	lock
# 392 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 393 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_OldWomanSternInterview
# 394 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HowTownIsBornAndGrows, MSGBOX_DEFAULT
# 395 "data/maps/SlateportCity/scripts.pory"
	release
# 396 "data/maps/SlateportCity/scripts.pory"
	end
# 397 "data/maps/SlateportCity/scripts.pory"

# 398 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OldWomanSternInterview::
# 399 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptSternBeingInterviewed, MSGBOX_DEFAULT
# 400 "data/maps/SlateportCity/scripts.pory"
	release
# 401 "data/maps/SlateportCity/scripts.pory"
	end
# 402 "data/maps/SlateportCity/scripts.pory"

# 403 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Girl::
# 404 "data/maps/SlateportCity/scripts.pory"
	lock
# 405 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 406 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_GirlSternInterview
# 407 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_SECRET_POWER, SlateportCity_EventScript_GirlSecretBase
# 408 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SlateportWonderfulPlace, MSGBOX_DEFAULT
# 409 "data/maps/SlateportCity/scripts.pory"
	release
# 410 "data/maps/SlateportCity/scripts.pory"
	end
# 411 "data/maps/SlateportCity/scripts.pory"

# 412 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSternInterview::
# 413 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_InterviewerSoCool, MSGBOX_DEFAULT
# 414 "data/maps/SlateportCity/scripts.pory"
	release
# 415 "data/maps/SlateportCity/scripts.pory"
	end
# 416 "data/maps/SlateportCity/scripts.pory"

# 417 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_GirlSecretBase::
# 418 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyBricksSoDecorWontGetDirty, MSGBOX_DEFAULT
# 419 "data/maps/SlateportCity/scripts.pory"
	release
# 420 "data/maps/SlateportCity/scripts.pory"
	end
# 421 "data/maps/SlateportCity/scripts.pory"

# 422 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoy::
# 423 "data/maps/SlateportCity/scripts.pory"
	lock
# 424 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 425 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_RichBoySternInterview
# 426 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GoingToCompeteInBattleTent, MSGBOX_DEFAULT
# 427 "data/maps/SlateportCity/scripts.pory"
	release
# 428 "data/maps/SlateportCity/scripts.pory"
	end
# 429 "data/maps/SlateportCity/scripts.pory"

# 430 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RichBoySternInterview::
# 431 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternSaysDiscoveredSomething, MSGBOX_DEFAULT
# 432 "data/maps/SlateportCity/scripts.pory"
	release
# 433 "data/maps/SlateportCity/scripts.pory"
	end
# 434 "data/maps/SlateportCity/scripts.pory"

# 435 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatMan::
# 436 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_FatManSternInterview
# 437 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BushedHikingFromMauville, MSGBOX_NPC
# 438 "data/maps/SlateportCity/scripts.pory"
	end
# 439 "data/maps/SlateportCity/scripts.pory"

# 440 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_FatManSternInterview::
# 441 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AmIOnTV, MSGBOX_SIGN
# 442 "data/maps/SlateportCity/scripts.pory"
	end
# 443 "data/maps/SlateportCity/scripts.pory"

# 444 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1::
# 445 "data/maps/SlateportCity/scripts.pory"
	lock
# 446 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 447 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_Man1SternInterview
# 448 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_EveryoneCallsHimCaptStern, MSGBOX_DEFAULT
# 449 "data/maps/SlateportCity/scripts.pory"
	release
# 450 "data/maps/SlateportCity/scripts.pory"
	end
# 451 "data/maps/SlateportCity/scripts.pory"

# 452 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man1SternInterview::
# 453 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CaptainsACelebrity, MSGBOX_DEFAULT
# 454 "data/maps/SlateportCity/scripts.pory"
	release
# 455 "data/maps/SlateportCity/scripts.pory"
	end
# 456 "data/maps/SlateportCity/scripts.pory"

# 457 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1::
# 458 "data/maps/SlateportCity/scripts.pory"
	lock
# 459 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 460 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_DOCK_REJECTED_DEVON_GOODS, SlateportCity_EventScript_Woman1AquaGone
# 461 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsLongLineOverThere, MSGBOX_DEFAULT
# 462 "data/maps/SlateportCity/scripts.pory"
	release
# 463 "data/maps/SlateportCity/scripts.pory"
	end
# 464 "data/maps/SlateportCity/scripts.pory"

# 465 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman1AquaGone::
# 466 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_VisitedMuseumOften, MSGBOX_DEFAULT
# 467 "data/maps/SlateportCity/scripts.pory"
	release
# 468 "data/maps/SlateportCity/scripts.pory"
	end
# 469 "data/maps/SlateportCity/scripts.pory"

# 470 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BattleTentSign::
# 471 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentSign, MSGBOX_SIGN
# 472 "data/maps/SlateportCity/scripts.pory"
	end
# 473 "data/maps/SlateportCity/scripts.pory"

# 474 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardSign::
# 475 "data/maps/SlateportCity/scripts.pory"
	lockall
# 476 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_SternsShipyardFerryComplete
# 477 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, SlateportCity_EventScript_SternsShipyardNearsCompletion
# 478 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardWantedSign, MSGBOX_DEFAULT
# 479 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 480 "data/maps/SlateportCity/scripts.pory"
	end
# 481 "data/maps/SlateportCity/scripts.pory"

# 482 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardNearsCompletion::
# 483 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardNearsCompletion, MSGBOX_DEFAULT
# 484 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 485 "data/maps/SlateportCity/scripts.pory"
	end
# 486 "data/maps/SlateportCity/scripts.pory"

# 487 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_SternsShipyardFerryComplete::
# 488 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternsShipyardFerryComplete, MSGBOX_DEFAULT
# 489 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 490 "data/maps/SlateportCity/scripts.pory"
	end
# 491 "data/maps/SlateportCity/scripts.pory"

# 492 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokemonFanClubSign::
# 493 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PokemonFanClubSign, MSGBOX_SIGN
# 494 "data/maps/SlateportCity/scripts.pory"
	end
# 495 "data/maps/SlateportCity/scripts.pory"

# 496 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_OceanicMuseumSign::
# 497 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OceanicMuseumSign, MSGBOX_SIGN
# 498 "data/maps/SlateportCity/scripts.pory"
	end
# 499 "data/maps/SlateportCity/scripts.pory"

# 500 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CitySign::
# 501 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CitySign, MSGBOX_SIGN
# 502 "data/maps/SlateportCity/scripts.pory"
	end
# 503 "data/maps/SlateportCity/scripts.pory"

# 504 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_MarketSign::
# 505 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MarketSign, MSGBOX_SIGN
# 506 "data/maps/SlateportCity/scripts.pory"
	end
# 507 "data/maps/SlateportCity/scripts.pory"

# 508 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSign::
# 509 "data/maps/SlateportCity/scripts.pory"
	lockall
# 510 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, SlateportCity_EventScript_HarborSignFerryComplete
# 511 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborFerryUnderConstruction, MSGBOX_DEFAULT
# 512 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 513 "data/maps/SlateportCity/scripts.pory"
	end
# 514 "data/maps/SlateportCity/scripts.pory"

# 515 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HarborSignFerryComplete::
# 516 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HarborSign, MSGBOX_DEFAULT
# 517 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 518 "data/maps/SlateportCity/scripts.pory"
	end
# 519 "data/maps/SlateportCity/scripts.pory"

# 520 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NameRatersHouseSign::
# 521 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_NameRatersHouseSign, MSGBOX_SIGN
# 522 "data/maps/SlateportCity/scripts.pory"
	end
# 523 "data/maps/SlateportCity/scripts.pory"

# 524 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Maniac::
# 525 "data/maps/SlateportCity/scripts.pory"
	lock
# 526 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 527 "data/maps/SlateportCity/scripts.pory"
	call_if_eq VAR_SLATEPORT_CITY_STATE, 1, SlateportCity_EventScript_ManiacSternInterview
# 528 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 529 "data/maps/SlateportCity/scripts.pory"
	release
# 530 "data/maps/SlateportCity/scripts.pory"
	end
# 531 "data/maps/SlateportCity/scripts.pory"

# 532 "data/maps/SlateportCity/scripts.pory"
@ Unclear if the text here was meant to be different, but its not
# 533 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ManiacSternInterview::
# 534 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GetNameRaterToHelpYou, MSGBOX_DEFAULT
# 535 "data/maps/SlateportCity/scripts.pory"
	release
# 536 "data/maps/SlateportCity/scripts.pory"
	end
# 537 "data/maps/SlateportCity/scripts.pory"

# 538 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Woman2::
# 539 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_CantChangeTradeMonName, MSGBOX_NPC
# 540 "data/maps/SlateportCity/scripts.pory"
	end
# 541 "data/maps/SlateportCity/scripts.pory"

# 542 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor1::
# 543 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SeaIsSoWet, MSGBOX_NPC
# 544 "data/maps/SlateportCity/scripts.pory"
	end
# 545 "data/maps/SlateportCity/scripts.pory"

# 546 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Sailor2::
# 547 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SinkOldBoats, MSGBOX_NPC
# 548 "data/maps/SlateportCity/scripts.pory"
	end
# 549 "data/maps/SlateportCity/scripts.pory"

# 550 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PokefanF::
# 551 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BuyTooMuch, MSGBOX_NPC
# 552 "data/maps/SlateportCity/scripts.pory"
	end
# 553 "data/maps/SlateportCity/scripts.pory"

# 554 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man2::
# 555 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BattleTentBuiltRecently, MSGBOX_NPC
# 556 "data/maps/SlateportCity/scripts.pory"
	end
# 557 "data/maps/SlateportCity/scripts.pory"

# 558 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt1::
# 559 "data/maps/SlateportCity/scripts.pory"
	lock
# 560 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 561 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_QuitPushing, MSGBOX_DEFAULT
# 562 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 563 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_1, Common_Movement_FaceOriginalDirection
# 564 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 565 "data/maps/SlateportCity/scripts.pory"
	release
# 566 "data/maps/SlateportCity/scripts.pory"
	end
# 567 "data/maps/SlateportCity/scripts.pory"

# 568 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt2::
# 569 "data/maps/SlateportCity/scripts.pory"
	lock
# 570 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 571 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaHasPolicy, MSGBOX_DEFAULT
# 572 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 573 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_2, Common_Movement_FaceOriginalDirection
# 574 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 575 "data/maps/SlateportCity/scripts.pory"
	release
# 576 "data/maps/SlateportCity/scripts.pory"
	end
# 577 "data/maps/SlateportCity/scripts.pory"

# 578 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt3::
# 579 "data/maps/SlateportCity/scripts.pory"
	lock
# 580 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 581 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BossIsBrilliant, MSGBOX_DEFAULT
# 582 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 583 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_3, Common_Movement_FaceOriginalDirection
# 584 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 585 "data/maps/SlateportCity/scripts.pory"
	release
# 586 "data/maps/SlateportCity/scripts.pory"
	end
# 587 "data/maps/SlateportCity/scripts.pory"

# 588 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt4::
# 589 "data/maps/SlateportCity/scripts.pory"
	lock
# 590 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 591 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatsNewSchemeIWonder, MSGBOX_DEFAULT
# 592 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 593 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_4, Common_Movement_FaceOriginalDirection
# 594 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 595 "data/maps/SlateportCity/scripts.pory"
	release
# 596 "data/maps/SlateportCity/scripts.pory"
	end
# 597 "data/maps/SlateportCity/scripts.pory"

# 598 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt5::
# 599 "data/maps/SlateportCity/scripts.pory"
	lock
# 600 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 601 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldTakeItAll, MSGBOX_DEFAULT
# 602 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 603 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_5, Common_Movement_FaceOriginalDirection
# 604 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 605 "data/maps/SlateportCity/scripts.pory"
	release
# 606 "data/maps/SlateportCity/scripts.pory"
	end
# 607 "data/maps/SlateportCity/scripts.pory"

# 608 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt6::
# 609 "data/maps/SlateportCity/scripts.pory"
	lock
# 610 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 611 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontButtIn, MSGBOX_DEFAULT
# 612 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 613 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_6, Common_Movement_FaceOriginalDirection
# 614 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 615 "data/maps/SlateportCity/scripts.pory"
	release
# 616 "data/maps/SlateportCity/scripts.pory"
	end
# 617 "data/maps/SlateportCity/scripts.pory"

# 618 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt7::
# 619 "data/maps/SlateportCity/scripts.pory"
	lock
# 620 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 621 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_RemindsMeOfLongLineForGames, MSGBOX_DEFAULT
# 622 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 623 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_7, Common_Movement_FaceOriginalDirection
# 624 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 625 "data/maps/SlateportCity/scripts.pory"
	release
# 626 "data/maps/SlateportCity/scripts.pory"
	end
# 627 "data/maps/SlateportCity/scripts.pory"

# 628 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt8::
# 629 "data/maps/SlateportCity/scripts.pory"
	lock
# 630 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 631 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhyAreWeLiningUp, MSGBOX_DEFAULT
# 632 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 633 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_8, Common_Movement_FaceOriginalDirection
# 634 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 635 "data/maps/SlateportCity/scripts.pory"
	release
# 636 "data/maps/SlateportCity/scripts.pory"
	end
# 637 "data/maps/SlateportCity/scripts.pory"

# 638 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt9::
# 639 "data/maps/SlateportCity/scripts.pory"
	lock
# 640 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 641 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 642 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_ExclamationMark
# 643 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 644 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_Delay48
# 645 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 646 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhatDoYouWant, MSGBOX_DEFAULT
# 647 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 648 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
# 649 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 650 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 651 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 652 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FacePlayer
# 653 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 654 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_IllReadSignForYou, MSGBOX_DEFAULT
# 655 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 656 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
# 657 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 658 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 659 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 660 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SaysSomethingLikeSeaIsEndless, MSGBOX_DEFAULT
# 661 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 662 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FacePlayer
# 663 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 664 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, SlateportCity_Movement_DelayAquaGrunt
# 665 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 666 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_9, Common_Movement_FaceOriginalDirection
# 667 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 668 "data/maps/SlateportCity/scripts.pory"
	release
# 669 "data/maps/SlateportCity/scripts.pory"
	end
# 670 "data/maps/SlateportCity/scripts.pory"

# 671 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_DelayAquaGrunt:
# 672 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 673 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 674 "data/maps/SlateportCity/scripts.pory"
	step_end
# 675 "data/maps/SlateportCity/scripts.pory"

# 676 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt10::
# 677 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ShouldveBroughtMyGameBoy, MSGBOX_SIGN
# 678 "data/maps/SlateportCity/scripts.pory"
	end
# 679 "data/maps/SlateportCity/scripts.pory"

# 680 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AquaGrunt11::
# 681 "data/maps/SlateportCity/scripts.pory"
	lock
# 682 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 683 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_HotSpringsAfterOperation, MSGBOX_DEFAULT
# 684 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 685 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GRUNT_11, Common_Movement_FaceOriginalDirection
# 686 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 687 "data/maps/SlateportCity/scripts.pory"
	release
# 688 "data/maps/SlateportCity/scripts.pory"
	end
# 689 "data/maps/SlateportCity/scripts.pory"

# 690 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DollClerk::
# 691 "data/maps/SlateportCity/scripts.pory"
	lock
# 692 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 693 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 694 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 695 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor_Dolls
# 696 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 697 "data/maps/SlateportCity/scripts.pory"
	release
# 698 "data/maps/SlateportCity/scripts.pory"
	end
# 699 "data/maps/SlateportCity/scripts.pory"

# 700 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 701 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor_Dolls:
# 702 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_AZURILL_DOLL
# 703 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_MARILL_DOLL
# 704 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_SKITTY_DOLL
# 705 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_NONE
# 706 "data/maps/SlateportCity/scripts.pory"
	release
# 707 "data/maps/SlateportCity/scripts.pory"
	end
# 708 "data/maps/SlateportCity/scripts.pory"

# 709 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ComeBackWithSecretPower::
# 710 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_ComeBackWithSecretPower, MSGBOX_DEFAULT
# 711 "data/maps/SlateportCity/scripts.pory"
	release
# 712 "data/maps/SlateportCity/scripts.pory"
	end
# 713 "data/maps/SlateportCity/scripts.pory"

# 714 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_DecorClerk::
# 715 "data/maps/SlateportCity/scripts.pory"
	lock
# 716 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 717 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 718 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 719 "data/maps/SlateportCity/scripts.pory"
	pokemartdecoration SlateportCity_PokemartDecor
# 720 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 721 "data/maps/SlateportCity/scripts.pory"
	release
# 722 "data/maps/SlateportCity/scripts.pory"
	end
# 723 "data/maps/SlateportCity/scripts.pory"

# 724 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 725 "data/maps/SlateportCity/scripts.pory"
SlateportCity_PokemartDecor:
# 726 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_RED_BRICK
# 727 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_BLUE_BRICK
# 728 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_YELLOW_BRICK
# 729 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_RED_BALLOON
# 730 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_BLUE_BALLOON
# 731 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_YELLOW_BALLOON
# 732 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_C_LOW_NOTE_MAT
# 733 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_D_NOTE_MAT
# 734 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_E_NOTE_MAT
# 735 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_F_NOTE_MAT
# 736 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_G_NOTE_MAT
# 737 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_A_NOTE_MAT
# 738 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_B_NOTE_MAT
# 739 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_C_HIGH_NOTE_MAT
# 740 "data/maps/SlateportCity/scripts.pory"
	.2byte DECOR_NONE
# 741 "data/maps/SlateportCity/scripts.pory"
	release
# 742 "data/maps/SlateportCity/scripts.pory"
	end
# 743 "data/maps/SlateportCity/scripts.pory"

# 744 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_AccurateMoveTMClerk::
# 745 "data/maps/SlateportCity/scripts.pory"
	lock
# 746 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 747 "data/maps/SlateportCity/scripts.pory"
	message gText_HowMayIServeYou
# 748 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 749 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_AccurateTMs
# 750 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 751 "data/maps/SlateportCity/scripts.pory"
	release
# 752 "data/maps/SlateportCity/scripts.pory"
	end
# 753 "data/maps/SlateportCity/scripts.pory"

# 754 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EvolutionItemClerk::
# 755 "data/maps/SlateportCity/scripts.pory"
	lock
# 756 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 757 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ISellEvolutionItems
# 758 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 759 "data/maps/SlateportCity/scripts.pory"
	pokemart SlateportCity_Pokemart_EvolutionItems
# 760 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 761 "data/maps/SlateportCity/scripts.pory"
	release
# 762 "data/maps/SlateportCity/scripts.pory"
	end
# 763 "data/maps/SlateportCity/scripts.pory"

# 764 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 765 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_AccurateTMs:
# 766 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_AERIAL_ACE
# 767 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_DISARMING_VOICE
# 768 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_FEINT_ATTACK
# 769 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_MAGICAL_LEAF
# 770 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TM_SHOCK_WAVE
# 771 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NONE
# 772 "data/maps/SlateportCity/scripts.pory"
	release
# 773 "data/maps/SlateportCity/scripts.pory"
	end
# 774 "data/maps/SlateportCity/scripts.pory"

# 775 "data/maps/SlateportCity/scripts.pory"
	.align 2
# 776 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Pokemart_EvolutionItems:
# 777 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_GALARICA_CUFF
# 778 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_GALARICA_WREATH
# 779 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_METAL_ALLOY
# 780 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_BLACK_AUGURITE
# 781 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_PEAT_BLOCK
# 782 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_TART_APPLE
# 783 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SWEET_APPLE
# 784 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_SYRUPY_APPLE
# 785 "data/maps/SlateportCity/scripts.pory"
	.2byte ITEM_NONE
# 786 "data/maps/SlateportCity/scripts.pory"
	release
# 787 "data/maps/SlateportCity/scripts.pory"
	end
# 788 "data/maps/SlateportCity/scripts.pory"

# 789 "data/maps/SlateportCity/scripts.pory"
@ Scene with Capt Sterns interview and Team Aqua announcing plans to steal Submarine
# 790 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CaptStern::
# 791 "data/maps/SlateportCity/scripts.pory"
	lockall
# 792 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternMoveAheadWithExploration, MSGBOX_DEFAULT
# 793 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_GabbyWonderfulThanksForInterview, MSGBOX_DEFAULT
# 794 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 795 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GABBY, Common_Movement_WalkInPlaceFasterRight
# 796 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 797 "data/maps/SlateportCity/scripts.pory"
	delay 10
# 798 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_TY, Common_Movement_WalkInPlaceFasterDown
# 799 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 800 "data/maps/SlateportCity/scripts.pory"
	delay 25
# 801 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, SlateportCity_Movement_SternWatchGabbyAndTyExit
# 802 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerFaceStern
# 803 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_GABBY, SlateportCity_Movement_GabbyExit
# 804 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_TY, SlateportCity_Movement_TyExit
# 805 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 806 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_GABBY
# 807 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_TY
# 808 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhewFirstInterview, MSGBOX_DEFAULT
# 809 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
# 810 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 811 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_OhPlayerWeMadeDiscovery, MSGBOX_DEFAULT
# 812 "data/maps/SlateportCity/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 813 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_AquaWillAssumeControlOfSubmarine, MSGBOX_DEFAULT
# 814 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_COOK, Common_Movement_WalkInPlaceFasterLeft
# 815 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_FAT_MAN, Common_Movement_WalkInPlaceFasterLeft
# 816 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_OLD_WOMAN, SlateportCity_Movement_OldWomanConcern
# 817 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_RICH_BOY, Common_Movement_QuestionMark
# 818 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_MAN_1, SlateportCity_Movement_ManConcern
# 819 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 820 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterDown
# 821 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 822 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_SternWhatWasAllThat, MSGBOX_DEFAULT
# 823 "data/maps/SlateportCity/scripts.pory"
	playse SE_PIN
# 824 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_ExclamationMark
# 825 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 826 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_Delay48
# 827 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 828 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, Common_Movement_WalkInPlaceFasterUp
# 829 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 830 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FromHarborTryingToTakeSub, MSGBOX_DEFAULT
# 831 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_PleaseComeWithMe, MSGBOX_DEFAULT
# 832 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 833 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_CAPT_STERN, SlateportCity_Movement_SternEnterHarbor
# 834 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerEnterHarbor
# 835 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 836 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_CAPT_STERN
# 837 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_CAPTAIN_STERN
# 838 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SUBMARINE_SHADOW
# 839 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT
# 840 "data/maps/SlateportCity/scripts.pory"
	clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_ARCHIE
# 841 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_CITY_STATE, 2
# 842 "data/maps/SlateportCity/scripts.pory"
	warp MAP_SLATEPORT_CITY_HARBOR, 11, 14
# 843 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 844 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 845 "data/maps/SlateportCity/scripts.pory"
	end
# 846 "data/maps/SlateportCity/scripts.pory"

# 847 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_OldWomanConcern:
# 848 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 849 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 850 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 851 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 852 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 853 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 854 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 855 "data/maps/SlateportCity/scripts.pory"
	step_end
# 856 "data/maps/SlateportCity/scripts.pory"

# 857 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ManConcern:
# 858 "data/maps/SlateportCity/scripts.pory"
	emote_question_mark
# 859 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 860 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 861 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_down
# 862 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 863 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 864 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_left
# 865 "data/maps/SlateportCity/scripts.pory"
	step_end
# 866 "data/maps/SlateportCity/scripts.pory"

# 867 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_GabbyExit:
# 868 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 869 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 870 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 871 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 872 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 873 "data/maps/SlateportCity/scripts.pory"
	walk_left
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
	step_end
# 881 "data/maps/SlateportCity/scripts.pory"

# 882 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_TyExit:
# 883 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 884 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 885 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 886 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 887 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 888 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 889 "data/maps/SlateportCity/scripts.pory"
	walk_left
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
	step_end
# 897 "data/maps/SlateportCity/scripts.pory"

# 898 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_Unused:
# 899 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 900 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_up
# 901 "data/maps/SlateportCity/scripts.pory"
	step_end
# 902 "data/maps/SlateportCity/scripts.pory"

# 903 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternEnterHarbor:
# 904 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 905 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 906 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 907 "data/maps/SlateportCity/scripts.pory"
	set_invisible
# 908 "data/maps/SlateportCity/scripts.pory"
	step_end
# 909 "data/maps/SlateportCity/scripts.pory"

# 910 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_SternWatchGabbyAndTyExit:
# 911 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 912 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 913 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 914 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 915 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 916 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 917 "data/maps/SlateportCity/scripts.pory"
	walk_left
# 918 "data/maps/SlateportCity/scripts.pory"
	step_end
# 919 "data/maps/SlateportCity/scripts.pory"

# 920 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerEnterHarbor:
# 921 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 922 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 923 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 924 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 925 "data/maps/SlateportCity/scripts.pory"
	walk_up
# 926 "data/maps/SlateportCity/scripts.pory"
	step_end
# 927 "data/maps/SlateportCity/scripts.pory"

# 928 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerFaceStern:
# 929 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 930 "data/maps/SlateportCity/scripts.pory"
	delay_16
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
	walk_in_place_faster_down
# 937 "data/maps/SlateportCity/scripts.pory"
	step_end
# 938 "data/maps/SlateportCity/scripts.pory"

# 939 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Ty::
# 940 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BigSmileForCamera, MSGBOX_SIGN
# 941 "data/maps/SlateportCity/scripts.pory"
	end
# 942 "data/maps/SlateportCity/scripts.pory"

# 943 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Gabby::
# 944 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_MostInvaluableExperience, MSGBOX_SIGN
# 945 "data/maps/SlateportCity/scripts.pory"
	end
# 946 "data/maps/SlateportCity/scripts.pory"

# 947 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Man3::
# 948 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WonderIfLighthouseStartlesPokemon, MSGBOX_NPC
# 949 "data/maps/SlateportCity/scripts.pory"
	end
# 950 "data/maps/SlateportCity/scripts.pory"

# 951 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryPowderClerk::
# 952 "data/maps/SlateportCity/scripts.pory"
	lock
# 953 "data/maps/SlateportCity/scripts.pory"
	faceplayer
# 954 "data/maps/SlateportCity/scripts.pory"
	goto_if_set FLAG_RECEIVED_POWDER_JAR, SlateportCity_EventScript_ReceivedPowderJar
# 955 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerries, MSGBOX_DEFAULT
# 956 "data/maps/SlateportCity/scripts.pory"
	giveitem ITEM_POWDER_JAR
# 957 "data/maps/SlateportCity/scripts.pory"
	setflag FLAG_RECEIVED_POWDER_JAR
# 958 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 959 "data/maps/SlateportCity/scripts.pory"
	release
# 960 "data/maps/SlateportCity/scripts.pory"
	end
# 961 "data/maps/SlateportCity/scripts.pory"

# 962 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ReceivedPowderJar::
# 963 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, 1
# 964 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 965 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_ExplainBerryPowder
# 966 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_BroughtMeSomeBerryPowder, MSGBOX_DEFAULT
# 967 "data/maps/SlateportCity/scripts.pory"
	special DisplayBerryPowderVendorMenu
# 968 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 969 "data/maps/SlateportCity/scripts.pory"
	end
# 970 "data/maps/SlateportCity/scripts.pory"

# 971 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ExplainBerryPowder::
# 972 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExplainBerryPowder, MSGBOX_DEFAULT
# 973 "data/maps/SlateportCity/scripts.pory"
	release
# 974 "data/maps/SlateportCity/scripts.pory"
	end
# 975 "data/maps/SlateportCity/scripts.pory"

# 976 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ChooseBerryPowderItem::
# 977 "data/maps/SlateportCity/scripts.pory"
	message SlateportCity_Text_ExchangeWhatWithIt
# 978 "data/maps/SlateportCity/scripts.pory"
	waitmessage
# 979 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8004, SCROLL_MULTI_BERRY_POWDER_VENDOR
# 980 "data/maps/SlateportCity/scripts.pory"
	special ShowScrollableMultichoice
# 981 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 982 "data/maps/SlateportCity/scripts.pory"
	switch VAR_RESULT
# 983 "data/maps/SlateportCity/scripts.pory"
	case 0, SlateportCity_EventScript_EnergyPowder
# 984 "data/maps/SlateportCity/scripts.pory"
	case 1, SlateportCity_EventScript_EnergyRoot
# 985 "data/maps/SlateportCity/scripts.pory"
	case 2, SlateportCity_EventScript_HealPowder
# 986 "data/maps/SlateportCity/scripts.pory"
	case 3, SlateportCity_EventScript_RevivalHerb
# 987 "data/maps/SlateportCity/scripts.pory"
	case 4, SlateportCity_EventScript_Protein
# 988 "data/maps/SlateportCity/scripts.pory"
	case 5, SlateportCity_EventScript_Iron
# 989 "data/maps/SlateportCity/scripts.pory"
	case 6, SlateportCity_EventScript_Carbos
# 990 "data/maps/SlateportCity/scripts.pory"
	case 7, SlateportCity_EventScript_Calcium
# 991 "data/maps/SlateportCity/scripts.pory"
	case 8, SlateportCity_EventScript_Zinc
# 992 "data/maps/SlateportCity/scripts.pory"
	case 9, SlateportCity_EventScript_HPUp
# 993 "data/maps/SlateportCity/scripts.pory"
	case 10, SlateportCity_EventScript_PPUp
# 994 "data/maps/SlateportCity/scripts.pory"
	case 11, SlateportCity_EventScript_CancelPowderItemSelect
# 995 "data/maps/SlateportCity/scripts.pory"
	case MULTI_B_PRESSED, SlateportCity_EventScript_CancelPowderItemSelect
# 996 "data/maps/SlateportCity/scripts.pory"
	end
# 997 "data/maps/SlateportCity/scripts.pory"

# 998 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyPowder::
# 999 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_POWDER
# 1000 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_POWDER
# 1001 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 1002 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1003 "data/maps/SlateportCity/scripts.pory"
	end
# 1004 "data/maps/SlateportCity/scripts.pory"

# 1005 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_EnergyRoot::
# 1006 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ENERGY_ROOT
# 1007 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ENERGY_ROOT
# 1008 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 80
# 1009 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1010 "data/maps/SlateportCity/scripts.pory"
	end
# 1011 "data/maps/SlateportCity/scripts.pory"

# 1012 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HealPowder::
# 1013 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HEAL_POWDER
# 1014 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HEAL_POWDER
# 1015 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 50
# 1016 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1017 "data/maps/SlateportCity/scripts.pory"
	end
# 1018 "data/maps/SlateportCity/scripts.pory"

# 1019 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_RevivalHerb::
# 1020 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_REVIVAL_HERB
# 1021 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_REVIVAL_HERB
# 1022 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 300
# 1023 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1024 "data/maps/SlateportCity/scripts.pory"
	end
# 1025 "data/maps/SlateportCity/scripts.pory"

# 1026 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Protein::
# 1027 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PROTEIN
# 1028 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PROTEIN
# 1029 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 1030 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1031 "data/maps/SlateportCity/scripts.pory"
	end
# 1032 "data/maps/SlateportCity/scripts.pory"

# 1033 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Iron::
# 1034 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_IRON
# 1035 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_IRON
# 1036 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 1037 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1038 "data/maps/SlateportCity/scripts.pory"
	end
# 1039 "data/maps/SlateportCity/scripts.pory"

# 1040 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Carbos::
# 1041 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CARBOS
# 1042 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CARBOS
# 1043 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 1044 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1045 "data/maps/SlateportCity/scripts.pory"
	end
# 1046 "data/maps/SlateportCity/scripts.pory"

# 1047 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Calcium::
# 1048 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_CALCIUM
# 1049 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_CALCIUM
# 1050 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 1051 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1052 "data/maps/SlateportCity/scripts.pory"
	end
# 1053 "data/maps/SlateportCity/scripts.pory"

# 1054 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_Zinc::
# 1055 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_ZINC
# 1056 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_ZINC
# 1057 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 1058 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1059 "data/maps/SlateportCity/scripts.pory"
	end
# 1060 "data/maps/SlateportCity/scripts.pory"

# 1061 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_HPUp::
# 1062 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_HP_UP
# 1063 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_HP_UP
# 1064 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 1000
# 1065 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1066 "data/maps/SlateportCity/scripts.pory"
	end
# 1067 "data/maps/SlateportCity/scripts.pory"

# 1068 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_PPUp::
# 1069 "data/maps/SlateportCity/scripts.pory"
	bufferitemname STR_VAR_1, ITEM_PP_UP
# 1070 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8008, ITEM_PP_UP
# 1071 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_0x8009, 3000
# 1072 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_TryBuyBerryPowderItem
# 1073 "data/maps/SlateportCity/scripts.pory"
	end
# 1074 "data/maps/SlateportCity/scripts.pory"

# 1075 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_CancelPowderItemSelect::
# 1076 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ComeBackToTradeBerryPowder, MSGBOX_DEFAULT
# 1077 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 1078 "data/maps/SlateportCity/scripts.pory"
	release
# 1079 "data/maps/SlateportCity/scripts.pory"
	end
# 1080 "data/maps/SlateportCity/scripts.pory"

# 1081 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_TryBuyBerryPowderItem::
# 1082 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_ExchangeBerryPowderForItem, MSGBOX_YESNO
# 1083 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, NO, SlateportCity_EventScript_ChooseBerryPowderItem
# 1084 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 1085 "data/maps/SlateportCity/scripts.pory"
	specialvar VAR_RESULT, HasEnoughBerryPowder
# 1086 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NotEnoughBerryPowder
# 1087 "data/maps/SlateportCity/scripts.pory"
	giveitem VAR_0x8008
# 1088 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, SlateportCity_EventScript_NoRoomForBerryPowderItem
# 1089 "data/maps/SlateportCity/scripts.pory"
	copyvar VAR_0x8004, VAR_0x8009
# 1090 "data/maps/SlateportCity/scripts.pory"
	special TakeBerryPowder
# 1091 "data/maps/SlateportCity/scripts.pory"
	special PrintPlayerBerryPowderAmount
# 1092 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_FineBerryPowderTradeSomethingElse, MSGBOX_YESNO
# 1093 "data/maps/SlateportCity/scripts.pory"
	goto_if_eq VAR_RESULT, YES, SlateportCity_EventScript_ChooseBerryPowderItem
# 1094 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_WhenYouGetMoreBringItToMe, MSGBOX_DEFAULT
# 1095 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 1096 "data/maps/SlateportCity/scripts.pory"
	release
# 1097 "data/maps/SlateportCity/scripts.pory"
	end
# 1098 "data/maps/SlateportCity/scripts.pory"

# 1099 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NoRoomForBerryPowderItem::
# 1100 "data/maps/SlateportCity/scripts.pory"
	msgbox gText_TheBagIsFull, MSGBOX_DEFAULT
# 1101 "data/maps/SlateportCity/scripts.pory"
	special RemoveBerryPowderVendorMenu
# 1102 "data/maps/SlateportCity/scripts.pory"
	release
# 1103 "data/maps/SlateportCity/scripts.pory"
	end
# 1104 "data/maps/SlateportCity/scripts.pory"

# 1105 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_NotEnoughBerryPowder::
# 1106 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_DontHaveEnoughBerryPowder, MSGBOX_DEFAULT
# 1107 "data/maps/SlateportCity/scripts.pory"
	goto SlateportCity_EventScript_ChooseBerryPowderItem
# 1108 "data/maps/SlateportCity/scripts.pory"
	end
# 1109 "data/maps/SlateportCity/scripts.pory"

# 1110 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_ScottBattleTentScene::
# 1111 "data/maps/SlateportCity/scripts.pory"
	lockall
# 1112 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 1113 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1114 "data/maps/SlateportCity/scripts.pory"
	opendoor 10, 12
# 1115 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 1116 "data/maps/SlateportCity/scripts.pory"
	addobject LOCALID_SCOTT
# 1117 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PushPlayerDown
# 1118 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExitBattleTent
# 1119 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1120 "data/maps/SlateportCity/scripts.pory"
	closedoor 10, 12
# 1121 "data/maps/SlateportCity/scripts.pory"
	waitdooranim
# 1122 "data/maps/SlateportCity/scripts.pory"
	msgbox SlateportCity_Text_TakingBattleTentChallenge, MSGBOX_DEFAULT
# 1123 "data/maps/SlateportCity/scripts.pory"
	closemessage
# 1124 "data/maps/SlateportCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, SlateportCity_Movement_PlayerWatchScottExit
# 1125 "data/maps/SlateportCity/scripts.pory"
	applymovement LOCALID_SCOTT, SlateportCity_Movement_ScottExitAfterBattleTent
# 1126 "data/maps/SlateportCity/scripts.pory"
	waitmovement 0
# 1127 "data/maps/SlateportCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 1128 "data/maps/SlateportCity/scripts.pory"
	addvar VAR_SCOTT_STATE, 1
# 1129 "data/maps/SlateportCity/scripts.pory"
	setvar VAR_SLATEPORT_OUTSIDE_MUSEUM_STATE, 3
# 1130 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 1131 "data/maps/SlateportCity/scripts.pory"
	end
# 1132 "data/maps/SlateportCity/scripts.pory"

# 1133 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PushPlayerDown:
# 1134 "data/maps/SlateportCity/scripts.pory"
	lock_facing_direction
# 1135 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 1136 "data/maps/SlateportCity/scripts.pory"
	unlock_facing_direction
# 1137 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1138 "data/maps/SlateportCity/scripts.pory"

# 1139 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_PlayerWatchScottExit:
# 1140 "data/maps/SlateportCity/scripts.pory"
	delay_16
# 1141 "data/maps/SlateportCity/scripts.pory"
	walk_in_place_faster_right
# 1142 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1143 "data/maps/SlateportCity/scripts.pory"

# 1144 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitBattleTent:
# 1145 "data/maps/SlateportCity/scripts.pory"
	delay_8
# 1146 "data/maps/SlateportCity/scripts.pory"
	walk_down
# 1147 "data/maps/SlateportCity/scripts.pory"
	step_end
# 1148 "data/maps/SlateportCity/scripts.pory"

# 1149 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Movement_ScottExitAfterBattleTent:
# 1150 "data/maps/SlateportCity/scripts.pory"
	walk_right
# 1151 "data/maps/SlateportCity/scripts.pory"
	walk_right
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
	step_end
# 1159 "data/maps/SlateportCity/scripts.pory"

# 1160 "data/maps/SlateportCity/scripts.pory"
SlateportCity_EventScript_BerryCrushRankingsSign::
# 1161 "data/maps/SlateportCity/scripts.pory"
	lockall
# 1162 "data/maps/SlateportCity/scripts.pory"
	special ShowBerryCrushRankings
# 1163 "data/maps/SlateportCity/scripts.pory"
	waitstate
# 1164 "data/maps/SlateportCity/scripts.pory"
	releaseall
# 1165 "data/maps/SlateportCity/scripts.pory"
	end
# 1166 "data/maps/SlateportCity/scripts.pory"

# 1167 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ISellEvolutionItems:
# 1168 "data/maps/SlateportCity/scripts.pory"
	.string "Welcome!\p"
# 1169 "data/maps/SlateportCity/scripts.pory"
	.string "I sell one-of-a-kind evolution items!$"
# 1170 "data/maps/SlateportCity/scripts.pory"

# 1171 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EnergyGuruSellWhatYouNeed:
# 1172 "data/maps/SlateportCity/scripts.pory"
	.string "I'm the ENERGY GURU! I'll go for it and\n"
# 1173 "data/maps/SlateportCity/scripts.pory"
	.string "sell you what you need!$"
# 1174 "data/maps/SlateportCity/scripts.pory"

# 1175 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OhYourPokemon:
# 1176 "data/maps/SlateportCity/scripts.pory"
	.string "Oh?\n"
# 1177 "data/maps/SlateportCity/scripts.pory"
	.string "Your {STR_VAR_1}…$"
# 1178 "data/maps/SlateportCity/scripts.pory"

# 1179 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseGiveItThisEffortRibbon:
# 1180 "data/maps/SlateportCity/scripts.pory"
	.string "Went for it stupendously!\p"
# 1181 "data/maps/SlateportCity/scripts.pory"
	.string "As its reward, please give it this\n"
# 1182 "data/maps/SlateportCity/scripts.pory"
	.string "EFFORT RIBBON.$"
# 1183 "data/maps/SlateportCity/scripts.pory"

# 1184 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ReceivedEffortRibbon:
# 1185 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} received the EFFORT RIBBON.$"
# 1186 "data/maps/SlateportCity/scripts.pory"

# 1187 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PutEffortRibbonOnMon:
# 1188 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER} put the EFFORT RIBBON\n"
# 1189 "data/maps/SlateportCity/scripts.pory"
	.string "on {STR_VAR_1}.$"
# 1190 "data/maps/SlateportCity/scripts.pory"

# 1191 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoForItLittleHarder:
# 1192 "data/maps/SlateportCity/scripts.pory"
	.string "You have to go for it a little harder.\p"
# 1193 "data/maps/SlateportCity/scripts.pory"
	.string "If you do, I'll give your Pokémon\n"
# 1194 "data/maps/SlateportCity/scripts.pory"
	.string "something nice.$"
# 1195 "data/maps/SlateportCity/scripts.pory"

# 1196 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EffortRibbonLooksGoodOnIt:
# 1197 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! Your {STR_VAR_1}, that EFFORT\n"
# 1198 "data/maps/SlateportCity/scripts.pory"
	.string "RIBBON looks good on it!$"
# 1199 "data/maps/SlateportCity/scripts.pory"

# 1200 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WonderIfLighthouseStartlesPokemon:
# 1201 "data/maps/SlateportCity/scripts.pory"
	.string "The light of the lighthouse reaches\n"
# 1202 "data/maps/SlateportCity/scripts.pory"
	.string "dozens of miles away.\p"
# 1203 "data/maps/SlateportCity/scripts.pory"
	.string "I wonder if it doesn't startle Pokémon\n"
# 1204 "data/maps/SlateportCity/scripts.pory"
	.string "in the sea.$"
# 1205 "data/maps/SlateportCity/scripts.pory"

# 1206 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SeaweedFullOfLife:
# 1207 "data/maps/SlateportCity/scripts.pory"
	.string "Ooh, look at this!\p"
# 1208 "data/maps/SlateportCity/scripts.pory"
	.string "The seaweed you can get around these\n"
# 1209 "data/maps/SlateportCity/scripts.pory"
	.string "parts is fresh and full of life.\p"
# 1210 "data/maps/SlateportCity/scripts.pory"
	.string "Why, it looks like it can even rear up\n"
# 1211 "data/maps/SlateportCity/scripts.pory"
	.string "and attack!$"
# 1212 "data/maps/SlateportCity/scripts.pory"

# 1213 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HowTownIsBornAndGrows:
# 1214 "data/maps/SlateportCity/scripts.pory"
	.string "Where the water is clean, the fruits\n"
# 1215 "data/maps/SlateportCity/scripts.pory"
	.string "of bountiful harvest gather.\p"
# 1216 "data/maps/SlateportCity/scripts.pory"
	.string "And where people gather, a market\n"
# 1217 "data/maps/SlateportCity/scripts.pory"
	.string "soon starts.\p"
# 1218 "data/maps/SlateportCity/scripts.pory"
	.string "That is how a town is born and grows.$"
# 1219 "data/maps/SlateportCity/scripts.pory"

# 1220 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SlateportWonderfulPlace:
# 1221 "data/maps/SlateportCity/scripts.pory"
	.string "Shopping where you can breathe the\n"
# 1222 "data/maps/SlateportCity/scripts.pory"
	.string "scent of the ocean…\p"
# 1223 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT is such a wonderful place!$"
# 1224 "data/maps/SlateportCity/scripts.pory"

# 1225 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyBricksSoDecorWontGetDirty:
# 1226 "data/maps/SlateportCity/scripts.pory"
	.string "If you put DOLLS or CUSHIONS on\n"
# 1227 "data/maps/SlateportCity/scripts.pory"
	.string "the floor, they'll get dirty.\p"
# 1228 "data/maps/SlateportCity/scripts.pory"
	.string "I'm going to buy some BRICKS so my\n"
# 1229 "data/maps/SlateportCity/scripts.pory"
	.string "DOLLS and CUSHIONS won't get dirty\l"
# 1230 "data/maps/SlateportCity/scripts.pory"
	.string "when I leave them out.$"
# 1231 "data/maps/SlateportCity/scripts.pory"

# 1232 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GoingToCompeteInBattleTent:
# 1233 "data/maps/SlateportCity/scripts.pory"
	.string "Wroooar! I'm going to compete in\n"
# 1234 "data/maps/SlateportCity/scripts.pory"
	.string "the BATTLE TENT, too!\p"
# 1235 "data/maps/SlateportCity/scripts.pory"
	.string "But before that, I need to catch\n"
# 1236 "data/maps/SlateportCity/scripts.pory"
	.string "some Pokémon!$"
# 1237 "data/maps/SlateportCity/scripts.pory"

# 1238 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BushedHikingFromMauville:
# 1239 "data/maps/SlateportCity/scripts.pory"
	.string "Whew… I'm just bushed…\p"
# 1240 "data/maps/SlateportCity/scripts.pory"
	.string "I hiked over from MAUVILLE CITY.\n"
# 1241 "data/maps/SlateportCity/scripts.pory"
	.string "But, boy, this city's huge.\p"
# 1242 "data/maps/SlateportCity/scripts.pory"
	.string "If I'd known this, I would've ridden\n"
# 1243 "data/maps/SlateportCity/scripts.pory"
	.string "my BIKE here.$"
# 1244 "data/maps/SlateportCity/scripts.pory"

# 1245 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_EveryoneCallsHimCaptStern:
# 1246 "data/maps/SlateportCity/scripts.pory"
	.string "STERN, the fellow who built the\n"
# 1247 "data/maps/SlateportCity/scripts.pory"
	.string "MUSEUM, also happens to be the leader\l"
# 1248 "data/maps/SlateportCity/scripts.pory"
	.string "of an undersea exploration team.\p"
# 1249 "data/maps/SlateportCity/scripts.pory"
	.string "So, everyone calls him CAPT. STERN.$"
# 1250 "data/maps/SlateportCity/scripts.pory"

# 1251 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsLongLineOverThere:
# 1252 "data/maps/SlateportCity/scripts.pory"
	.string "What is that over there?\n"
# 1253 "data/maps/SlateportCity/scripts.pory"
	.string "That long line…$"
# 1254 "data/maps/SlateportCity/scripts.pory"

# 1255 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_VisitedMuseumOften:
# 1256 "data/maps/SlateportCity/scripts.pory"
	.string "When I was a child, I visited\n"
# 1257 "data/maps/SlateportCity/scripts.pory"
	.string "the MUSEUM often.\p"
# 1258 "data/maps/SlateportCity/scripts.pory"
	.string "I used to dream about the mysteries of\n"
# 1259 "data/maps/SlateportCity/scripts.pory"
	.string "the sea after seeing the exhibits.$"
# 1260 "data/maps/SlateportCity/scripts.pory"

# 1261 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_QuitPushing:
# 1262 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, there! Quit pushing!\n"
# 1263 "data/maps/SlateportCity/scripts.pory"
	.string "This is the line, can't you see?$"
# 1264 "data/maps/SlateportCity/scripts.pory"

# 1265 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaHasPolicy:
# 1266 "data/maps/SlateportCity/scripts.pory"
	.string "TEAM AQUA has a policy of\n"
# 1267 "data/maps/SlateportCity/scripts.pory"
	.string "assembling and dispersing at\l"
# 1268 "data/maps/SlateportCity/scripts.pory"
	.string "the operation site.$"
# 1269 "data/maps/SlateportCity/scripts.pory"

# 1270 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BossIsBrilliant:
# 1271 "data/maps/SlateportCity/scripts.pory"
	.string "Our BOSS is brilliant.\p"
# 1272 "data/maps/SlateportCity/scripts.pory"
	.string "What would he want to do with\n"
# 1273 "data/maps/SlateportCity/scripts.pory"
	.string "a MUSEUM now?$"
# 1274 "data/maps/SlateportCity/scripts.pory"

# 1275 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatsNewSchemeIWonder:
# 1276 "data/maps/SlateportCity/scripts.pory"
	.string "What's the new scheme, I wonder?\p"
# 1277 "data/maps/SlateportCity/scripts.pory"
	.string "Our BOSS is scary when he's mad, so\n"
# 1278 "data/maps/SlateportCity/scripts.pory"
	.string "I'd better not screw things up…$"
# 1279 "data/maps/SlateportCity/scripts.pory"

# 1280 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldTakeItAll:
# 1281 "data/maps/SlateportCity/scripts.pory"
	.string "If there's something we need in\n"
# 1282 "data/maps/SlateportCity/scripts.pory"
	.string "the MUSEUM, we should take it all!$"
# 1283 "data/maps/SlateportCity/scripts.pory"

# 1284 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontButtIn:
# 1285 "data/maps/SlateportCity/scripts.pory"
	.string "Hey, you there!\n"
# 1286 "data/maps/SlateportCity/scripts.pory"
	.string "Don't butt in!$"
# 1287 "data/maps/SlateportCity/scripts.pory"

# 1288 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RemindsMeOfLongLineForGames:
# 1289 "data/maps/SlateportCity/scripts.pory"
	.string "A long line, huh?\p"
# 1290 "data/maps/SlateportCity/scripts.pory"
	.string "It reminds me of the times I lined up to\n"
# 1291 "data/maps/SlateportCity/scripts.pory"
	.string "buy smash-hit games…$"
# 1292 "data/maps/SlateportCity/scripts.pory"

# 1293 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhyAreWeLiningUp:
# 1294 "data/maps/SlateportCity/scripts.pory"
	.string "Why are we even lining up and paying?\n"
# 1295 "data/maps/SlateportCity/scripts.pory"
	.string "We should just march in!$"
# 1296 "data/maps/SlateportCity/scripts.pory"

# 1297 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhatDoYouWant:
# 1298 "data/maps/SlateportCity/scripts.pory"
	.string "What?\n"
# 1299 "data/maps/SlateportCity/scripts.pory"
	.string "What do you want?$"
# 1300 "data/maps/SlateportCity/scripts.pory"

# 1301 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_IllReadSignForYou:
# 1302 "data/maps/SlateportCity/scripts.pory"
	.string "You want to read this sign?\n"
# 1303 "data/maps/SlateportCity/scripts.pory"
	.string "I'll read it for you!$"
# 1304 "data/maps/SlateportCity/scripts.pory"

# 1305 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SaysSomethingLikeSeaIsEndless:
# 1306 "data/maps/SlateportCity/scripts.pory"
	.string "Let's see…\p"
# 1307 "data/maps/SlateportCity/scripts.pory"
	.string "Um… I think it says something like\n"
# 1308 "data/maps/SlateportCity/scripts.pory"
	.string "“the life in the sea is endless.”\p"
# 1309 "data/maps/SlateportCity/scripts.pory"
	.string "Yup, I'm pretty sure that's what\n"
# 1310 "data/maps/SlateportCity/scripts.pory"
	.string "it says.$"
# 1311 "data/maps/SlateportCity/scripts.pory"

# 1312 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ShouldveBroughtMyGameBoy:
# 1313 "data/maps/SlateportCity/scripts.pory"
	.string "Grumble…\p"
# 1314 "data/maps/SlateportCity/scripts.pory"
	.string "I should've brought my Game Boy\n"
# 1315 "data/maps/SlateportCity/scripts.pory"
	.string "Advance so I wouldn't get bored in line…\p"
# 1316 "data/maps/SlateportCity/scripts.pory"
	.string "Grumble…$"
# 1317 "data/maps/SlateportCity/scripts.pory"

# 1318 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HotSpringsAfterOperation:
# 1319 "data/maps/SlateportCity/scripts.pory"
	.string "When this operation's over, I'll take\n"
# 1320 "data/maps/SlateportCity/scripts.pory"
	.string "you to a hot spring spa!\p"
# 1321 "data/maps/SlateportCity/scripts.pory"
	.string "That's what our leader said.\n"
# 1322 "data/maps/SlateportCity/scripts.pory"
	.string "I can't wait!$"
# 1323 "data/maps/SlateportCity/scripts.pory"

# 1324 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SeaIsSoWet:
# 1325 "data/maps/SlateportCity/scripts.pory"
	.string "The sea is just so vast…\p"
# 1326 "data/maps/SlateportCity/scripts.pory"
	.string "Could the sea have been made by\n"
# 1327 "data/maps/SlateportCity/scripts.pory"
	.string "the tears shed by Pokémon?$"
# 1328 "data/maps/SlateportCity/scripts.pory"

# 1329 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SinkOldBoats:
# 1330 "data/maps/SlateportCity/scripts.pory"
	.string "Do you know what they do with old\n"
# 1331 "data/maps/SlateportCity/scripts.pory"
	.string "ships that become too creaky to sail?\p"
# 1332 "data/maps/SlateportCity/scripts.pory"
	.string "They sink them in the sea so they\n"
# 1333 "data/maps/SlateportCity/scripts.pory"
	.string "become habitats for Pokémon.$"
# 1334 "data/maps/SlateportCity/scripts.pory"

# 1335 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BuyTooMuch:
# 1336 "data/maps/SlateportCity/scripts.pory"
	.string "Whenever I visit here, I get carried\n"
# 1337 "data/maps/SlateportCity/scripts.pory"
	.string "away and buy too much.$"
# 1338 "data/maps/SlateportCity/scripts.pory"

# 1339 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GetNameRaterToHelpYou:
# 1340 "data/maps/SlateportCity/scripts.pory"
	.string "If you want to change your Pokémon's\n"
# 1341 "data/maps/SlateportCity/scripts.pory"
	.string "nickname, you'll have to get the NAME\l"
# 1342 "data/maps/SlateportCity/scripts.pory"
	.string "RATER to help you.$"
# 1343 "data/maps/SlateportCity/scripts.pory"

# 1344 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CantChangeTradeMonName:
# 1345 "data/maps/SlateportCity/scripts.pory"
	.string "Any Pokémon you get in a trade,\n"
# 1346 "data/maps/SlateportCity/scripts.pory"
	.string "you can't change its nickname.\p"
# 1347 "data/maps/SlateportCity/scripts.pory"
	.string "The original TRAINER's love for that\n"
# 1348 "data/maps/SlateportCity/scripts.pory"
	.string "Pokémon is in the nickname.$"
# 1349 "data/maps/SlateportCity/scripts.pory"

# 1350 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentBuiltRecently:
# 1351 "data/maps/SlateportCity/scripts.pory"
	.string "Recently, a BATTLE TENT was built\n"
# 1352 "data/maps/SlateportCity/scripts.pory"
	.string "in SLATEPORT.\p"
# 1353 "data/maps/SlateportCity/scripts.pory"
	.string "GYMS are fun, but the BATTLE TENT's\n"
# 1354 "data/maps/SlateportCity/scripts.pory"
	.string "awesome in its own way.\p"
# 1355 "data/maps/SlateportCity/scripts.pory"
	.string "You should go find tough Pokémon\n"
# 1356 "data/maps/SlateportCity/scripts.pory"
	.string "for the BATTLE TENT!$"
# 1357 "data/maps/SlateportCity/scripts.pory"

# 1358 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptSternBeingInterviewed:
# 1359 "data/maps/SlateportCity/scripts.pory"
	.string "I was hoping that it was a famous star\n"
# 1360 "data/maps/SlateportCity/scripts.pory"
	.string "so I could get an autograph.\p"
# 1361 "data/maps/SlateportCity/scripts.pory"
	.string "But who's that being interviewed?\n"
# 1362 "data/maps/SlateportCity/scripts.pory"
	.string "Isn't that CAPT. STERN?$"
# 1363 "data/maps/SlateportCity/scripts.pory"

# 1364 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_InterviewerSoCool:
# 1365 "data/maps/SlateportCity/scripts.pory"
	.string "That lady interviewer is so cool\n"
# 1366 "data/maps/SlateportCity/scripts.pory"
	.string "and pretty.\p"
# 1367 "data/maps/SlateportCity/scripts.pory"
	.string "When I grow up, I'm going to be\n"
# 1368 "data/maps/SlateportCity/scripts.pory"
	.string "an international journalist!$"
# 1369 "data/maps/SlateportCity/scripts.pory"

# 1370 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternSaysDiscoveredSomething:
# 1371 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN says they discovered\n"
# 1372 "data/maps/SlateportCity/scripts.pory"
	.string "something at the bottom of the sea.\p"
# 1373 "data/maps/SlateportCity/scripts.pory"
	.string "I wonder what it is?\n"
# 1374 "data/maps/SlateportCity/scripts.pory"
	.string "What could it be?$"
# 1375 "data/maps/SlateportCity/scripts.pory"

# 1376 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainComeBackWithBigFish:
# 1377 "data/maps/SlateportCity/scripts.pory"
	.string "What's going on here?\p"
# 1378 "data/maps/SlateportCity/scripts.pory"
	.string "Did the good CAPTAIN come back with\n"
# 1379 "data/maps/SlateportCity/scripts.pory"
	.string "a big fish from the ocean floor?$"
# 1380 "data/maps/SlateportCity/scripts.pory"

# 1381 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AmIOnTV:
# 1382 "data/maps/SlateportCity/scripts.pory"
	.string "Hey! Are you watching?\n"
# 1383 "data/maps/SlateportCity/scripts.pory"
	.string "Am I on TV?$"
# 1384 "data/maps/SlateportCity/scripts.pory"

# 1385 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CaptainsACelebrity:
# 1386 "data/maps/SlateportCity/scripts.pory"
	.string "A TV interview! Here!\n"
# 1387 "data/maps/SlateportCity/scripts.pory"
	.string "The CAPTAIN's a celebrity!$"
# 1388 "data/maps/SlateportCity/scripts.pory"

# 1389 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BigSmileForCamera:
# 1390 "data/maps/SlateportCity/scripts.pory"
	.string "TY: Okay, CAPT. STERN, a big smile\n"
# 1391 "data/maps/SlateportCity/scripts.pory"
	.string "for the camera!$"
# 1392 "data/maps/SlateportCity/scripts.pory"

# 1393 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MostInvaluableExperience:
# 1394 "data/maps/SlateportCity/scripts.pory"
	.string "GABBY: I see, I see. You've had a most\n"
# 1395 "data/maps/SlateportCity/scripts.pory"
	.string "invaluable experience…$"
# 1396 "data/maps/SlateportCity/scripts.pory"

# 1397 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternMoveAheadWithExploration:
# 1398 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: Yes, indeed. We intend to\n"
# 1399 "data/maps/SlateportCity/scripts.pory"
	.string "move ahead with our exploration.$"
# 1400 "data/maps/SlateportCity/scripts.pory"

# 1401 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_GabbyWonderfulThanksForInterview:
# 1402 "data/maps/SlateportCity/scripts.pory"
	.string "GABBY: That's wonderful, CAPT. STERN!\n"
# 1403 "data/maps/SlateportCity/scripts.pory"
	.string "Thank you for taking the time from\l"
# 1404 "data/maps/SlateportCity/scripts.pory"
	.string "your busy schedule to talk to us.\p"
# 1405 "data/maps/SlateportCity/scripts.pory"
	.string "We hope we can interview you again\n"
# 1406 "data/maps/SlateportCity/scripts.pory"
	.string "with news of more discoveries!$"
# 1407 "data/maps/SlateportCity/scripts.pory"

# 1408 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhewFirstInterview:
# 1409 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: Whew…\p"
# 1410 "data/maps/SlateportCity/scripts.pory"
	.string "That was my first time to be filmed for\n"
# 1411 "data/maps/SlateportCity/scripts.pory"
	.string "TV. That was nerve-wracking.$"
# 1412 "data/maps/SlateportCity/scripts.pory"

# 1413 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OhPlayerWeMadeDiscovery:
# 1414 "data/maps/SlateportCity/scripts.pory"
	.string "Oh! {PLAYER}{KUN}!\n"
# 1415 "data/maps/SlateportCity/scripts.pory"
	.string "You're looking great!\p"
# 1416 "data/maps/SlateportCity/scripts.pory"
	.string "We made a huge discovery on our last\n"
# 1417 "data/maps/SlateportCity/scripts.pory"
	.string "seafloor exploration.\p"
# 1418 "data/maps/SlateportCity/scripts.pory"
	.string "We found an underwater cavern on\n"
# 1419 "data/maps/SlateportCity/scripts.pory"
	.string "Route 128.\p"
# 1420 "data/maps/SlateportCity/scripts.pory"
	.string "We think it's the habitat of a Pokémon\n"
# 1421 "data/maps/SlateportCity/scripts.pory"
	.string "that's said to have been long extinct.$"
# 1422 "data/maps/SlateportCity/scripts.pory"

# 1423 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_AquaWillAssumeControlOfSubmarine:
# 1424 "data/maps/SlateportCity/scripts.pory"
	.string "Fufufu…\n"
# 1425 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN, I presume.\p"
# 1426 "data/maps/SlateportCity/scripts.pory"
	.string "We of TEAM AQUA will assume\n"
# 1427 "data/maps/SlateportCity/scripts.pory"
	.string "control of your submarine!\p"
# 1428 "data/maps/SlateportCity/scripts.pory"
	.string "Your objections are meaningless!\n"
# 1429 "data/maps/SlateportCity/scripts.pory"
	.string "We expect your total cooperation!\p"
# 1430 "data/maps/SlateportCity/scripts.pory"
	.string "Fufufu…\n"
# 1431 "data/maps/SlateportCity/scripts.pory"
	.string "Just watch and learn what TEAM\l"
# 1432 "data/maps/SlateportCity/scripts.pory"
	.string "AQUA has planned!$"
# 1433 "data/maps/SlateportCity/scripts.pory"

# 1434 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternWhatWasAllThat:
# 1435 "data/maps/SlateportCity/scripts.pory"
	.string "CAPT. STERN: What was that all about?\p"
# 1436 "data/maps/SlateportCity/scripts.pory"
	.string "It sounded like someone using\n"
# 1437 "data/maps/SlateportCity/scripts.pory"
	.string "a megaphone…\p"
# 1438 "data/maps/SlateportCity/scripts.pory"
	.string "Where did it come from?$"
# 1439 "data/maps/SlateportCity/scripts.pory"

# 1440 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FromHarborTryingToTakeSub:
# 1441 "data/maps/SlateportCity/scripts.pory"
	.string "It's from the HARBOR!\p"
# 1442 "data/maps/SlateportCity/scripts.pory"
	.string "The submarine!\n"
# 1443 "data/maps/SlateportCity/scripts.pory"
	.string "They're trying to take it!$"
# 1444 "data/maps/SlateportCity/scripts.pory"

# 1445 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PleaseComeWithMe:
# 1446 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}{KUN}!\n"
# 1447 "data/maps/SlateportCity/scripts.pory"
	.string "Please, come with me!$"
# 1448 "data/maps/SlateportCity/scripts.pory"

# 1449 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BattleTentSign:
# 1450 "data/maps/SlateportCity/scripts.pory"
	.string "BATTLE TENT SLATEPORT SITE\n"
# 1451 "data/maps/SlateportCity/scripts.pory"
	.string "“Find it! The ultimate Pokémon!”$"
# 1452 "data/maps/SlateportCity/scripts.pory"

# 1453 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardWantedSign:
# 1454 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1455 "data/maps/SlateportCity/scripts.pory"
	.string "“Wanted: A sailor capable of sailing\n"
# 1456 "data/maps/SlateportCity/scripts.pory"
	.string "in all currents.”$"
# 1457 "data/maps/SlateportCity/scripts.pory"

# 1458 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardNearsCompletion:
# 1459 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1460 "data/maps/SlateportCity/scripts.pory"
	.string "“The ferry S.S. TIDAL nears\n"
# 1461 "data/maps/SlateportCity/scripts.pory"
	.string "completion for serving the ports of\l"
# 1462 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT and LILYCOVE.”$"
# 1463 "data/maps/SlateportCity/scripts.pory"

# 1464 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_SternsShipyardFerryComplete:
# 1465 "data/maps/SlateportCity/scripts.pory"
	.string "STERN'S SHIPYARD\p"
# 1466 "data/maps/SlateportCity/scripts.pory"
	.string "“Boarding of the SLATEPORT-LILYCOVE\n"
# 1467 "data/maps/SlateportCity/scripts.pory"
	.string "ferry S.S. TIDAL is handled at the\l"
# 1468 "data/maps/SlateportCity/scripts.pory"
	.string "HARBOR.”$"
# 1469 "data/maps/SlateportCity/scripts.pory"

# 1470 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_PokemonFanClubSign:
# 1471 "data/maps/SlateportCity/scripts.pory"
	.string "Pokémon FAN CLUB\n"
# 1472 "data/maps/SlateportCity/scripts.pory"
	.string "“Calling all fans of Pokémon!”$"
# 1473 "data/maps/SlateportCity/scripts.pory"

# 1474 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_OceanicMuseumSign:
# 1475 "data/maps/SlateportCity/scripts.pory"
	.string "“The endless sea sustains\n"
# 1476 "data/maps/SlateportCity/scripts.pory"
	.string "all life.”\p"
# 1477 "data/maps/SlateportCity/scripts.pory"
	.string "OCEANIC MUSEUM$"
# 1478 "data/maps/SlateportCity/scripts.pory"

# 1479 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_CitySign:
# 1480 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT CITY\p"
# 1481 "data/maps/SlateportCity/scripts.pory"
	.string "“The port where people and Pokémon\n"
# 1482 "data/maps/SlateportCity/scripts.pory"
	.string "cross paths.”$"
# 1483 "data/maps/SlateportCity/scripts.pory"

# 1484 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MarketSign:
# 1485 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT MARKET\n"
# 1486 "data/maps/SlateportCity/scripts.pory"
	.string "“Unique items found nowhere else!”$"
# 1487 "data/maps/SlateportCity/scripts.pory"

# 1488 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborFerryUnderConstruction:
# 1489 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT HARBOR\p"
# 1490 "data/maps/SlateportCity/scripts.pory"
	.string "“The ferry S.S. TIDAL is under\n"
# 1491 "data/maps/SlateportCity/scripts.pory"
	.string "construction in the SHIPYARD.\p"
# 1492 "data/maps/SlateportCity/scripts.pory"
	.string "“Service is scheduled to begin\n"
# 1493 "data/maps/SlateportCity/scripts.pory"
	.string "shortly.”$"
# 1494 "data/maps/SlateportCity/scripts.pory"

# 1495 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_HarborSign:
# 1496 "data/maps/SlateportCity/scripts.pory"
	.string "SLATEPORT HARBOR\p"
# 1497 "data/maps/SlateportCity/scripts.pory"
	.string "“Enjoy a delightful cruise on\n"
# 1498 "data/maps/SlateportCity/scripts.pory"
	.string "the ferry S.S. TIDAL.”$"
# 1499 "data/maps/SlateportCity/scripts.pory"

# 1500 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_NameRatersHouseSign:
# 1501 "data/maps/SlateportCity/scripts.pory"
	.string "NAME RATER'S HOUSE\n"
# 1502 "data/maps/SlateportCity/scripts.pory"
	.string "“Pokémon nicknames rated.”$"
# 1503 "data/maps/SlateportCity/scripts.pory"

# 1504 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerries:
# 1505 "data/maps/SlateportCity/scripts.pory"
	.string "If a wild Pokémon gets hurt, it heals\n"
# 1506 "data/maps/SlateportCity/scripts.pory"
	.string "itself by chewing on BERRIES.\p"
# 1507 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1508 "data/maps/SlateportCity/scripts.pory"
	.string "Somebody saw that and got the idea\n"
# 1509 "data/maps/SlateportCity/scripts.pory"
	.string "of making medicine from BERRIES.\p"
# 1510 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1511 "data/maps/SlateportCity/scripts.pory"
	.string "To turn BERRIES into medicine,\n"
# 1512 "data/maps/SlateportCity/scripts.pory"
	.string "they must be crushed into powder.\p"
# 1513 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know that?\p"
# 1514 "data/maps/SlateportCity/scripts.pory"
	.string "You seem to have an interest\n"
# 1515 "data/maps/SlateportCity/scripts.pory"
	.string "in BERRIES!\p"
# 1516 "data/maps/SlateportCity/scripts.pory"
	.string "I've got something good for someone\n"
# 1517 "data/maps/SlateportCity/scripts.pory"
	.string "like you.$"
# 1518 "data/maps/SlateportCity/scripts.pory"

# 1519 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExplainBerryPowder:
# 1520 "data/maps/SlateportCity/scripts.pory"
	.string "I recently had machines installed at\n"
# 1521 "data/maps/SlateportCity/scripts.pory"
	.string "Pokémon CenterS for crushing BERRIES.\p"
# 1522 "data/maps/SlateportCity/scripts.pory"
	.string "The BERRY CRUSH machines are at\n"
# 1523 "data/maps/SlateportCity/scripts.pory"
	.string "the DIRECT CORNER upstairs.\p"
# 1524 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know?\p"
# 1525 "data/maps/SlateportCity/scripts.pory"
	.string "Could you make BERRY POWDER for\n"
# 1526 "data/maps/SlateportCity/scripts.pory"
	.string "me using those machines?\p"
# 1527 "data/maps/SlateportCity/scripts.pory"
	.string "I can make you all sorts of medicine\n"
# 1528 "data/maps/SlateportCity/scripts.pory"
	.string "if you bring me lots of BERRY POWDER.$"
# 1529 "data/maps/SlateportCity/scripts.pory"

# 1530 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_BroughtMeSomeBerryPowder:
# 1531 "data/maps/SlateportCity/scripts.pory"
	.string "Have you brought me some\n"
# 1532 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER?$"
# 1533 "data/maps/SlateportCity/scripts.pory"

# 1534 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeWhatWithIt:
# 1535 "data/maps/SlateportCity/scripts.pory"
	.string "What would you like to exchange\n"
# 1536 "data/maps/SlateportCity/scripts.pory"
	.string "it with?$"
# 1537 "data/maps/SlateportCity/scripts.pory"

# 1538 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ExchangeBerryPowderForItem:
# 1539 "data/maps/SlateportCity/scripts.pory"
	.string "Okay, you want to exchange your\n"
# 1540 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for one {STR_VAR_1}?$"
# 1541 "data/maps/SlateportCity/scripts.pory"

# 1542 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_DontHaveEnoughBerryPowder:
# 1543 "data/maps/SlateportCity/scripts.pory"
	.string "Oh, dear. You don't have enough\n"
# 1544 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER.$"
# 1545 "data/maps/SlateportCity/scripts.pory"

# 1546 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_FineBerryPowderTradeSomethingElse:
# 1547 "data/maps/SlateportCity/scripts.pory"
	.string "This is fine BERRY POWDER.\n"
# 1548 "data/maps/SlateportCity/scripts.pory"
	.string "It will make excellent medicine.\p"
# 1549 "data/maps/SlateportCity/scripts.pory"
	.string "Would you like to trade more of your\n"
# 1550 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for something else?$"
# 1551 "data/maps/SlateportCity/scripts.pory"

# 1552 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_WhenYouGetMoreBringItToMe:
# 1553 "data/maps/SlateportCity/scripts.pory"
	.string "Okay! When you get some more\n"
# 1554 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER, bring it to me, please!$"
# 1555 "data/maps/SlateportCity/scripts.pory"

# 1556 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_ComeBackToTradeBerryPowder:
# 1557 "data/maps/SlateportCity/scripts.pory"
	.string "Come back if you'd like to trade your\n"
# 1558 "data/maps/SlateportCity/scripts.pory"
	.string "BERRY POWDER for some medicine.\p"
# 1559 "data/maps/SlateportCity/scripts.pory"
	.string "I'm always running a bazaar here.\p"
# 1560 "data/maps/SlateportCity/scripts.pory"
	.string "Did you know?$"
# 1561 "data/maps/SlateportCity/scripts.pory"

# 1562 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_YouDroveTeamAquaAway:
# 1563 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Huh?\n"
# 1564 "data/maps/SlateportCity/scripts.pory"
	.string "I'm sure I met you somewhere before.\p"
# 1565 "data/maps/SlateportCity/scripts.pory"
	.string "Have I introduced myself to you?\n"
# 1566 "data/maps/SlateportCity/scripts.pory"
	.string "If not, my name's SCOTT.\p"
# 1567 "data/maps/SlateportCity/scripts.pory"
	.string "I just saw TEAM AQUA run away from\n"
# 1568 "data/maps/SlateportCity/scripts.pory"
	.string "here like they were stung.\p"
# 1569 "data/maps/SlateportCity/scripts.pory"
	.string "Let me guess--you drove them away?$"
# 1570 "data/maps/SlateportCity/scripts.pory"

# 1571 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_MaybeThisTrainer:
# 1572 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Hmm…\n"
# 1573 "data/maps/SlateportCity/scripts.pory"
	.string "Maybe, just maybe, this TRAINER…$"
# 1574 "data/maps/SlateportCity/scripts.pory"

# 1575 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_LetsRegisterEachOther:
# 1576 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: All right! I think you're going\n"
# 1577 "data/maps/SlateportCity/scripts.pory"
	.string "to become a good friend.\p"
# 1578 "data/maps/SlateportCity/scripts.pory"
	.string "So, let's register each other in our\n"
# 1579 "data/maps/SlateportCity/scripts.pory"
	.string "PokénavS.\p"
# 1580 "data/maps/SlateportCity/scripts.pory"
	.string "… … … … … …$"
# 1581 "data/maps/SlateportCity/scripts.pory"

# 1582 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_RegisteredScott:
# 1583 "data/maps/SlateportCity/scripts.pory"
	.string "Registered this SCOTT person\n"
# 1584 "data/maps/SlateportCity/scripts.pory"
	.string "in the Pokénav.$"
# 1585 "data/maps/SlateportCity/scripts.pory"

# 1586 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_KeepEyeOnTrainersBeSeeingYou:
# 1587 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: What I'd like to do is tag along\n"
# 1588 "data/maps/SlateportCity/scripts.pory"
	.string "with you, but I do want to keep an eye\l"
# 1589 "data/maps/SlateportCity/scripts.pory"
	.string "on the talents of other people, too.\p"
# 1590 "data/maps/SlateportCity/scripts.pory"
	.string "So, I'll be off to roam other towns\n"
# 1591 "data/maps/SlateportCity/scripts.pory"
	.string "a bit more.\p"
# 1592 "data/maps/SlateportCity/scripts.pory"
	.string "Be seeing you, {PLAYER}{KUN}!$"
# 1593 "data/maps/SlateportCity/scripts.pory"

# 1594 "data/maps/SlateportCity/scripts.pory"
SlateportCity_Text_TakingBattleTentChallenge:
# 1595 "data/maps/SlateportCity/scripts.pory"
	.string "SCOTT: Oh, hey!\n"
# 1596 "data/maps/SlateportCity/scripts.pory"
	.string "If it isn't {PLAYER}{KUN}!\p"
# 1597 "data/maps/SlateportCity/scripts.pory"
	.string "{PLAYER}{KUN}, let me guess--you're going\n"
# 1598 "data/maps/SlateportCity/scripts.pory"
	.string "to take the BATTLE TENT challenge?\p"
# 1599 "data/maps/SlateportCity/scripts.pory"
	.string "Yeah! That's a good idea!\n"
# 1600 "data/maps/SlateportCity/scripts.pory"
	.string "That's a really great idea!\p"
# 1601 "data/maps/SlateportCity/scripts.pory"
	.string "After all, a tough TRAINER is\n"
# 1602 "data/maps/SlateportCity/scripts.pory"
	.string "the perfect fit for the BATTLE TENT!\p"
# 1603 "data/maps/SlateportCity/scripts.pory"
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
# 30 "data/maps/SlateportCity/scripts.pory"
	.string "{STR_VAR_1} enters the old oven!$"

SlateportCity_EventScript_ApplianceMan_Text_5:
# 37 "data/maps/SlateportCity/scripts.pory"
	.string "{STR_VAR_1} enters the old washer!$"

SlateportCity_EventScript_ApplianceMan_Text_6:
# 44 "data/maps/SlateportCity/scripts.pory"
	.string "{STR_VAR_1} enters the old fridge!$"

SlateportCity_EventScript_ApplianceMan_Text_7:
# 51 "data/maps/SlateportCity/scripts.pory"
	.string "{STR_VAR_1} enters the old fan!$"

SlateportCity_EventScript_ApplianceMan_Text_8:
# 58 "data/maps/SlateportCity/scripts.pory"
	.string "{STR_VAR_1} enters the old mower!$"

SlateportCity_EventScript_ApplianceMan_Text_9:
# 65 "data/maps/SlateportCity/scripts.pory"
	.string "I had no idea Pokémon could do that…$"
