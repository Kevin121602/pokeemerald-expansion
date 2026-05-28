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
	playse SE_PIN
# 83 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_STEVEN, Common_Movement_ExclamationMark
# 84 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 85 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 86 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_STEVEN, PetalburgCity_Movement_StevenApproachesPlayer
# 87 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 88 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ImGladIFoundYou, MSGBOX_DEFAULT
# 89 "data/maps/PetalburgCity/scripts.pory"
	waitmessage
# 90 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_STEVEN, Common_Movement_FaceDown
# 91 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 92 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 93 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_IdLoveToHelp, MSGBOX_DEFAULT
# 94 "data/maps/PetalburgCity/scripts.pory"
	waitmessage
# 95 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 96 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_STEVEN, PetalburgCity_Movement_StevenExits
# 97 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 98 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_PETALBURG_STEVEN
# 99 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_STEVEN
# 100 "data/maps/PetalburgCity/scripts.pory"
	setflag FLAG_HIDE_MT_CHIMNEY_TRAINERS
# 101 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_TEAM_MAGMA
# 102 "data/maps/PetalburgCity/scripts.pory"
	clearflag FLAG_HIDE_MT_CHIMNEY_TEAM_AQUA
# 103 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 2
# 104 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 105 "data/maps/PetalburgCity/scripts.pory"
	end
# 106 "data/maps/PetalburgCity/scripts.pory"

# 107 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Boy::
# 108 "data/maps/PetalburgCity/scripts.pory"
	lock
# 109 "data/maps/PetalburgCity/scripts.pory"
	faceplayer
# 110 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WaterReflection, MSGBOX_DEFAULT
# 111 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 112 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_BOY, Common_Movement_FaceOriginalDirection
# 113 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 114 "data/maps/PetalburgCity/scripts.pory"
	release
# 115 "data/maps/PetalburgCity/scripts.pory"
	end
# 116 "data/maps/PetalburgCity/scripts.pory"

# 117 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallysMom::
# 118 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WhereIsWally, MSGBOX_NPC
# 119 "data/maps/PetalburgCity/scripts.pory"
	end
# 120 "data/maps/PetalburgCity/scripts.pory"

# 121 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkToWallyHousePlayer:
# 122 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 123 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 124 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 125 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_left
# 134 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 135 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 136 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 137 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 138 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 139 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 140 "data/maps/PetalburgCity/scripts.pory"

# 141 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHousePlayer:
# 142 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 143 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 144 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 145 "data/maps/PetalburgCity/scripts.pory"

# 146 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_StevenApproachesPlayer:
# 147 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 148 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 149 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 150 "data/maps/PetalburgCity/scripts.pory"

# 151 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_StevenExits:
# 152 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 153 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_left
# 162 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 163 "data/maps/PetalburgCity/scripts.pory"

# 164 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WalkInsideHouseWallysDad:
# 165 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 166 "data/maps/PetalburgCity/scripts.pory"
	set_invisible
# 167 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 168 "data/maps/PetalburgCity/scripts.pory"

# 169 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialPlayer:
# 170 "data/maps/PetalburgCity/scripts.pory"
	delay_8
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
	walk_down
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
	walk_right
# 199 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 200 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 201 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 202 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 203 "data/maps/PetalburgCity/scripts.pory"

# 204 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_WallyTutorialWally:
# 205 "data/maps/PetalburgCity/scripts.pory"
	delay_8
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
	walk_down
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
	walk_right
# 233 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 234 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 235 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 236 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 237 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 238 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 239 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 240 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_right
# 241 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 242 "data/maps/PetalburgCity/scripts.pory"

# 243 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymSign::
# 244 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_GymSign, MSGBOX_SIGN
# 245 "data/maps/PetalburgCity/scripts.pory"
	end
# 246 "data/maps/PetalburgCity/scripts.pory"

# 247 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_CitySign::
# 248 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
# 249 "data/maps/PetalburgCity/scripts.pory"
	end
# 250 "data/maps/PetalburgCity/scripts.pory"

# 251 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Gentleman::
# 252 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_FullPartyExplanation, MSGBOX_NPC
# 253 "data/maps/PetalburgCity/scripts.pory"
	end
# 254 "data/maps/PetalburgCity/scripts.pory"

# 255 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_WallyHouseSign::
# 256 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
# 257 "data/maps/PetalburgCity/scripts.pory"
	end
# 258 "data/maps/PetalburgCity/scripts.pory"

# 259 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer0::
# 260 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 261 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 262 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 263 "data/maps/PetalburgCity/scripts.pory"
	end
# 264 "data/maps/PetalburgCity/scripts.pory"

# 265 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer1::
# 266 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 267 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 268 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 269 "data/maps/PetalburgCity/scripts.pory"
	end
# 270 "data/maps/PetalburgCity/scripts.pory"

# 271 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer2::
# 272 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 273 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 274 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 275 "data/maps/PetalburgCity/scripts.pory"
	end
# 276 "data/maps/PetalburgCity/scripts.pory"

# 277 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer3::
# 278 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 279 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 280 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_ShowGymToPlayer
# 281 "data/maps/PetalburgCity/scripts.pory"
	end
# 282 "data/maps/PetalburgCity/scripts.pory"

# 283 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ShowGymToPlayer::
# 284 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_STEVEN, Common_Movement_FacePlayer
# 285 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 286 "data/maps/PetalburgCity/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 287 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 288 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_STEVEN, Common_Movement_ExclamationMark
# 289 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 290 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_STEVEN, Common_Movement_Delay48
# 291 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 292 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_BoyApproachPlayer0
# 293 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_BoyApproachPlayer1
# 294 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_BoyApproachPlayer2
# 295 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_BoyApproachPlayer3
# 296 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_DEFAULT
# 297 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 298 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_LeadPlayerToGym0
# 299 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_LeadPlayerToGym1
# 300 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_LeadPlayerToGym2
# 301 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_LeadPlayerToGym3
# 302 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsPetalburgGym, MSGBOX_DEFAULT
# 303 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_STEVEN, Common_Movement_WalkInPlaceFasterRight
# 304 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 305 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 306 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ThisIsGymSign, MSGBOX_DEFAULT
# 307 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 308 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_STEVEN, PetalburgCity_Movement_BoyWalkAway
# 309 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 310 "data/maps/PetalburgCity/scripts.pory"
	fadedefaultbgm
# 311 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 312 "data/maps/PetalburgCity/scripts.pory"
	end
# 313 "data/maps/PetalburgCity/scripts.pory"

# 314 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer0::
# 315 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_STEVEN, PetalburgCity_Movement_BoyApproachPlayer0
# 316 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 317 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 318 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 319 "data/maps/PetalburgCity/scripts.pory"
	return
# 320 "data/maps/PetalburgCity/scripts.pory"

# 321 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer1::
# 322 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_STEVEN, PetalburgCity_Movement_BoyApproachPlayer1
# 323 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 324 "data/maps/PetalburgCity/scripts.pory"
	return
# 325 "data/maps/PetalburgCity/scripts.pory"

# 326 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer2::
# 327 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_STEVEN, PetalburgCity_Movement_BoyApproachPlayer2
# 328 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 329 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 330 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 331 "data/maps/PetalburgCity/scripts.pory"
	return
# 332 "data/maps/PetalburgCity/scripts.pory"

# 333 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_BoyApproachPlayer3::
# 334 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_STEVEN, PetalburgCity_Movement_BoyApproachPlayer3
# 335 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 336 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 337 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 338 "data/maps/PetalburgCity/scripts.pory"
	return
# 339 "data/maps/PetalburgCity/scripts.pory"

# 340 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym0::
# 341 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_STEVEN, PetalburgCity_Movement_BoyWalkToGym0
# 342 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym0
# 343 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 344 "data/maps/PetalburgCity/scripts.pory"
	return
# 345 "data/maps/PetalburgCity/scripts.pory"

# 346 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym1::
# 347 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_STEVEN, PetalburgCity_Movement_BoyWalkToGym1
# 348 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym1
# 349 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 350 "data/maps/PetalburgCity/scripts.pory"
	return
# 351 "data/maps/PetalburgCity/scripts.pory"

# 352 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym2::
# 353 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_STEVEN, PetalburgCity_Movement_BoyWalkToGym2
# 354 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym2
# 355 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 356 "data/maps/PetalburgCity/scripts.pory"
	return
# 357 "data/maps/PetalburgCity/scripts.pory"

# 358 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_LeadPlayerToGym3::
# 359 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_PETALBURG_STEVEN, PetalburgCity_Movement_BoyWalkToGym3
# 360 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym3
# 361 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 362 "data/maps/PetalburgCity/scripts.pory"
	return
# 363 "data/maps/PetalburgCity/scripts.pory"

# 364 "data/maps/PetalburgCity/scripts.pory"
@ Unused
# 365 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_Delay48::
# 366 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 367 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 368 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 369 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 370 "data/maps/PetalburgCity/scripts.pory"

# 371 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer0:
# 372 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 373 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 374 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 375 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 376 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 377 "data/maps/PetalburgCity/scripts.pory"

# 378 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer1:
# 379 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 380 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 381 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 382 "data/maps/PetalburgCity/scripts.pory"

# 383 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer2:
# 384 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 385 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 386 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 387 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 388 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 389 "data/maps/PetalburgCity/scripts.pory"

# 390 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyApproachPlayer3:
# 391 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 392 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 393 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 394 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 395 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 396 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 397 "data/maps/PetalburgCity/scripts.pory"

# 398 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym0:
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
	walk_right
# 406 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 407 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 408 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 409 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 410 "data/maps/PetalburgCity/scripts.pory"

# 411 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym1:
# 412 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_right
# 421 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 422 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 423 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 424 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 425 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 426 "data/maps/PetalburgCity/scripts.pory"

# 427 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym2:
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
	walk_right
# 435 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 436 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 437 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 438 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 439 "data/maps/PetalburgCity/scripts.pory"

# 440 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkToGym3:
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
	walk_right
# 448 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 449 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 450 "data/maps/PetalburgCity/scripts.pory"
	walk_right
# 451 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 452 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 453 "data/maps/PetalburgCity/scripts.pory"

# 454 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_BoyWalkAway:
# 455 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_left
# 467 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 468 "data/maps/PetalburgCity/scripts.pory"

# 469 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym0:
# 470 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_right
# 478 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 479 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 480 "data/maps/PetalburgCity/scripts.pory"

# 481 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym1:
# 482 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 483 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 484 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_right
# 492 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 493 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 494 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 495 "data/maps/PetalburgCity/scripts.pory"

# 496 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym2:
# 497 "data/maps/PetalburgCity/scripts.pory"
	walk_up
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
	walk_right
# 505 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 506 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 507 "data/maps/PetalburgCity/scripts.pory"

# 508 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWalkToGym3:
# 509 "data/maps/PetalburgCity/scripts.pory"
	walk_up
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
	walk_right
# 517 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 518 "data/maps/PetalburgCity/scripts.pory"
	walk_up
# 519 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 520 "data/maps/PetalburgCity/scripts.pory"

# 521 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott0::
# 522 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 523 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 524 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 0
# 525 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 10
# 526 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 527 "data/maps/PetalburgCity/scripts.pory"
	end
# 528 "data/maps/PetalburgCity/scripts.pory"

# 529 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott1::
# 530 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 531 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 532 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 1
# 533 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 11
# 534 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 535 "data/maps/PetalburgCity/scripts.pory"
	end
# 536 "data/maps/PetalburgCity/scripts.pory"

# 537 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott2::
# 538 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 539 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 540 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 2
# 541 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 12
# 542 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 543 "data/maps/PetalburgCity/scripts.pory"
	end
# 544 "data/maps/PetalburgCity/scripts.pory"

# 545 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott3::
# 546 "data/maps/PetalburgCity/scripts.pory"
	lockall
# 547 "data/maps/PetalburgCity/scripts.pory"
	addobject LOCALID_SCOTT
# 548 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_0x8008, 3
# 549 "data/maps/PetalburgCity/scripts.pory"
	setobjectxy LOCALID_SCOTT, 13, 13
# 550 "data/maps/PetalburgCity/scripts.pory"
	goto PetalburgCity_EventScript_Scott
# 551 "data/maps/PetalburgCity/scripts.pory"
	end
# 552 "data/maps/PetalburgCity/scripts.pory"

# 553 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_Scott::
# 554 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottStartWalkLeft
# 555 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 556 "data/maps/PetalburgCity/scripts.pory"
	playse SE_PIN
# 557 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_ExclamationMark
# 558 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 559 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_Delay48
# 560 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 561 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottApproachPlayer
# 562 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 563 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 564 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 565 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_STATE, 1
# 566 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouATrainer, MSGBOX_DEFAULT
# 567 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 568 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterRight
# 569 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 570 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 571 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_WellMaybeNot, MSGBOX_DEFAULT
# 572 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 573 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterLeft
# 574 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 575 "data/maps/PetalburgCity/scripts.pory"
	delay 30
# 576 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_ImLookingForTalentedTrainers, MSGBOX_DEFAULT
# 577 "data/maps/PetalburgCity/scripts.pory"
	closemessage
# 578 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_ScottExit0
# 579 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_ScottExit1
# 580 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_ScottExit2
# 581 "data/maps/PetalburgCity/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_ScottExit3
# 582 "data/maps/PetalburgCity/scripts.pory"
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
# 583 "data/maps/PetalburgCity/scripts.pory"
	removeobject LOCALID_SCOTT
# 584 "data/maps/PetalburgCity/scripts.pory"
	releaseall
# 585 "data/maps/PetalburgCity/scripts.pory"
	end
# 586 "data/maps/PetalburgCity/scripts.pory"

# 587 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit0::
# 588 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit0
# 589 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit0
# 590 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 591 "data/maps/PetalburgCity/scripts.pory"
	return
# 592 "data/maps/PetalburgCity/scripts.pory"

# 593 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit1::
# 594 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit1
# 595 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit1
# 596 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 597 "data/maps/PetalburgCity/scripts.pory"
	return
# 598 "data/maps/PetalburgCity/scripts.pory"

# 599 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit2::
# 600 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit2
# 601 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit2
# 602 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 603 "data/maps/PetalburgCity/scripts.pory"
	return
# 604 "data/maps/PetalburgCity/scripts.pory"

# 605 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_ScottExit3::
# 606 "data/maps/PetalburgCity/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit3
# 607 "data/maps/PetalburgCity/scripts.pory"
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit3
# 608 "data/maps/PetalburgCity/scripts.pory"
	waitmovement 0
# 609 "data/maps/PetalburgCity/scripts.pory"
	return
# 610 "data/maps/PetalburgCity/scripts.pory"

# 611 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottStartWalkLeft:
# 612 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 613 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 614 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 615 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 616 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 617 "data/maps/PetalburgCity/scripts.pory"

# 618 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottApproachPlayer:
# 619 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 620 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 621 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 622 "data/maps/PetalburgCity/scripts.pory"
	walk_left
# 623 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 624 "data/maps/PetalburgCity/scripts.pory"

# 625 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit0:
# 626 "data/maps/PetalburgCity/scripts.pory"
	walk_down
# 627 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_left
# 639 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 640 "data/maps/PetalburgCity/scripts.pory"

# 641 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit0:
# 642 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 643 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 644 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 645 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 646 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 647 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 648 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 649 "data/maps/PetalburgCity/scripts.pory"

# 650 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit1:
# 651 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_left
# 663 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 664 "data/maps/PetalburgCity/scripts.pory"

# 665 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit1:
# 666 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 667 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 668 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 669 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 670 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 671 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 672 "data/maps/PetalburgCity/scripts.pory"

# 673 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit2:
# 674 "data/maps/PetalburgCity/scripts.pory"
	walk_down
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
	walk_left
# 686 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 687 "data/maps/PetalburgCity/scripts.pory"

# 688 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit2:
# 689 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 690 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_down
# 691 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 692 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 693 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 694 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 695 "data/maps/PetalburgCity/scripts.pory"

# 696 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_ScottExit3:
# 697 "data/maps/PetalburgCity/scripts.pory"
	walk_up
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
	walk_left
# 709 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 710 "data/maps/PetalburgCity/scripts.pory"

# 711 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Movement_PlayerWatchScottExit3:
# 712 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 713 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_up
# 714 "data/maps/PetalburgCity/scripts.pory"
	delay_16
# 715 "data/maps/PetalburgCity/scripts.pory"
	delay_8
# 716 "data/maps/PetalburgCity/scripts.pory"
	walk_in_place_faster_left
# 717 "data/maps/PetalburgCity/scripts.pory"
	step_end
# 718 "data/maps/PetalburgCity/scripts.pory"

# 719 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_EventScript_GymBoy::
# 720 "data/maps/PetalburgCity/scripts.pory"
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_NPC
# 721 "data/maps/PetalburgCity/scripts.pory"
	end
# 722 "data/maps/PetalburgCity/scripts.pory"

# 723 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WhereIsWally:
# 724 "data/maps/PetalburgCity/scripts.pory"
	.string "Where has our WALLY gone?\p"
# 725 "data/maps/PetalburgCity/scripts.pory"
	.string "We have to leave for VERDANTURF TOWN\n"
# 726 "data/maps/PetalburgCity/scripts.pory"
	.string "very soon…$"
# 727 "data/maps/PetalburgCity/scripts.pory"

# 728 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouRookieTrainer:
# 729 "data/maps/PetalburgCity/scripts.pory"
	.string "Hiya! Are you maybe…\n"
# 730 "data/maps/PetalburgCity/scripts.pory"
	.string "A rookie Trainer?\p"
# 731 "data/maps/PetalburgCity/scripts.pory"
	.string "Do you know what Pokémon Trainers\n"
# 732 "data/maps/PetalburgCity/scripts.pory"
	.string "do when they reach a new town?\p"
# 733 "data/maps/PetalburgCity/scripts.pory"
	.string "They first check what kind of Gym\n"
# 734 "data/maps/PetalburgCity/scripts.pory"
	.string "is in the town.$"
# 735 "data/maps/PetalburgCity/scripts.pory"

# 736 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsPetalburgGym:
# 737 "data/maps/PetalburgCity/scripts.pory"
	.string "See? This is Petalburg City's Gym.$"
# 738 "data/maps/PetalburgCity/scripts.pory"

# 739 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ThisIsGymSign:
# 740 "data/maps/PetalburgCity/scripts.pory"
	.string "This is the Gym's sign. Look for it\n"
# 741 "data/maps/PetalburgCity/scripts.pory"
	.string "whenever you're looking for a Gym.$"
# 742 "data/maps/PetalburgCity/scripts.pory"

# 743 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WaterReflection:
# 744 "data/maps/PetalburgCity/scripts.pory"
	.string "My face is reflected in the water.\p"
# 745 "data/maps/PetalburgCity/scripts.pory"
	.string "It's a shining grin full of hope…\p"
# 746 "data/maps/PetalburgCity/scripts.pory"
	.string "Or it could be a look of somber silence\n"
# 747 "data/maps/PetalburgCity/scripts.pory"
	.string "struggling with fear…\p"
# 748 "data/maps/PetalburgCity/scripts.pory"
	.string "What do you see reflected in your face?$"
# 749 "data/maps/PetalburgCity/scripts.pory"

# 750 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_FullPartyExplanation:
# 751 "data/maps/PetalburgCity/scripts.pory"
	.string "Let's say you have six Pokémon.\n"
# 752 "data/maps/PetalburgCity/scripts.pory"
	.string "If you catch another one…\p"
# 753 "data/maps/PetalburgCity/scripts.pory"
	.string "It is automatically sent to a Storage\n"
# 754 "data/maps/PetalburgCity/scripts.pory"
	.string "Box over a PC connection.$"
# 755 "data/maps/PetalburgCity/scripts.pory"

# 756 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_GymSign:
# 757 "data/maps/PetalburgCity/scripts.pory"
	.string "Petalburg City Pokémon Gym\n"
# 758 "data/maps/PetalburgCity/scripts.pory"
	.string "Leader: Norman\l"
# 759 "data/maps/PetalburgCity/scripts.pory"
	.string "“A man in pursuit of power!”$"
# 760 "data/maps/PetalburgCity/scripts.pory"

# 761 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_CitySign:
# 762 "data/maps/PetalburgCity/scripts.pory"
	.string "Petalburg City\n"
# 763 "data/maps/PetalburgCity/scripts.pory"
	.string "“Where people mingle with nature.”$"
# 764 "data/maps/PetalburgCity/scripts.pory"

# 765 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WallyHouseSign:
# 766 "data/maps/PetalburgCity/scripts.pory"
	.string "Wally's House$"
# 767 "data/maps/PetalburgCity/scripts.pory"

# 768 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_AreYouATrainer:
# 769 "data/maps/PetalburgCity/scripts.pory"
	.string "Excuse me!\p"
# 770 "data/maps/PetalburgCity/scripts.pory"
	.string "Let me guess, from the way you're\n"
# 771 "data/maps/PetalburgCity/scripts.pory"
	.string "dressed, are you a Pokémon Trainer?$"
# 772 "data/maps/PetalburgCity/scripts.pory"

# 773 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_WellMaybeNot:
# 774 "data/maps/PetalburgCity/scripts.pory"
	.string "… … … … … …\p"
# 775 "data/maps/PetalburgCity/scripts.pory"
	.string "Well, maybe not.\n"
# 776 "data/maps/PetalburgCity/scripts.pory"
	.string "Your clothes aren't all that dirty.\p"
# 777 "data/maps/PetalburgCity/scripts.pory"
	.string "You're either a rookie Trainer,\n"
# 778 "data/maps/PetalburgCity/scripts.pory"
	.string "or maybe you're just an ordinary kid.$"
# 779 "data/maps/PetalburgCity/scripts.pory"

# 780 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ImLookingForTalentedTrainers:
# 781 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm roaming the land in search of\n"
# 782 "data/maps/PetalburgCity/scripts.pory"
	.string "talented Trainers.\p"
# 783 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm sorry to have taken your time.$"
# 784 "data/maps/PetalburgCity/scripts.pory"

# 785 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_ImGladIFoundYou:
# 786 "data/maps/PetalburgCity/scripts.pory"
	.string "Oh, {PLAYER}!\p"
# 787 "data/maps/PetalburgCity/scripts.pory"
	.string "I'm glad I found you here.\p"
# 788 "data/maps/PetalburgCity/scripts.pory"
	.string "I heard about how you fended off Team\n"
# 789 "data/maps/PetalburgCity/scripts.pory"
	.string "Aqua at Slateport and I have a favour\l"
# 790 "data/maps/PetalburgCity/scripts.pory"
	.string "to ask.\p"
# 791 "data/maps/PetalburgCity/scripts.pory"
	.string "My colleague, Professor Cozmo had a\n"
# 792 "data/maps/PetalburgCity/scripts.pory"
	.string "meteorite stolen from him recently.\p"
# 793 "data/maps/PetalburgCity/scripts.pory"
	.string "Not by Team Aqua, but by Team Magma,\n"
# 794 "data/maps/PetalburgCity/scripts.pory"
	.string "a rival gang.\p"
# 795 "data/maps/PetalburgCity/scripts.pory"
	.string "They've taken the meteorite to Mt.\n"
# 796 "data/maps/PetalburgCity/scripts.pory"
	.string "Chimney, near Lavaridge.\p"
# 797 "data/maps/PetalburgCity/scripts.pory"
	.string "To make matters worse, some of their\n"
# 798 "data/maps/PetalburgCity/scripts.pory"
	.string "goons are blocking the entrance to\l"
# 799 "data/maps/PetalburgCity/scripts.pory"
	.string "the Cable Car.\p"
# 800 "data/maps/PetalburgCity/scripts.pory"
	.string "Normally, it would be impossible to\n"
# 801 "data/maps/PetalburgCity/scripts.pory"
	.string "travel up Mt. Chimney without the\l"
# 802 "data/maps/PetalburgCity/scripts.pory"
	.string "Cable Car, but I have an idea.\p"
# 803 "data/maps/PetalburgCity/scripts.pory"
	.string "There is a man from Kanto who trains\n"
# 804 "data/maps/PetalburgCity/scripts.pory"
	.string "in the Route 111 desert.\p"
# 805 "data/maps/PetalburgCity/scripts.pory"
	.string "This man is said to be extremely\n"
# 806 "data/maps/PetalburgCity/scripts.pory"
	.string "proficient in martial arts.\p"
# 807 "data/maps/PetalburgCity/scripts.pory"
	.string "It's possible that he could break\n"
# 808 "data/maps/PetalburgCity/scripts.pory"
	.string "the rocks blocking Jagged Pass, and\l"
# 809 "data/maps/PetalburgCity/scripts.pory"
	.string "open up another path to Mt. Chimney.$"
# 810 "data/maps/PetalburgCity/scripts.pory"

# 811 "data/maps/PetalburgCity/scripts.pory"
PetalburgCity_Text_IdLoveToHelp:
# 812 "data/maps/PetalburgCity/scripts.pory"
	.string "I'd love to help, but I just caught\n"
# 813 "data/maps/PetalburgCity/scripts.pory"
	.string "wind of an even more sinister plan in\l"
# 814 "data/maps/PetalburgCity/scripts.pory"
	.string "my hometown of Mossdeep.\p"
# 815 "data/maps/PetalburgCity/scripts.pory"
	.string "Best of luck, {PLAYER}!$"

PetalburgCity_EventScript_TrickHouseOpen_Text_0:
# 8 "data/maps/PetalburgCity/scripts.pory"
	.string "Hey there, {PLAYER}!\p"
	.string "I'm just here to let you know that the\n"
	.string "next Trick House puzzle is open.\p"
	.string "That's all!\n"
	.string "I hope to see you there!$"
