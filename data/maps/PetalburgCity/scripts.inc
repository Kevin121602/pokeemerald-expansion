PetalburgCity_EventScript_TrickHouseOpen::
# 6 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 7 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 8 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_EventScript_TrickHouseOpen_Text_0
# 13 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 14 "data/maps/PetalburgCity/scripts.pory"
	delay 20
# 15 "data/maps/PetalburgCity/scripts.pory"
	applymovement 6, Route110_TrickHouse_Movement_TrickMasterSpin
# 16 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 17 "data/maps/PetalburgCity/scripts.pory"
	applymovement 6, Route110_TrickHouse_Movement_TrickMasterJumpAway
# 18 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 19 "data/maps/PetalburgCity/scripts.pory"
	removeobject 6
# 20 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_BALANCE_BADGE_TRICK_HOUSE_OPEN
# 21 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_TRICK_MASTER
# 22 "data/maps/PetalburgCity/scripts.pory"
	releaseall
	end


# 26 "data/maps/PetalburgCity/scripts.pory"

# 27 "data/maps/PetalburgCity/scripts.pory"

# 28 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_MapScripts::
# 29 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_OnTransition
# 30 "data/maps/PetalburgCity/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_OnFrame
# 31 "data/maps/PetalburgCity/scripts.pory"
	.byte 0
# 32 "data/maps/PetalburgCity/scripts.pory"

# 33 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnTransition:
# 34 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_VISITED_PETALBURG_CITY
# 35 "data/maps/PetalburgCity/scripts.pory"
	end
# 36 "data/maps/PetalburgCity/scripts.pory"

# 37 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_MoveGymBoyToWestEntrance::
# 38 "data/maps/PetalburgCity/scripts.pory"
	setobjectxyperm LOCALID_PETALBURG_STEVEN, 5, 11
# 39 "data/maps/PetalburgCity/scripts.pory"
	return
# 40 "data/maps/PetalburgCity/scripts.pory"

# 41 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_DisableMapNameAndMusic::
# 42 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MAP_NAME_POPUP
# 43 "data/maps/PetalburgCity/scripts.pory"
	savebgm MUS_FOLLOW_ME
# 44 "data/maps/PetalburgCity/scripts.pory"
	return
# 45 "data/maps/PetalburgCity/scripts.pory"

# 46 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_SetGymDoorsUnlocked::
# 47 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 7
# 48 "data/maps/PetalburgCity/scripts.pory"
	return
# 49 "data/maps/PetalburgCity/scripts.pory"

# 50 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_OnFrame:
# 51 "data/maps/PetalburgCity/scripts.pory"
	map_script_2 VAR_PETALBURG_CITY_STATE, 1, PetalburgCity_EventScript_StevenApproaches
# 52 "data/maps/PetalburgCity/scripts.pory"
	.2byte 0
# 53 "data/maps/PetalburgCity/scripts.pory"

# 54 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyTutorial::
# 55 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 56 "data/maps/PetalburgCity/scripts.pory"
	special SavePlayerParty
# 57 "data/maps/PetalburgCity/scripts.pory"
	special LoadWallyZigzagoon
# 58 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Movement_WallyTutorialWally
# 59 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WallyTutorialPlayer
# 60 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 61 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WatchMeCatchPokemon, MSGBOX_DEFAULT
# 62 "data/maps/PetalburgCity/scripts.pory"
	special StartWallyTutorialBattle
# 63 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 64 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_WallyIDidIt, MSGBOX_DEFAULT
# 65 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterLeft, MAP_PETALBURG_CITY
# 66 "data/maps/PetalburgCity/scripts.pory"
	waitmovement LOCALID_WALLY, MAP_PETALBURG_CITY
# 67 "data/maps/PetalburgCity/scripts.pory"
	msgbox Route102_Text_LetsGoBack, MSGBOX_DEFAULT
# 68 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 69 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MAP_NAME_POPUP
# 70 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 3
# 71 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 72 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_DONT_TRANSITION_MUSIC
# 73 "data/maps/PetalburgCity/scripts.pory"
	special LoadPlayerParty
# 74 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 75 "data/maps/PetalburgCity/scripts.pory"
	warp MAP_PETALBURG_CITY_GYM, 4, 108
# 76 "data/maps/PetalburgCity/scripts.pory"
	waitstate
# 77 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 78 "data/maps/PetalburgCity/scripts.pory"
	end
# 79 "data/maps/PetalburgCity/scripts.pory"

# 80 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_StevenApproaches::
# 81 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 82 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_STEVEN, Common_Movement_ExclamationMark
# 83 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 84 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 85 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_STEVEN, PetalburgCity_Movement_StevenApproachesPlayer
# 86 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 87 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ImGladIFoundYou, MSGBOX_DEFAULT
# 88 "data/maps/PetalburgCity/scripts.pory"
	waitmessage
# 89 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_STEVEN, Common_Movement_FaceDown
# 90 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 91 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 92 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_IdLoveToHelp, MSGBOX_DEFAULT
# 93 "data/maps/PetalburgCity/scripts.pory"
	waitmessage
# 94 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 95 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_STEVEN, PetalburgCity_Movement_StevenExits
# 96 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 97 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_PETALBURG_STEVEN
# 98 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_STEVEN
# 99 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TRAINERS
# 100 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 101 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
# 102 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 2
# 103 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 104 "data/maps/PetalburgCity/scripts.pory"
	end
# 105 "data/maps/PetalburgCity/scripts.pory"

# 106 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Boy::
# 107 "data/maps/PetalburgCity/scripts.pory"
	lock
# 108 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 109 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WaterReflection, MSGBOX_DEFAULT
# 110 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 111 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_BOY, Common_Movement_FaceOriginalDirection
# 112 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 113 "data/maps/PetalburgCity/scripts.pory"
	release
# 114 "data/maps/PetalburgCity/scripts.pory"
	end
# 115 "data/maps/PetalburgCity/scripts.pory"

# 116 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallysMom::
# 117 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WhereIsWally, MSGBOX_NPC
# 118 "data/maps/PetalburgCity/scripts.pory"
	end
# 119 "data/maps/PetalburgCity/scripts.pory"

# 120 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHousePlayer:
# 121 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 122 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 123 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 124 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 125 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 126 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 127 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 128 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 129 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 130 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 131 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 132 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 133 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 134 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 135 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 136 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 137 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 138 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 139 "data/maps/PetalburgCity/scripts.pory"

# 140 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHousePlayer:
# 141 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 142 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 143 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 144 "data/maps/PetalburgCity/scripts.pory"

# 145 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_StevenApproachesPlayer:
# 146 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 147 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 148 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 149 "data/maps/PetalburgCity/scripts.pory"

# 150 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_StevenExits:
# 151 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 152 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 153 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 154 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 155 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 156 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 157 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 158 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 159 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 160 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 161 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 162 "data/maps/PetalburgCity/scripts.pory"

# 163 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHouseWallysDad:
# 164 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 165 "data/maps/PetalburgCity/scripts.pory"
	set_invisible
# 166 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 167 "data/maps/PetalburgCity/scripts.pory"

# 168 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialPlayer:
# 169 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 170 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 171 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 172 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 173 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 174 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 175 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 176 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 177 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 178 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 179 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 180 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 181 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 182 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 183 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 184 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 185 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 186 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 187 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 188 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 189 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 190 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 191 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 192 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 193 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 194 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 195 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 196 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 197 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 198 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 199 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 200 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 201 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 202 "data/maps/PetalburgCity/scripts.pory"

# 203 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialWally:
# 204 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 205 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 206 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 207 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 208 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 209 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 210 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 211 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 212 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 213 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 214 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 215 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 216 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 217 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 218 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 219 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 220 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 221 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 222 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 223 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 224 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 225 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 226 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 227 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 228 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 229 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 230 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 231 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 232 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 233 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 234 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 235 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 236 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 237 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 238 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 239 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 240 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 241 "data/maps/PetalburgCity/scripts.pory"

# 242 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymSign::
# 243 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GymSign, MSGBOX_SIGN
# 244 "data/maps/PetalburgCity/scripts.pory"
	end
# 245 "data/maps/PetalburgCity/scripts.pory"

# 246 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_CitySign::
# 247 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
# 248 "data/maps/PetalburgCity/scripts.pory"
	end
# 249 "data/maps/PetalburgCity/scripts.pory"

# 250 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Gentleman::
# 251 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_FullPartyExplanation, MSGBOX_NPC
# 252 "data/maps/PetalburgCity/scripts.pory"
	end
# 253 "data/maps/PetalburgCity/scripts.pory"

# 254 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyHouseSign::
# 255 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
# 256 "data/maps/PetalburgCity/scripts.pory"
	end
# 257 "data/maps/PetalburgCity/scripts.pory"

# 258 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer0::
# 259 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 260 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 261 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 262 "data/maps/PetalburgCity/scripts.pory"
	end
# 263 "data/maps/PetalburgCity/scripts.pory"

# 264 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer1::
# 265 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 266 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 267 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 268 "data/maps/PetalburgCity/scripts.pory"
	end
# 269 "data/maps/PetalburgCity/scripts.pory"

# 270 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer2::
# 271 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 272 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 273 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 274 "data/maps/PetalburgCity/scripts.pory"
	end
# 275 "data/maps/PetalburgCity/scripts.pory"

# 276 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer3::
# 277 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 278 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 279 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 280 "data/maps/PetalburgCity/scripts.pory"
	end
# 281 "data/maps/PetalburgCity/scripts.pory"

# 282 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer::
# 283 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_STEVEN, Common_Movement_FacePlayer
# 284 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 285 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 286 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 287 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_STEVEN, Common_Movement_ExclamationMark
# 288 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 289 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_STEVEN, Common_Movement_Delay48
# 290 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 291 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_BoyApproachPlayer0
# 292 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_BoyApproachPlayer1
# 293 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_BoyApproachPlayer2
# 294 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_BoyApproachPlayer3
# 295 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_DEFAULT
# 296 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 297 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_LeadPlayerToGym0
# 298 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_LeadPlayerToGym1
# 299 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_LeadPlayerToGym2
# 300 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_LeadPlayerToGym3
# 301 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsPetalburgGym, MSGBOX_DEFAULT
# 302 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_STEVEN, Common_Movement_WalkInPlaceFasterRight
# 303 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 304 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 305 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsGymSign, MSGBOX_DEFAULT
# 306 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 307 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_STEVEN, PetalburgCity_Movement_BoyWalkAway
# 308 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 309 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 310 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 311 "data/maps/PetalburgCity/scripts.pory"
	end
# 312 "data/maps/PetalburgCity/scripts.pory"

# 313 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer0::
# 314 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_STEVEN, PetalburgCity_Movement_BoyApproachPlayer0
# 315 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 316 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 317 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 318 "data/maps/PetalburgCity/scripts.pory"
	return
# 319 "data/maps/PetalburgCity/scripts.pory"

# 320 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer1::
# 321 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_STEVEN, PetalburgCity_Movement_BoyApproachPlayer1
# 322 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 323 "data/maps/PetalburgCity/scripts.pory"
	return
# 324 "data/maps/PetalburgCity/scripts.pory"

# 325 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer2::
# 326 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_STEVEN, PetalburgCity_Movement_BoyApproachPlayer2
# 327 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 328 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 329 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 330 "data/maps/PetalburgCity/scripts.pory"
	return
# 331 "data/maps/PetalburgCity/scripts.pory"

# 332 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer3::
# 333 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_STEVEN, PetalburgCity_Movement_BoyApproachPlayer3
# 334 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 335 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 336 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 337 "data/maps/PetalburgCity/scripts.pory"
	return
# 338 "data/maps/PetalburgCity/scripts.pory"

# 339 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym0::
# 340 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_STEVEN, PetalburgCity_Movement_BoyWalkToGym0
# 341 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym0
# 342 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 343 "data/maps/PetalburgCity/scripts.pory"
	return
# 344 "data/maps/PetalburgCity/scripts.pory"

# 345 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym1::
# 346 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_STEVEN, PetalburgCity_Movement_BoyWalkToGym1
# 347 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym1
# 348 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 349 "data/maps/PetalburgCity/scripts.pory"
	return
# 350 "data/maps/PetalburgCity/scripts.pory"

# 351 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym2::
# 352 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_STEVEN, PetalburgCity_Movement_BoyWalkToGym2
# 353 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym2
# 354 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 355 "data/maps/PetalburgCity/scripts.pory"
	return
# 356 "data/maps/PetalburgCity/scripts.pory"

# 357 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym3::
# 358 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_STEVEN, PetalburgCity_Movement_BoyWalkToGym3
# 359 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym3
# 360 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 361 "data/maps/PetalburgCity/scripts.pory"
	return
# 362 "data/maps/PetalburgCity/scripts.pory"

# 363 "data/maps/PetalburgCity/scripts.pory"
@ Unused
# 364 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_Delay48::
# 365 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 366 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 367 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 368 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 369 "data/maps/PetalburgCity/scripts.pory"

# 370 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer0:
# 371 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 372 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 373 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 374 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 375 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 376 "data/maps/PetalburgCity/scripts.pory"

# 377 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer1:
# 378 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 379 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 380 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 381 "data/maps/PetalburgCity/scripts.pory"

# 382 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer2:
# 383 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 384 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 385 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 386 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 387 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 388 "data/maps/PetalburgCity/scripts.pory"

# 389 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer3:
# 390 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 391 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 392 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 393 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 394 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 395 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 396 "data/maps/PetalburgCity/scripts.pory"

# 397 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym0:
# 398 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 399 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 400 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 401 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 402 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 403 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 404 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 405 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 406 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 407 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 408 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 409 "data/maps/PetalburgCity/scripts.pory"

# 410 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym1:
# 411 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 412 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 413 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 414 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 415 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 416 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 417 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 418 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 419 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 420 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 421 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 422 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 423 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 424 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 425 "data/maps/PetalburgCity/scripts.pory"

# 426 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym2:
# 427 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 428 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 429 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 430 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 431 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 432 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 433 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 434 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 435 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 436 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 437 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 438 "data/maps/PetalburgCity/scripts.pory"

# 439 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym3:
# 440 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 441 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 442 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 443 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 444 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 445 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 446 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 447 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 448 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 449 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 450 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 451 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 452 "data/maps/PetalburgCity/scripts.pory"

# 453 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkAway:
# 454 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 455 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 456 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 457 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 458 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 459 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 460 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 461 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 462 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 463 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 464 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 465 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 466 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 467 "data/maps/PetalburgCity/scripts.pory"

# 468 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym0:
# 469 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 470 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 471 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 472 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 473 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 474 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 475 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 476 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 477 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 478 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 479 "data/maps/PetalburgCity/scripts.pory"

# 480 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym1:
# 481 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 482 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 483 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 484 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 485 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 486 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 487 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 488 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 489 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 490 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 491 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 492 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 493 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 494 "data/maps/PetalburgCity/scripts.pory"

# 495 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym2:
# 496 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 497 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 498 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 499 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 500 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 501 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 502 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 503 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 504 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 505 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 506 "data/maps/PetalburgCity/scripts.pory"

# 507 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym3:
# 508 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 509 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 510 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 511 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 512 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 513 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 514 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 515 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 516 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 517 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 518 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 519 "data/maps/PetalburgCity/scripts.pory"

# 520 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott0::
# 521 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 522 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 523 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 524 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 10
# 525 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 526 "data/maps/PetalburgCity/scripts.pory"
	end
# 527 "data/maps/PetalburgCity/scripts.pory"

# 528 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott1::
# 529 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 530 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 531 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 532 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 11
# 533 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 534 "data/maps/PetalburgCity/scripts.pory"
	end
# 535 "data/maps/PetalburgCity/scripts.pory"

# 536 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott2::
# 537 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 538 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 539 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 540 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 12
# 541 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 542 "data/maps/PetalburgCity/scripts.pory"
	end
# 543 "data/maps/PetalburgCity/scripts.pory"

# 544 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott3::
# 545 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 546 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 547 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 548 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 13
# 549 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 550 "data/maps/PetalburgCity/scripts.pory"
	end
# 551 "data/maps/PetalburgCity/scripts.pory"

# 552 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott::
# 553 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottStartWalkLeft
# 554 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 555 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 556 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_ExclamationMark
# 557 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 558 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_Delay48
# 559 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 560 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottApproachPlayer
# 561 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 562 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 563 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 564 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_STATE, 1
# 565 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouATrainer, MSGBOX_DEFAULT
# 566 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 567 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 568 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 569 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 570 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WellMaybeNot, MSGBOX_DEFAULT
# 571 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 572 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 573 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 574 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 575 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ImLookingForTalentedTrainers, MSGBOX_DEFAULT
# 576 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 577 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_ScottExit0
# 578 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_ScottExit1
# 579 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_ScottExit2
# 580 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_ScottExit3
# 581 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
# 582 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 583 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 584 "data/maps/PetalburgCity/scripts.pory"
	end
# 585 "data/maps/PetalburgCity/scripts.pory"

# 586 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit0::
# 587 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit0
# 588 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit0
# 589 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 590 "data/maps/PetalburgCity/scripts.pory"
	return
# 591 "data/maps/PetalburgCity/scripts.pory"

# 592 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit1::
# 593 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit1
# 594 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit1
# 595 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 596 "data/maps/PetalburgCity/scripts.pory"
	return
# 597 "data/maps/PetalburgCity/scripts.pory"

# 598 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit2::
# 599 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit2
# 600 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit2
# 601 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 602 "data/maps/PetalburgCity/scripts.pory"
	return
# 603 "data/maps/PetalburgCity/scripts.pory"

# 604 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit3::
# 605 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit3
# 606 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit3
# 607 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 608 "data/maps/PetalburgCity/scripts.pory"
	return
# 609 "data/maps/PetalburgCity/scripts.pory"

# 610 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottStartWalkLeft:
# 611 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 612 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 613 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 614 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 615 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 616 "data/maps/PetalburgCity/scripts.pory"

# 617 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottApproachPlayer:
# 618 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 619 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 620 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 621 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 622 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 623 "data/maps/PetalburgCity/scripts.pory"

# 624 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit0:
# 625 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 626 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 627 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 628 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 629 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 630 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 631 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 632 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 633 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 634 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 635 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 636 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 637 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 638 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 639 "data/maps/PetalburgCity/scripts.pory"

# 640 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit0:
# 641 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 642 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 643 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 644 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 645 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 646 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 647 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 648 "data/maps/PetalburgCity/scripts.pory"

# 649 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit1:
# 650 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 651 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 652 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 653 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 654 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 655 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 656 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 657 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 658 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 659 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 660 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 661 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 662 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 663 "data/maps/PetalburgCity/scripts.pory"

# 664 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit1:
# 665 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 666 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 667 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 668 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 669 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 670 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 671 "data/maps/PetalburgCity/scripts.pory"

# 672 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit2:
# 673 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 674 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 675 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 676 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 677 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 678 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 679 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 680 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 681 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 682 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 683 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 684 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 685 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 686 "data/maps/PetalburgCity/scripts.pory"

# 687 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit2:
# 688 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 689 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 690 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 691 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 692 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 693 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 694 "data/maps/PetalburgCity/scripts.pory"

# 695 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit3:
# 696 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 697 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 698 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 699 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 700 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 701 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 702 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 703 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 704 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 705 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 706 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 707 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 708 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 709 "data/maps/PetalburgCity/scripts.pory"

# 710 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit3:
# 711 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 712 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 713 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 714 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 715 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 716 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 717 "data/maps/PetalburgCity/scripts.pory"

# 718 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymBoy::
# 719 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_NPC
# 720 "data/maps/PetalburgCity/scripts.pory"
	end
# 721 "data/maps/PetalburgCity/scripts.pory"

# 722 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WhereIsWally:
# 723 "data/maps/PetalburgCity/scripts.pory"
	.string "Where has our WALLY gone?\p"
# 724 "data/maps/PetalburgCity/scripts.pory"
	.string "We have to leave for VERDANTURF TOWN\n"
# 725 "data/maps/PetalburgCity/scripts.pory"
	.string "very soon…$"
# 726 "data/maps/PetalburgCity/scripts.pory"

# 727 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouRookieTrainer:
# 728 "data/maps/PetalburgCity/scripts.pory"
	.string "Hiya! Are you maybe…\n"
# 729 "data/maps/PetalburgCity/scripts.pory"
	.string "A rookie Trainer?\p"
# 730 "data/maps/PetalburgCity/scripts.pory"
	.string "Do you know what Pokémon Trainers\n"
# 731 "data/maps/PetalburgCity/scripts.pory"
	.string "do when they reach a new town?\p"
# 732 "data/maps/PetalburgCity/scripts.pory"
	.string "They first check what kind of Gym\n"
# 733 "data/maps/PetalburgCity/scripts.pory"
	.string "is in the town.$"
# 734 "data/maps/PetalburgCity/scripts.pory"

# 735 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsPetalburgGym:
# 736 "data/maps/PetalburgCity/scripts.pory"
	.string "See? This is Petalburg City's Gym.$"
# 737 "data/maps/PetalburgCity/scripts.pory"

# 738 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsGymSign:
# 739 "data/maps/PetalburgCity/scripts.pory"
	.string "This is the Gym's sign. Look for it\n"
# 740 "data/maps/PetalburgCity/scripts.pory"
	.string "whenever you're looking for a Gym.$"
# 741 "data/maps/PetalburgCity/scripts.pory"

# 742 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WaterReflection:
# 743 "data/maps/PetalburgCity/scripts.pory"
	.string "My face is reflected in the water.\p"
# 744 "data/maps/PetalburgCity/scripts.pory"
	.string "It's a shining grin full of hope…\p"
# 745 "data/maps/PetalburgCity/scripts.pory"
	.string "Or it could be a look of somber silence\n"
# 746 "data/maps/PetalburgCity/scripts.pory"
	.string "struggling with fear…\p"
# 747 "data/maps/PetalburgCity/scripts.pory"
	.string "What do you see reflected in your face?$"
# 748 "data/maps/PetalburgCity/scripts.pory"

# 749 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_FullPartyExplanation:
# 750 "data/maps/PetalburgCity/scripts.pory"
	.string "Let's say you have six Pokémon.\n"
# 751 "data/maps/PetalburgCity/scripts.pory"
	.string "If you catch another one…\p"
# 752 "data/maps/PetalburgCity/scripts.pory"
	.string "It is automatically sent to a Storage\n"
# 753 "data/maps/PetalburgCity/scripts.pory"
	.string "Box over a PC connection.$"
# 754 "data/maps/PetalburgCity/scripts.pory"

# 755 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GymSign:
# 756 "data/maps/PetalburgCity/scripts.pory"
	.string "Petalburg City Pokémon Gym\n"
# 757 "data/maps/PetalburgCity/scripts.pory"
	.string "Leader: Norman\l"
# 758 "data/maps/PetalburgCity/scripts.pory"
	.string "“A man in pursuit of power!”$"
# 759 "data/maps/PetalburgCity/scripts.pory"

# 760 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_CitySign:
# 761 "data/maps/PetalburgCity/scripts.pory"
	.string "Petalburg City\n"
# 762 "data/maps/PetalburgCity/scripts.pory"
	.string "“Where people mingle with nature.”$"
# 763 "data/maps/PetalburgCity/scripts.pory"

# 764 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WallyHouseSign:
# 765 "data/maps/PetalburgCity/scripts.pory"
	.string "Wally's House$"
# 766 "data/maps/PetalburgCity/scripts.pory"

# 767 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouATrainer:
# 768 "data/maps/PetalburgCity/scripts.pory"
	.string "Excuse me!\p"
# 769 "data/maps/PetalburgCity/scripts.pory"
	.string "Let me guess, from the way you're\n"
# 770 "data/maps/PetalburgCity/scripts.pory"
	.string "dressed, are you a Pokémon Trainer?$"
# 771 "data/maps/PetalburgCity/scripts.pory"

# 772 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WellMaybeNot:
# 773 "data/maps/PetalburgCity/scripts.pory"
	.string "… … … … … …\p"
# 774 "data/maps/PetalburgCity/scripts.pory"
	.string "Well, maybe not.\n"
# 775 "data/maps/PetalburgCity/scripts.pory"
	.string "Your clothes aren't all that dirty.\p"
# 776 "data/maps/PetalburgCity/scripts.pory"
	.string "You're either a rookie Trainer,\n"
# 777 "data/maps/PetalburgCity/scripts.pory"
	.string "or maybe you're just an ordinary kid.$"
# 778 "data/maps/PetalburgCity/scripts.pory"

# 779 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ImLookingForTalentedTrainers:
# 780 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm roaming the land in search of\n"
# 781 "data/maps/PetalburgCity/scripts.pory"
	.string "talented Trainers.\p"
# 782 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm sorry to have taken your time.$"
# 783 "data/maps/PetalburgCity/scripts.pory"

# 784 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ImGladIFoundYou:
# 785 "data/maps/PetalburgCity/scripts.pory"
	.string "Oh, {PLAYER}!\p"
# 786 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm glad I found you here.\p"
# 787 "data/maps/PetalburgCity/scripts.pory"
	.string "I heard about how you fended off Team\n"
# 788 "data/maps/PetalburgCity/scripts.pory"
	.string "Aqua at Slateport and I have a favour\l"
# 789 "data/maps/PetalburgCity/scripts.pory"
	.string "to ask.\p"
# 790 "data/maps/PetalburgCity/scripts.pory"
	.string "My colleague, Professor Cozmo had a\n"
# 791 "data/maps/PetalburgCity/scripts.pory"
	.string "meteorite stolen from him recently.\p"
# 792 "data/maps/PetalburgCity/scripts.pory"
	.string "Not by Team Aqua, but by Team Magma,\n"
# 793 "data/maps/PetalburgCity/scripts.pory"
	.string "a rival gang.\p"
# 794 "data/maps/PetalburgCity/scripts.pory"
	.string "They've taken the meteorite to Mt.\n"
# 795 "data/maps/PetalburgCity/scripts.pory"
	.string "Chimney, near Lavaridge.\p"
# 796 "data/maps/PetalburgCity/scripts.pory"
	.string "To make matters worse, some of their\n"
# 797 "data/maps/PetalburgCity/scripts.pory"
	.string "goons are blocking the entrance to\l"
# 798 "data/maps/PetalburgCity/scripts.pory"
	.string "the Cable Car.\p"
# 799 "data/maps/PetalburgCity/scripts.pory"
	.string "Normally, it would be impossible to\n"
# 800 "data/maps/PetalburgCity/scripts.pory"
	.string "travel up Mt. Chimney without the\l"
# 801 "data/maps/PetalburgCity/scripts.pory"
	.string "Cable Car, but I have an idea.\p"
# 802 "data/maps/PetalburgCity/scripts.pory"
	.string "There is a man from Kanto who trains\n"
# 803 "data/maps/PetalburgCity/scripts.pory"
	.string "in the Route 111 desert.\p"
# 804 "data/maps/PetalburgCity/scripts.pory"
	.string "This man is said to be extremely\n"
# 805 "data/maps/PetalburgCity/scripts.pory"
	.string "proficient in martial arts.\p"
# 806 "data/maps/PetalburgCity/scripts.pory"
	.string "It's possible that he could break\n"
# 807 "data/maps/PetalburgCity/scripts.pory"
	.string "the rocks blocking Jagged Pass, and\l"
# 808 "data/maps/PetalburgCity/scripts.pory"
	.string "open up another path to Mt. Chimney.$"
# 809 "data/maps/PetalburgCity/scripts.pory"

# 810 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_IdLoveToHelp:
# 811 "data/maps/PetalburgCity/scripts.pory"
	.string "I'd love to help, but I just caught\n"
# 812 "data/maps/PetalburgCity/scripts.pory"
	.string "wind of an even more sinister plan in\l"
# 813 "data/maps/PetalburgCity/scripts.pory"
	.string "my hometown of Mossdeep.\p"
# 814 "data/maps/PetalburgCity/scripts.pory"
	.string "Best of luck, {PLAYER}!$"

PetalburgCity_EventScript_TrickHouseOpen_Text_0:
# 8 "data/maps/PetalburgCity/scripts.pory"
	.string "Hey there, {PLAYER}!\p"
	.string "I'm just here to let you know that the\n"
	.string "next Trick House puzzle is open.\p"
	.string "That's all!\n"
	.string "I hope to see you there!$"
