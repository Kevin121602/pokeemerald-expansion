DewfordTown_EventScript_TrickHouseOpen::
# 4 "data/maps/DewfordTown/scripts.pory"
	lockall
# 5 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 6 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_EventScript_TrickHouseOpen_Text_0
# 11 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 12 "data/maps/DewfordTown/scripts.pory"
	delay 20
# 13 "data/maps/DewfordTown/scripts.pory"
	applymovement 8, Route110_TrickHouse_Movement_TrickMasterSpin
# 14 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 15 "data/maps/DewfordTown/scripts.pory"
	applymovement 8, Route110_TrickHouse_Movement_TrickMasterJumpAway
# 16 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 17 "data/maps/DewfordTown/scripts.pory"
	removeobject 8
# 18 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_KNUCKLE_BADGE_TRICK_HOUSE_OPEN
# 19 "data/maps/DewfordTown/scripts.pory"
	releaseall
	end


# 23 "data/maps/DewfordTown/scripts.pory"

# 24 "data/maps/DewfordTown/scripts.pory"
@ Sailing to and from Dewford uses local IDs from different maps
# 25 "data/maps/DewfordTown/scripts.pory"
@ e.g. Route 104's sail to Dewford script references local IDs from Dewford's map
# 26 "data/maps/DewfordTown/scripts.pory"
@ All of these local IDs are labeled here
# 27 "data/maps/DewfordTown/scripts.pory"
.equ LOCALID_BRINEY_DEWFORD, 2
# 28 "data/maps/DewfordTown/scripts.pory"
.equ LOCALID_BOAT_DEWFORD, 4
# 29 "data/maps/DewfordTown/scripts.pory"

# 30 "data/maps/DewfordTown/scripts.pory"
.equ LOCALID_BOAT_R109, 1
# 31 "data/maps/DewfordTown/scripts.pory"
.equ LOCALID_BRINEY_R109, 2
# 32 "data/maps/DewfordTown/scripts.pory"

# 33 "data/maps/DewfordTown/scripts.pory"
.equ LOCALID_BOAT_R104, 7
# 34 "data/maps/DewfordTown/scripts.pory"
.equ LOCALID_BRINEY_R104, 8
# 35 "data/maps/DewfordTown/scripts.pory"

# 36 "data/maps/DewfordTown/scripts.pory"
DewfordTown_MapScripts::
# 37 "data/maps/DewfordTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_OnTransition
# 38 "data/maps/DewfordTown/scripts.pory"
	.byte 0
# 39 "data/maps/DewfordTown/scripts.pory"

# 40 "data/maps/DewfordTown/scripts.pory"
DewfordTown_OnTransition:
# 41 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_VISITED_DEWFORD_TOWN
# 42 "data/maps/DewfordTown/scripts.pory"
	end
# 43 "data/maps/DewfordTown/scripts.pory"

# 44 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_Briney::
# 45 "data/maps/DewfordTown/scripts.pory"
	lock
# 46 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 47 "data/maps/DewfordTown/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, DewfordTown_EventScript_NeedToMake
# 48 "data/maps/DewfordTown/scripts.pory"
	goto_if_unset FLAG_DELIVERED_STEVEN_LETTER, DewfordTown_EventScript_ReturnToPetalburgPrompt
# 49 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_CanOnlyMakeOneTrip, MSGBOX_YESNO
# 50 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, YES, DewfordTown_EventScript_ChooseSlateport
# 51 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, NO, DewfordTown_EventScript_CancelSailSelect
# 52 "data/maps/DewfordTown/scripts.pory"
	release
# 53 "data/maps/DewfordTown/scripts.pory"
	end
# 54 "data/maps/DewfordTown/scripts.pory"

# 55 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_ChoosePetalburg::
# 56 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_PetalburgWereSettingSail, MSGBOX_DEFAULT
# 57 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 58 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_SailToPetalburg
# 59 "data/maps/DewfordTown/scripts.pory"
	release
# 60 "data/maps/DewfordTown/scripts.pory"
	end
# 61 "data/maps/DewfordTown/scripts.pory"

# 62 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_ChooseSlateport::
# 63 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_SlateportWereSettingSail, MSGBOX_DEFAULT
# 64 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 65 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_SailToSlateport
# 66 "data/maps/DewfordTown/scripts.pory"
	release
# 67 "data/maps/DewfordTown/scripts.pory"
	end
# 68 "data/maps/DewfordTown/scripts.pory"

# 69 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_CancelSailSelect::
# 70 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_JustTellMeWhenYouNeedToSetSail, MSGBOX_DEFAULT
# 71 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 72 "data/maps/DewfordTown/scripts.pory"
	release
# 73 "data/maps/DewfordTown/scripts.pory"
	end
# 74 "data/maps/DewfordTown/scripts.pory"

# 75 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_ReturnToPetalburgPrompt::
# 76 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_SetSailBackToPetalburg, MSGBOX_DEFAULT
# 77 "data/maps/DewfordTown/scripts.pory"
	release
# 78 "data/maps/DewfordTown/scripts.pory"
	end
# 79 "data/maps/DewfordTown/scripts.pory"

# 80 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_NeedToMake::
# 81 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_NeedToMakeSomeRepairs, MSGBOX_DEFAULT
# 82 "data/maps/DewfordTown/scripts.pory"
	release
# 83 "data/maps/DewfordTown/scripts.pory"
	end
# 84 "data/maps/DewfordTown/scripts.pory"

# 85 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_SailBackToPetalburg::
# 86 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_PetalburgWereSettingSail2, MSGBOX_DEFAULT
# 87 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 88 "data/maps/DewfordTown/scripts.pory"
	goto DewfordTown_EventScript_SailToPetalburg
# 89 "data/maps/DewfordTown/scripts.pory"
	end
# 90 "data/maps/DewfordTown/scripts.pory"

# 91 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_Woman::
# 92 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_TinyIslandCommunity, MSGBOX_NPC
# 93 "data/maps/DewfordTown/scripts.pory"
	end
# 94 "data/maps/DewfordTown/scripts.pory"

# 95 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_TownSign::
# 96 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_TownSign, MSGBOX_SIGN
# 97 "data/maps/DewfordTown/scripts.pory"
	end
# 98 "data/maps/DewfordTown/scripts.pory"

# 99 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_GymSign::
# 100 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GymSign, MSGBOX_SIGN
# 101 "data/maps/DewfordTown/scripts.pory"
	end
# 102 "data/maps/DewfordTown/scripts.pory"

# 103 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_HallSign::
# 104 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_HallSign, MSGBOX_SIGN
# 105 "data/maps/DewfordTown/scripts.pory"
	end
# 106 "data/maps/DewfordTown/scripts.pory"

# 107 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_BrineysHouse::
# 108 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_BrineySign, MSGBOX_SIGN
# 109 "data/maps/DewfordTown/scripts.pory"
	end
# 110 "data/maps/DewfordTown/scripts.pory"

# 111 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_OldRodFisherman::
# 112 "data/maps/DewfordTown/scripts.pory"
	lock
# 113 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 114 "data/maps/DewfordTown/scripts.pory"
	goto_if_set FLAG_RECEIVED_OLD_ROD, DewfordTown_EventScript_HowsFishing
# 115 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GettingItchToFish, MSGBOX_YESNO
# 116 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, YES, DewfordTown_EventScript_GiveOldRod
# 117 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, NO, DewfordTown_EventScript_NotGettingItchToFish
# 118 "data/maps/DewfordTown/scripts.pory"
	end
# 119 "data/maps/DewfordTown/scripts.pory"

# 120 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_GiveOldRod::
# 121 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GiveYouOneOfMyRods, MSGBOX_DEFAULT
# 122 "data/maps/DewfordTown/scripts.pory"
	giveitem ITEM_OLD_ROD
# 123 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 124 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_RECEIVED_OLD_ROD
# 125 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_ThrowInFishingAdvice, MSGBOX_DEFAULT
# 126 "data/maps/DewfordTown/scripts.pory"
	release
# 127 "data/maps/DewfordTown/scripts.pory"
	end
# 128 "data/maps/DewfordTown/scripts.pory"

# 129 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_NotGettingItchToFish::
# 130 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_ThatsTooBadThen, MSGBOX_DEFAULT
# 131 "data/maps/DewfordTown/scripts.pory"
	release
# 132 "data/maps/DewfordTown/scripts.pory"
	end
# 133 "data/maps/DewfordTown/scripts.pory"

# 134 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_HowsFishing::
# 135 "data/maps/DewfordTown/scripts.pory"
	message DewfordTown_Text_HowsYourFishing
# 136 "data/maps/DewfordTown/scripts.pory"
	waitmessage
# 137 "data/maps/DewfordTown/scripts.pory"
	multichoice 20, 8, MULTI_HOWS_FISHING, TRUE
# 138 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, 0, DewfordTown_EventScript_FishingExcellent
# 139 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, 1, DewfordTown_EventScript_FishingNotSoGood
# 140 "data/maps/DewfordTown/scripts.pory"
	end
# 141 "data/maps/DewfordTown/scripts.pory"

# 142 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_FishingExcellent::
# 143 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_GreatHaulInSomeBigOnes, MSGBOX_DEFAULT
# 144 "data/maps/DewfordTown/scripts.pory"
	release
# 145 "data/maps/DewfordTown/scripts.pory"
	end
# 146 "data/maps/DewfordTown/scripts.pory"

# 147 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_FishingNotSoGood::
# 148 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_FishingAdvice, MSGBOX_DEFAULT
# 149 "data/maps/DewfordTown/scripts.pory"
	release
# 150 "data/maps/DewfordTown/scripts.pory"
	end
# 151 "data/maps/DewfordTown/scripts.pory"

# 152 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_SailToPetalburg::
# 153 "data/maps/DewfordTown/scripts.pory"
	call EventScript_BackupMrBrineyLocation
# 154 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN, 0
# 155 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN, 0
# 156 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_BRINEY_DEWFORD, DewfordTown_Movement_BrineyBoardBoat
# 157 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 158 "data/maps/DewfordTown/scripts.pory"
	removeobject LOCALID_BRINEY_DEWFORD
# 159 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_PlayerBoardBoat
# 160 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 161 "data/maps/DewfordTown/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 162 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 163 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_BOAT_DEWFORD, DewfordTown_Movement_SailToPetalburg
# 164 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_SailToPetalburg
# 165 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 166 "data/maps/DewfordTown/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
# 167 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 168 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_ExitBoatPetalburg
# 169 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 170 "data/maps/DewfordTown/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
# 171 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 172 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 173 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
# 174 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 175 "data/maps/DewfordTown/scripts.pory"
	hideobjectat LOCALID_BOAT_DEWFORD, MAP_DEWFORD_TOWN
# 176 "data/maps/DewfordTown/scripts.pory"
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 2
# 177 "data/maps/DewfordTown/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 178 "data/maps/DewfordTown/scripts.pory"
	warp MAP_ROUTE104_MR_BRINEYS_HOUSE, 5, 4
# 179 "data/maps/DewfordTown/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 180 "data/maps/DewfordTown/scripts.pory"
	waitstate
# 181 "data/maps/DewfordTown/scripts.pory"
	release
# 182 "data/maps/DewfordTown/scripts.pory"
	end
# 183 "data/maps/DewfordTown/scripts.pory"

# 184 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_SailToSlateport::
# 185 "data/maps/DewfordTown/scripts.pory"
	call EventScript_BackupMrBrineyLocation
# 186 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN, 0
# 187 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN, 1
# 188 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_BRINEY_DEWFORD, DewfordTown_Movement_BrineyBoardBoat
# 189 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 190 "data/maps/DewfordTown/scripts.pory"
	removeobject LOCALID_BRINEY_DEWFORD
# 191 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_PlayerBoardBoat
# 192 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 193 "data/maps/DewfordTown/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 194 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_PlayBrineysBoatMusic
# 195 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_BOAT_DEWFORD, DewfordTown_Movement_SailToSlateport
# 196 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_SailToSlateport
# 197 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 198 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_StopBrineysBoatMusic
# 199 "data/maps/DewfordTown/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE109
# 200 "data/maps/DewfordTown/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_ExitBoatSlateport
# 201 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 202 "data/maps/DewfordTown/scripts.pory"
	setobjectxyperm LOCALID_BRINEY_R109, 21, 26
# 203 "data/maps/DewfordTown/scripts.pory"
	addobject LOCALID_BRINEY_R109
# 204 "data/maps/DewfordTown/scripts.pory"
	setobjectsubpriority LOCALID_BRINEY_R109, MAP_ROUTE109, 0
# 205 "data/maps/DewfordTown/scripts.pory"
	applymovement LOCALID_BRINEY_R109, DewfordTown_Movement_BrineyExitBoat
# 206 "data/maps/DewfordTown/scripts.pory"
	waitmovement 0
# 207 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY
# 208 "data/maps/DewfordTown/scripts.pory"
	addobject LOCALID_BOAT_R109
# 209 "data/maps/DewfordTown/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
# 210 "data/maps/DewfordTown/scripts.pory"
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
# 211 "data/maps/DewfordTown/scripts.pory"
	hideobjectat LOCALID_BOAT_DEWFORD, MAP_DEWFORD_TOWN
# 212 "data/maps/DewfordTown/scripts.pory"
	call_if_unset FLAG_DELIVERED_DEVON_GOODS, DewfordTown_EventScript_LandedSlateportDeliverGoods
# 213 "data/maps/DewfordTown/scripts.pory"
	call_if_set FLAG_DELIVERED_DEVON_GOODS, DewfordTown_EventScript_LandedSlateport
# 214 "data/maps/DewfordTown/scripts.pory"
	closemessage
# 215 "data/maps/DewfordTown/scripts.pory"
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
# 216 "data/maps/DewfordTown/scripts.pory"
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
# 217 "data/maps/DewfordTown/scripts.pory"
	resetobjectsubpriority LOCALID_BRINEY_R109, MAP_ROUTE109
# 218 "data/maps/DewfordTown/scripts.pory"
	copyobjectxytoperm LOCALID_BRINEY_R109
# 219 "data/maps/DewfordTown/scripts.pory"
	release
# 220 "data/maps/DewfordTown/scripts.pory"
	end
# 221 "data/maps/DewfordTown/scripts.pory"

# 222 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_LandedSlateportDeliverGoods::
# 223 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInSlateportDeliverGoods, MSGBOX_DEFAULT
# 224 "data/maps/DewfordTown/scripts.pory"
	return
# 225 "data/maps/DewfordTown/scripts.pory"

# 226 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_LandedSlateport::
# 227 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_BrineyLandedInSlateport, MSGBOX_DEFAULT
# 228 "data/maps/DewfordTown/scripts.pory"
	return
# 229 "data/maps/DewfordTown/scripts.pory"

# 230 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_SailToPetalburg:
# 231 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 232 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 233 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 234 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 235 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 236 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 237 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 238 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 239 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 240 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 241 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 242 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 243 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 244 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 245 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 246 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 247 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 248 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 249 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 250 "data/maps/DewfordTown/scripts.pory"
	walk_left
# 251 "data/maps/DewfordTown/scripts.pory"
	walk_left
# 252 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 253 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 254 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 255 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 256 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 257 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 258 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 259 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 260 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 261 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 262 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 263 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 264 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 265 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 266 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 267 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 268 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 269 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 270 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 271 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 272 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 273 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 274 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 275 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 276 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 277 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 278 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 279 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 280 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 281 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 282 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 283 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 284 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 285 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 286 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 287 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 288 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 289 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 290 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 291 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 292 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 293 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 294 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 295 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 296 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 297 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 298 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 299 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 300 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 301 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 302 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 303 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 304 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 305 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 306 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 307 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 308 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 309 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 310 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 311 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 312 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 313 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 314 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 315 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 316 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 317 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 318 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 319 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 320 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 321 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 322 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 323 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 324 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 325 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 326 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 327 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 328 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 329 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 330 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 331 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 332 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 333 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 334 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 335 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 336 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 337 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 338 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 339 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 340 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 341 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 342 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 343 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 344 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 345 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 346 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 347 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 348 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 349 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 350 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 351 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 352 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 353 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 354 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 355 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 356 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 357 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 358 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 359 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 360 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 361 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 362 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 363 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 364 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 365 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 366 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 367 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 368 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 369 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 370 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 371 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 372 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 373 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 374 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 375 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 376 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 377 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 378 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 379 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 380 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 381 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 382 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 383 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 384 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 385 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 386 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 387 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 388 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 389 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 390 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 391 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 392 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 393 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 394 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 395 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 396 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 397 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 398 "data/maps/DewfordTown/scripts.pory"
	walk_faster_left
# 399 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 400 "data/maps/DewfordTown/scripts.pory"
	walk_fast_left
# 401 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 402 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 403 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 404 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 405 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 406 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 407 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 408 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 409 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 410 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 411 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 412 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 413 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 414 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 415 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 416 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 417 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 418 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 419 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 420 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 421 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 422 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 423 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 424 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 425 "data/maps/DewfordTown/scripts.pory"
	step_end
# 426 "data/maps/DewfordTown/scripts.pory"

# 427 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_SailToSlateport:
# 428 "data/maps/DewfordTown/scripts.pory"
	walk_right
# 429 "data/maps/DewfordTown/scripts.pory"
	walk_fast_right
# 430 "data/maps/DewfordTown/scripts.pory"
	walk_fast_right
# 431 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 432 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 433 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 434 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 435 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 436 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 437 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 438 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 439 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 440 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 441 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 442 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 443 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 444 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 445 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 446 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 447 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 448 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 449 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 450 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 451 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 452 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 453 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 454 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 455 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 456 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 457 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 458 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 459 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 460 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 461 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 462 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 463 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 464 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 465 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 466 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 467 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 468 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 469 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 470 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 471 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 472 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 473 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 474 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 475 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 476 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 477 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 478 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 479 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 480 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 481 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 482 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 483 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 484 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 485 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 486 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 487 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 488 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 489 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 490 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 491 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 492 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 493 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 494 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 495 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 496 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 497 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 498 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 499 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 500 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 501 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 502 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 503 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 504 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 505 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 506 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 507 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 508 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 509 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 510 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 511 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 512 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 513 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 514 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 515 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 516 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 517 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 518 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 519 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 520 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 521 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 522 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 523 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 524 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 525 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 526 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 527 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 528 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 529 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 530 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 531 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 532 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 533 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 534 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 535 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 536 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 537 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 538 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 539 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 540 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 541 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 542 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 543 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 544 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 545 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 546 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 547 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 548 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 549 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 550 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 551 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 552 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 553 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 554 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 555 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 556 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 557 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 558 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 559 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 560 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 561 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 562 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 563 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 564 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 565 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 566 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 567 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 568 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 569 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 570 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 571 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 572 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 573 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 574 "data/maps/DewfordTown/scripts.pory"
	walk_faster_right
# 575 "data/maps/DewfordTown/scripts.pory"
	walk_fast_right
# 576 "data/maps/DewfordTown/scripts.pory"
	walk_fast_right
# 577 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 578 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 579 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 580 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 581 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 582 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 583 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 584 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 585 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 586 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 587 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 588 "data/maps/DewfordTown/scripts.pory"
	walk_faster_up
# 589 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 590 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 591 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 592 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 593 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 594 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 595 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 596 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 597 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 598 "data/maps/DewfordTown/scripts.pory"
	walk_fast_up
# 599 "data/maps/DewfordTown/scripts.pory"
	step_end
# 600 "data/maps/DewfordTown/scripts.pory"

# 601 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_PlayerBoardBoat:
# 602 "data/maps/DewfordTown/scripts.pory"
	walk_right
# 603 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 604 "data/maps/DewfordTown/scripts.pory"
	step_end
# 605 "data/maps/DewfordTown/scripts.pory"

# 606 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_ExitBoatPetalburg:
# 607 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 608 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 609 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 610 "data/maps/DewfordTown/scripts.pory"
	step_end
# 611 "data/maps/DewfordTown/scripts.pory"

# 612 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_ExitBoatSlateport:
# 613 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 614 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 615 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 616 "data/maps/DewfordTown/scripts.pory"
	walk_in_place_faster_down
# 617 "data/maps/DewfordTown/scripts.pory"
	step_end
# 618 "data/maps/DewfordTown/scripts.pory"

# 619 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_BrineyBoardBoat:
# 620 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 621 "data/maps/DewfordTown/scripts.pory"
	step_end
# 622 "data/maps/DewfordTown/scripts.pory"

# 623 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Movement_BrineyExitBoat:
# 624 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 625 "data/maps/DewfordTown/scripts.pory"
	walk_up
# 626 "data/maps/DewfordTown/scripts.pory"
	step_end
# 627 "data/maps/DewfordTown/scripts.pory"

# 628 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_TrendyPhraseBoy::
# 629 "data/maps/DewfordTown/scripts.pory"
	lock
# 630 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 631 "data/maps/DewfordTown/scripts.pory"
	call Common_EventScript_BufferTrendyPhrase
# 632 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_XIsTheBiggestHappeningThingRight, MSGBOX_YESNO
# 633 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, YES, DewfordTown_EventScript_ConfirmTrendyPhrase
# 634 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, NO, DewfordTown_EventScript_RejectTrendyPhrase
# 635 "data/maps/DewfordTown/scripts.pory"
	end
# 636 "data/maps/DewfordTown/scripts.pory"

# 637 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_ConfirmTrendyPhrase::
# 638 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_YeahDefinitionOfInRightNow, MSGBOX_DEFAULT
# 639 "data/maps/DewfordTown/scripts.pory"
	release
# 640 "data/maps/DewfordTown/scripts.pory"
	end
# 641 "data/maps/DewfordTown/scripts.pory"

# 642 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_RejectTrendyPhrase::
# 643 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_TellMeWhatsNewAndIn, MSGBOX_DEFAULT
# 644 "data/maps/DewfordTown/scripts.pory"
	setvar VAR_0x8004, EASY_CHAT_TYPE_TRENDY_PHRASE
# 645 "data/maps/DewfordTown/scripts.pory"
	call Common_ShowEasyChatScreen
# 646 "data/maps/DewfordTown/scripts.pory"
	lock
# 647 "data/maps/DewfordTown/scripts.pory"
	faceplayer
# 648 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, DewfordTown_EventScript_GiveNewTrendyPhrase
# 649 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, DewfordTown_EventScript_CancelNewTrendyPhrase
# 650 "data/maps/DewfordTown/scripts.pory"
	end
# 651 "data/maps/DewfordTown/scripts.pory"

# 652 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_GiveNewTrendyPhrase::
# 653 "data/maps/DewfordTown/scripts.pory"
	incrementgamestat GAME_STAT_STARTED_TRENDS
# 654 "data/maps/DewfordTown/scripts.pory"
	goto_if_eq VAR_0x8004, FALSE, DewfordTown_EventScript_PhraseNotTrendyEnough
# 655 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_OfCourseIKnowAboutThat, MSGBOX_DEFAULT
# 656 "data/maps/DewfordTown/scripts.pory"
	release
# 657 "data/maps/DewfordTown/scripts.pory"
	end
# 658 "data/maps/DewfordTown/scripts.pory"

# 659 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_CancelNewTrendyPhrase::
# 660 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_HearOfAnyTrendsComeShareWithMe, MSGBOX_DEFAULT
# 661 "data/maps/DewfordTown/scripts.pory"
	release
# 662 "data/maps/DewfordTown/scripts.pory"
	end
# 663 "data/maps/DewfordTown/scripts.pory"

# 664 "data/maps/DewfordTown/scripts.pory"
DewfordTown_EventScript_PhraseNotTrendyEnough::
# 665 "data/maps/DewfordTown/scripts.pory"
	msgbox DewfordTown_Text_XHuhIThinkYIsCool, MSGBOX_DEFAULT
# 666 "data/maps/DewfordTown/scripts.pory"
	release
# 667 "data/maps/DewfordTown/scripts.pory"
	end
# 668 "data/maps/DewfordTown/scripts.pory"

# 669 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_TinyIslandCommunity:
# 670 "data/maps/DewfordTown/scripts.pory"
	.string "Dewford is a tiny island community.\n"
# 671 "data/maps/DewfordTown/scripts.pory"
	.string "If something gets trendy here,\l"
# 672 "data/maps/DewfordTown/scripts.pory"
	.string "everyone picks up on it right away.$"
# 673 "data/maps/DewfordTown/scripts.pory"

# 674 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_TownSign:
# 675 "data/maps/DewfordTown/scripts.pory"
	.string "Dewford Town\n"
# 676 "data/maps/DewfordTown/scripts.pory"
	.string "“A tiny island in the blue sea.”$"
# 677 "data/maps/DewfordTown/scripts.pory"

# 678 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_GymSign:
# 679 "data/maps/DewfordTown/scripts.pory"
	.string "Dewford Town Pokémon Gym\n"
# 680 "data/maps/DewfordTown/scripts.pory"
	.string "Leader: Brawly\l"
# 681 "data/maps/DewfordTown/scripts.pory"
	.string "“A big wave in fighting!”$"
# 682 "data/maps/DewfordTown/scripts.pory"

# 683 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_HallSign:
# 684 "data/maps/DewfordTown/scripts.pory"
	.string "Dewford Hall\n"
# 685 "data/maps/DewfordTown/scripts.pory"
	.string "“Everyone's information exchange!”$"
# 686 "data/maps/DewfordTown/scripts.pory"

# 687 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_BrineySign:
# 688 "data/maps/DewfordTown/scripts.pory"
	.string "Mr. Briney's House$"
# 689 "data/maps/DewfordTown/scripts.pory"

# 690 "data/maps/DewfordTown/scripts.pory"
Route104_Text_LandedInDewfordDeliverLetter:
# 691 "data/maps/DewfordTown/scripts.pory"
	.string "Mr. Briney: Ahoy!\n"
# 692 "data/maps/DewfordTown/scripts.pory"
	.string "We've hit land in DEWFORD.\p"
# 693 "data/maps/DewfordTown/scripts.pory"
	.string "I suppose you're off to deliver that\n"
# 694 "data/maps/DewfordTown/scripts.pory"
	.string "LETTER to, who was it now, STEVEN!$"
# 695 "data/maps/DewfordTown/scripts.pory"

# 696 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_SetSailBackToPetalburg:
# 697 "data/maps/DewfordTown/scripts.pory"
	.string "Mr. Briney: The ship is ready to go!\p"
# 698 "data/maps/DewfordTown/scripts.pory"
	.string "Have you delivered the Letter to Steven\n"
# 699 "data/maps/DewfordTown/scripts.pory"
	.string "yet?\p"
# 700 "data/maps/DewfordTown/scripts.pory"
	.string "If not, you'll find him in Granite Cave.\n"
# 701 "data/maps/DewfordTown/scripts.pory"
	.string "I'll be waiting.$"
# 702 "data/maps/DewfordTown/scripts.pory"

# 703 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_PetalburgWereSettingSail2:
# 704 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: PETALBURG it is, then!\p"
# 705 "data/maps/DewfordTown/scripts.pory"
	.string "Anchors aweigh!\n"
# 706 "data/maps/DewfordTown/scripts.pory"
	.string "PEEKO, we're setting sail, my darling!$"
# 707 "data/maps/DewfordTown/scripts.pory"

# 708 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_GoDeliverIllBeWaiting:
# 709 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: Then you go on and deliver\n"
# 710 "data/maps/DewfordTown/scripts.pory"
	.string "the LETTER. I'll be waiting.$"
# 711 "data/maps/DewfordTown/scripts.pory"

# 712 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_BrineyLandedInDewford:
# 713 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: Ahoy!\n"
# 714 "data/maps/DewfordTown/scripts.pory"
	.string "We've hit land in DEWFORD!\p"
# 715 "data/maps/DewfordTown/scripts.pory"
	.string "You just go on and tell me whenever\n"
# 716 "data/maps/DewfordTown/scripts.pory"
	.string "you want to set sail again!$"
# 717 "data/maps/DewfordTown/scripts.pory"

# 718 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_WhereAreWeBound:
# 719 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: Ahoy!\n"
# 720 "data/maps/DewfordTown/scripts.pory"
	.string "For you, I'll go out to sea anytime!\p"
# 721 "data/maps/DewfordTown/scripts.pory"
	.string "Now, my friend, where are we bound?$"
# 722 "data/maps/DewfordTown/scripts.pory"

# 723 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_PetalburgWereSettingSail:
# 724 "data/maps/DewfordTown/scripts.pory"
	.string "MR. BRINEY: PETALBURG, is it?\p"
# 725 "data/maps/DewfordTown/scripts.pory"
	.string "Anchors aweigh!\n"
# 726 "data/maps/DewfordTown/scripts.pory"
	.string "PEEKO, we're setting sail, my darling!$"
# 727 "data/maps/DewfordTown/scripts.pory"

# 728 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_SlateportWereSettingSail:
# 729 "data/maps/DewfordTown/scripts.pory"
	.string "Mr. Briney: Slateport, is it?\p"
# 730 "data/maps/DewfordTown/scripts.pory"
	.string "Anchors aweigh!\n"
# 731 "data/maps/DewfordTown/scripts.pory"
	.string "Peeko, we're setting sail, my darling!$"
# 732 "data/maps/DewfordTown/scripts.pory"

# 733 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_JustTellMeWhenYouNeedToSetSail:
# 734 "data/maps/DewfordTown/scripts.pory"
	.string "Mr. Briney: You just tell me whenever\n"
# 735 "data/maps/DewfordTown/scripts.pory"
	.string "you need to set sail!$"
# 736 "data/maps/DewfordTown/scripts.pory"

# 737 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_NeedToMakeSomeRepairs:
# 738 "data/maps/DewfordTown/scripts.pory"
	.string "Mr. Briney: Oh, {PLAYER}!\p"
# 739 "data/maps/DewfordTown/scripts.pory"
	.string "I'll never forget what you did for me\n"
# 740 "data/maps/DewfordTown/scripts.pory"
	.string "and Peeko.\p"
# 741 "data/maps/DewfordTown/scripts.pory"
	.string "I'd happily give you a ride in my ship,\n"
# 742 "data/maps/DewfordTown/scripts.pory"
	.string "but I need to make some repairs…\p"
# 743 "data/maps/DewfordTown/scripts.pory"
	.string "Why don't you challenge the Gym in the\n"
# 744 "data/maps/DewfordTown/scripts.pory"
	.string "meantime?$"
# 745 "data/maps/DewfordTown/scripts.pory"

# 746 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_CanOnlyMakeOneTrip:
# 747 "data/maps/DewfordTown/scripts.pory"
	.string "Mr. Briney: My ship, the Going Briney,\n"
# 748 "data/maps/DewfordTown/scripts.pory"
	.string "is ready to sail!\p"
# 749 "data/maps/DewfordTown/scripts.pory"
	.string "Unfortunately, it's on its last legs\n"
# 750 "data/maps/DewfordTown/scripts.pory"
	.string "and can only make one more trip…\p"
# 751 "data/maps/DewfordTown/scripts.pory"
	.string "But fot the man who saved Peeko it's\n"
# 752 "data/maps/DewfordTown/scripts.pory"
	.string "a trip I'll gladly make!\p"
# 753 "data/maps/DewfordTown/scripts.pory"
	.string "Once we land, you won't be able to use\n"
# 754 "data/maps/DewfordTown/scripts.pory"
	.string "a Pokécenter until you reach Slateport.\p"
# 755 "data/maps/DewfordTown/scripts.pory"
	.string "Are you ready?$"
# 756 "data/maps/DewfordTown/scripts.pory"

# 757 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_GettingItchToFish:
# 758 "data/maps/DewfordTown/scripts.pory"
	.string "This is a renowned fishing spot.\n"
# 759 "data/maps/DewfordTown/scripts.pory"
	.string "Are you getting the itch to fish?$"
# 760 "data/maps/DewfordTown/scripts.pory"

# 761 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_GiveYouOneOfMyRods:
# 762 "data/maps/DewfordTown/scripts.pory"
	.string "I hear you, and I like what\n"
# 763 "data/maps/DewfordTown/scripts.pory"
	.string "you're saying!\p"
# 764 "data/maps/DewfordTown/scripts.pory"
	.string "I'll give you one of my fishing RODS.$"
# 765 "data/maps/DewfordTown/scripts.pory"

# 766 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_ThrowInFishingAdvice:
# 767 "data/maps/DewfordTown/scripts.pory"
	.string "And, as an added bonus, I'll even throw\n"
# 768 "data/maps/DewfordTown/scripts.pory"
	.string "in a little fishing advice!\p"
# 769 "data/maps/DewfordTown/scripts.pory"
	.string "First, you want to face the water,\n"
# 770 "data/maps/DewfordTown/scripts.pory"
	.string "then use the ROD.\p"
# 771 "data/maps/DewfordTown/scripts.pory"
	.string "Focus your mind…\n"
# 772 "data/maps/DewfordTown/scripts.pory"
	.string "If you get a bite, pull on the ROD.\p"
# 773 "data/maps/DewfordTown/scripts.pory"
	.string "Sometimes you can snag something\n"
# 774 "data/maps/DewfordTown/scripts.pory"
	.string "immediately, but with bigger catches,\l"
# 775 "data/maps/DewfordTown/scripts.pory"
	.string "you need to time the pulls on your ROD\l"
# 776 "data/maps/DewfordTown/scripts.pory"
	.string "to haul them in.$"
# 777 "data/maps/DewfordTown/scripts.pory"

# 778 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_ThatsTooBadThen:
# 779 "data/maps/DewfordTown/scripts.pory"
	.string "Oh, is that so?\n"
# 780 "data/maps/DewfordTown/scripts.pory"
	.string "That's too bad, then.$"
# 781 "data/maps/DewfordTown/scripts.pory"

# 782 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_HowsYourFishing:
# 783 "data/maps/DewfordTown/scripts.pory"
	.string "Yo!\n"
# 784 "data/maps/DewfordTown/scripts.pory"
	.string "How's your fishing?$"
# 785 "data/maps/DewfordTown/scripts.pory"

# 786 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_GreatHaulInSomeBigOnes:
# 787 "data/maps/DewfordTown/scripts.pory"
	.string "Is that right! That's great!\n"
# 788 "data/maps/DewfordTown/scripts.pory"
	.string "Haul in some big ones!$"
# 789 "data/maps/DewfordTown/scripts.pory"

# 790 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_FishingAdvice:
# 791 "data/maps/DewfordTown/scripts.pory"
	.string "Oh, hey, don't get down on yourself!\n"
# 792 "data/maps/DewfordTown/scripts.pory"
	.string "I'll give you a little fishing advice.\p"
# 793 "data/maps/DewfordTown/scripts.pory"
	.string "First, you want to face the water,\n"
# 794 "data/maps/DewfordTown/scripts.pory"
	.string "then use the ROD.\p"
# 795 "data/maps/DewfordTown/scripts.pory"
	.string "Focus your mind…\n"
# 796 "data/maps/DewfordTown/scripts.pory"
	.string "If you get a bite, pull the ROD.\p"
# 797 "data/maps/DewfordTown/scripts.pory"
	.string "Sometimes you can snag something\n"
# 798 "data/maps/DewfordTown/scripts.pory"
	.string "immediately, but with bigger catches,\l"
# 799 "data/maps/DewfordTown/scripts.pory"
	.string "you need to time the pulls on your ROD\l"
# 800 "data/maps/DewfordTown/scripts.pory"
	.string "to haul them in.$"
# 801 "data/maps/DewfordTown/scripts.pory"

# 802 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_XIsTheBiggestHappeningThingRight:
# 803 "data/maps/DewfordTown/scripts.pory"
	.string "I like what's hip, happening, and trendy.\n"
# 804 "data/maps/DewfordTown/scripts.pory"
	.string "I'm always checking it out.\p"
# 805 "data/maps/DewfordTown/scripts.pory"
	.string "Listen, have you heard about this new\n"
# 806 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_1}”?\p"
# 807 "data/maps/DewfordTown/scripts.pory"
	.string "That's right!\n"
# 808 "data/maps/DewfordTown/scripts.pory"
	.string "Of course you know!\p"
# 809 "data/maps/DewfordTown/scripts.pory"
	.string "I mean, sheesh,\n"
# 810 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_1}”…\l"
# 811 "data/maps/DewfordTown/scripts.pory"
	.string "It's the hottest thing in cool!\p"
# 812 "data/maps/DewfordTown/scripts.pory"
	.string "Wherever you're from,\n"
# 813 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_1}”\l"
# 814 "data/maps/DewfordTown/scripts.pory"
	.string "is the biggest happening thing, right?$"
# 815 "data/maps/DewfordTown/scripts.pory"

# 816 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_TellMeWhatsNewAndIn:
# 817 "data/maps/DewfordTown/scripts.pory"
	.string "Hunh?\n"
# 818 "data/maps/DewfordTown/scripts.pory"
	.string "It's not the hip and happening thing?\p"
# 819 "data/maps/DewfordTown/scripts.pory"
	.string "Well, hey, you have to tell me,\n"
# 820 "data/maps/DewfordTown/scripts.pory"
	.string "what's new and what's “in”?$"
# 821 "data/maps/DewfordTown/scripts.pory"

# 822 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_OfCourseIKnowAboutThat:
# 823 "data/maps/DewfordTown/scripts.pory"
	.string "Hunh?\n"
# 824 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_2}”?\p"
# 825 "data/maps/DewfordTown/scripts.pory"
	.string "… …\p"
# 826 "data/maps/DewfordTown/scripts.pory"
	.string "…Uh… Yeah! That's right!\n"
# 827 "data/maps/DewfordTown/scripts.pory"
	.string "Yeah, I knew that! Knew it all along!\p"
# 828 "data/maps/DewfordTown/scripts.pory"
	.string "Of course I know about that!\n"
# 829 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_2},” right?\p"
# 830 "data/maps/DewfordTown/scripts.pory"
	.string "Yeah, that's it, it's there!\n"
# 831 "data/maps/DewfordTown/scripts.pory"
	.string "Isn't “{STR_VAR_2}”\l"
# 832 "data/maps/DewfordTown/scripts.pory"
	.string "the coolest, or what?\p"
# 833 "data/maps/DewfordTown/scripts.pory"
	.string "It's the hippest thing in hip.\n"
# 834 "data/maps/DewfordTown/scripts.pory"
	.string "You think I'd not know about it?\p"
# 835 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_1}”…\n"
# 836 "data/maps/DewfordTown/scripts.pory"
	.string "It's, like, so five minutes ago.\p"
# 837 "data/maps/DewfordTown/scripts.pory"
	.string "Now, “{STR_VAR_2}” is\n"
# 838 "data/maps/DewfordTown/scripts.pory"
	.string "what's vital and in tune with the times!$"
# 839 "data/maps/DewfordTown/scripts.pory"

# 840 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_XHuhIThinkYIsCool:
# 841 "data/maps/DewfordTown/scripts.pory"
	.string "Hmm…\n"
# 842 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_2},” huh?\p"
# 843 "data/maps/DewfordTown/scripts.pory"
	.string "But personally, I think\n"
# 844 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_1}”\l"
# 845 "data/maps/DewfordTown/scripts.pory"
	.string "is what's real in cool.$"
# 846 "data/maps/DewfordTown/scripts.pory"

# 847 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_HearOfAnyTrendsComeShareWithMe:
# 848 "data/maps/DewfordTown/scripts.pory"
	.string "Well, if you hear of any happening new\n"
# 849 "data/maps/DewfordTown/scripts.pory"
	.string "trends, come share them with me, okay?$"
# 850 "data/maps/DewfordTown/scripts.pory"

# 851 "data/maps/DewfordTown/scripts.pory"
DewfordTown_Text_YeahDefinitionOfInRightNow:
# 852 "data/maps/DewfordTown/scripts.pory"
	.string "Yeah, absolutely right!\p"
# 853 "data/maps/DewfordTown/scripts.pory"
	.string "“{STR_VAR_1}” is the\n"
# 854 "data/maps/DewfordTown/scripts.pory"
	.string "definition of “in” right now.$"

DewfordTown_EventScript_TrickHouseOpen_Text_0:
# 6 "data/maps/DewfordTown/scripts.pory"
	.string "Hey there, {PLAYER}!\p"
	.string "I'm just here to let you know that the\n"
	.string "next Trick House puzzle is open.\p"
	.string "That's all!\n"
	.string "I hope to see you there!$"
