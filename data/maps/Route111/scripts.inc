Route111_EventScript_ClairTriggered0::
# 5 "data/maps/Route111/scripts.pory"
	lock
# 6 "data/maps/Route111/scripts.pory"
	applymovement 44, Route111_Movement_ClairLeft
# 7 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 8 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_Clair
# 9 "data/maps/Route111/scripts.pory"
	release
	end


Route111_EventScript_ClairTriggered1::
# 14 "data/maps/Route111/scripts.pory"
	lock
# 15 "data/maps/Route111/scripts.pory"
	applymovement 44, Route111_Movement_ClairCenter
# 16 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 17 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_Clair
# 18 "data/maps/Route111/scripts.pory"
	release
	end


Route111_EventScript_ClairTriggered2::
# 23 "data/maps/Route111/scripts.pory"
	lock
# 24 "data/maps/Route111/scripts.pory"
	applymovement 44, Route111_Movement_ClairRight
# 25 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 26 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_Clair
# 27 "data/maps/Route111/scripts.pory"
	release
	end


# 31 "data/maps/Route111/scripts.pory"
Route111_Movement_ClairLeft:
# 32 "data/maps/Route111/scripts.pory"
	walk_down
# 32 "data/maps/Route111/scripts.pory"
	walk_down
# 33 "data/maps/Route111/scripts.pory"
	walk_left
# 34 "data/maps/Route111/scripts.pory"
	walk_down
# 34 "data/maps/Route111/scripts.pory"
	walk_down
# 35 "data/maps/Route111/scripts.pory"
	step_end

# 38 "data/maps/Route111/scripts.pory"
Route111_Movement_ClairCenter:
# 39 "data/maps/Route111/scripts.pory"
	walk_down
# 39 "data/maps/Route111/scripts.pory"
	walk_down
# 39 "data/maps/Route111/scripts.pory"
	walk_down
# 39 "data/maps/Route111/scripts.pory"
	walk_down
# 40 "data/maps/Route111/scripts.pory"
	step_end

# 43 "data/maps/Route111/scripts.pory"
Route111_Movement_ClairRight:
# 44 "data/maps/Route111/scripts.pory"
	walk_down
# 44 "data/maps/Route111/scripts.pory"
	walk_down
# 45 "data/maps/Route111/scripts.pory"
	walk_right
# 46 "data/maps/Route111/scripts.pory"
	walk_down
# 46 "data/maps/Route111/scripts.pory"
	walk_down
# 47 "data/maps/Route111/scripts.pory"
	step_end

Route111_EventScript_Clair::
# 51 "data/maps/Route111/scripts.pory"
	lock
# 52 "data/maps/Route111/scripts.pory"
	faceplayer
# 53 "data/maps/Route111/scripts.pory"
	setflag FLAG_DISABLE_EXP
# 54 "data/maps/Route111/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_NO_MUSIC, 44, TRAINER_CLAIR_1, Route111_Text_ClairIntro, Route111_Text_ClairDefeat, Route111_EventScript_ClairDefeated, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
# 55 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_Clair_Text_0, MSGBOX_YESNO
# 57 "data/maps/Route111/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route111_EventScript_Clair_2
# 61 "data/maps/Route111/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 62 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_Clair_Text_2
# 63 "data/maps/Route111/scripts.pory"
	waitfanfare
# 64 "data/maps/Route111/scripts.pory"
	closemessage
# 65 "data/maps/Route111/scripts.pory"
	random 9
# 66 "data/maps/Route111/scripts.pory"
	switch VAR_RESULT
# 67 "data/maps/Route111/scripts.pory"
	case 0, Route111_EventScript_Clair_7
# 69 "data/maps/Route111/scripts.pory"
	case 1, Route111_EventScript_Clair_8
# 71 "data/maps/Route111/scripts.pory"
	case 2, Route111_EventScript_Clair_9
# 73 "data/maps/Route111/scripts.pory"
	case 3, Route111_EventScript_Clair_10
# 75 "data/maps/Route111/scripts.pory"
	case 4, Route111_EventScript_Clair_11
# 77 "data/maps/Route111/scripts.pory"
	case 5, Route111_EventScript_Clair_12
# 79 "data/maps/Route111/scripts.pory"
	case 6, Route111_EventScript_Clair_13
# 81 "data/maps/Route111/scripts.pory"
	case 7, Route111_EventScript_Clair_14
# 83 "data/maps/Route111/scripts.pory"
	case 8, Route111_EventScript_Clair_15
Route111_EventScript_Clair_5:
# 86 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_Clair_Text_3, MSGBOX_DEFAULT
# 89 "data/maps/Route111/scripts.pory"
	waitmessage
# 90 "data/maps/Route111/scripts.pory"
	closemessage
# 91 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ClairExits
Route111_EventScript_Clair_1:
# 93 "data/maps/Route111/scripts.pory"
	clearflag FLAG_DISABLE_EXP
# 94 "data/maps/Route111/scripts.pory"
	release
	end

Route111_EventScript_Clair_2:
# 58 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_Clair_Text_1, MSGBOX_DEFAULT
	goto Route111_EventScript_Clair_1

Route111_EventScript_Clair_7:
# 68 "data/maps/Route111/scripts.pory"
	giveegg SPECIES_DRATINI
	goto Route111_EventScript_Clair_5

Route111_EventScript_Clair_8:
# 70 "data/maps/Route111/scripts.pory"
	giveegg SPECIES_BAGON
	goto Route111_EventScript_Clair_5

Route111_EventScript_Clair_9:
# 72 "data/maps/Route111/scripts.pory"
	giveegg SPECIES_GIBLE
	goto Route111_EventScript_Clair_5

Route111_EventScript_Clair_10:
# 74 "data/maps/Route111/scripts.pory"
	giveegg SPECIES_DEINO
	goto Route111_EventScript_Clair_5

Route111_EventScript_Clair_11:
# 76 "data/maps/Route111/scripts.pory"
	giveegg SPECIES_GOOMY
	goto Route111_EventScript_Clair_5

Route111_EventScript_Clair_12:
# 78 "data/maps/Route111/scripts.pory"
	giveegg SPECIES_JANGMO_O
	goto Route111_EventScript_Clair_5

Route111_EventScript_Clair_13:
# 80 "data/maps/Route111/scripts.pory"
	giveegg SPECIES_DREEPY
	goto Route111_EventScript_Clair_5

Route111_EventScript_Clair_14:
# 82 "data/maps/Route111/scripts.pory"
	giveegg SPECIES_DURALUDON
	goto Route111_EventScript_Clair_5

Route111_EventScript_Clair_15:
# 84 "data/maps/Route111/scripts.pory"
	giveegg SPECIES_FRIGIBAX
	goto Route111_EventScript_Clair_5


Route111_EventScript_ClairDefeated::
# 116 "data/maps/Route111/scripts.pory"
	clearflag FLAG_DISABLE_EXP
# 117 "data/maps/Route111/scripts.pory"
	setflag FLAG_DEFEATED_CLAIR
# 118 "data/maps/Route111/scripts.pory"
	setvar VAR_ROUTE111_STATE, 1
# 119 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_ClairDefeated_Text_0, MSGBOX_YESNO
# 127 "data/maps/Route111/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route111_EventScript_ClairDefeated_2
# 131 "data/maps/Route111/scripts.pory"
	playfanfare MUS_DP_OBTAIN_ITEM
# 132 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_Clair_Text_2
# 133 "data/maps/Route111/scripts.pory"
	waitfanfare
# 134 "data/maps/Route111/scripts.pory"
	closemessage
# 135 "data/maps/Route111/scripts.pory"
	random 9
# 136 "data/maps/Route111/scripts.pory"
	switch VAR_RESULT
# 137 "data/maps/Route111/scripts.pory"
	case 0, Route111_EventScript_ClairDefeated_7
# 139 "data/maps/Route111/scripts.pory"
	case 1, Route111_EventScript_ClairDefeated_8
# 141 "data/maps/Route111/scripts.pory"
	case 2, Route111_EventScript_ClairDefeated_9
# 143 "data/maps/Route111/scripts.pory"
	case 3, Route111_EventScript_ClairDefeated_10
# 145 "data/maps/Route111/scripts.pory"
	case 4, Route111_EventScript_ClairDefeated_11
# 147 "data/maps/Route111/scripts.pory"
	case 5, Route111_EventScript_ClairDefeated_12
# 149 "data/maps/Route111/scripts.pory"
	case 6, Route111_EventScript_ClairDefeated_13
# 151 "data/maps/Route111/scripts.pory"
	case 7, Route111_EventScript_ClairDefeated_14
# 153 "data/maps/Route111/scripts.pory"
	case 8, Route111_EventScript_ClairDefeated_15
Route111_EventScript_ClairDefeated_5:
# 156 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_Clair_Text_3, MSGBOX_DEFAULT
# 159 "data/maps/Route111/scripts.pory"
	waitmessage
# 160 "data/maps/Route111/scripts.pory"
	closemessage
# 161 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ClairExits
Route111_EventScript_ClairDefeated_1:
# 163 "data/maps/Route111/scripts.pory"
	release
	end

Route111_EventScript_ClairDefeated_2:
# 128 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_Clair_Text_1, MSGBOX_DEFAULT
	goto Route111_EventScript_ClairDefeated_1

Route111_EventScript_ClairDefeated_7:
# 138 "data/maps/Route111/scripts.pory"
	giveegg SPECIES_DRATINI
	goto Route111_EventScript_ClairDefeated_5

Route111_EventScript_ClairDefeated_8:
# 140 "data/maps/Route111/scripts.pory"
	giveegg SPECIES_BAGON
	goto Route111_EventScript_ClairDefeated_5

Route111_EventScript_ClairDefeated_9:
# 142 "data/maps/Route111/scripts.pory"
	giveegg SPECIES_GIBLE
	goto Route111_EventScript_ClairDefeated_5

Route111_EventScript_ClairDefeated_10:
# 144 "data/maps/Route111/scripts.pory"
	giveegg SPECIES_DEINO
	goto Route111_EventScript_ClairDefeated_5

Route111_EventScript_ClairDefeated_11:
# 146 "data/maps/Route111/scripts.pory"
	giveegg SPECIES_GOOMY
	goto Route111_EventScript_ClairDefeated_5

Route111_EventScript_ClairDefeated_12:
# 148 "data/maps/Route111/scripts.pory"
	giveegg SPECIES_JANGMO_O
	goto Route111_EventScript_ClairDefeated_5

Route111_EventScript_ClairDefeated_13:
# 150 "data/maps/Route111/scripts.pory"
	giveegg SPECIES_DREEPY
	goto Route111_EventScript_ClairDefeated_5

Route111_EventScript_ClairDefeated_14:
# 152 "data/maps/Route111/scripts.pory"
	giveegg SPECIES_DURALUDON
	goto Route111_EventScript_ClairDefeated_5

Route111_EventScript_ClairDefeated_15:
# 154 "data/maps/Route111/scripts.pory"
	giveegg SPECIES_FRIGIBAX
	goto Route111_EventScript_ClairDefeated_5


Route111_EventScript_ClairExits::
# 168 "data/maps/Route111/scripts.pory"
	fadescreen FADE_TO_BLACK
# 169 "data/maps/Route111/scripts.pory"
	removeobject 44
# 170 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_CLAIR
# 171 "data/maps/Route111/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 172 "data/maps/Route111/scripts.pory"
	delay 30
# 173 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_ClairExits_Text_0, MSGBOX_DEFAULT
# 174 "data/maps/Route111/scripts.pory"
	giveitem ITEM_HEART_SCALE
# 175 "data/maps/Route111/scripts.pory"
	release
	end


Route111_EventScript_MarleyTriggered::
# 180 "data/maps/Route111/scripts.pory"
	lock
# 181 "data/maps/Route111/scripts.pory"
	playse SE_PIN
# 182 "data/maps/Route111/scripts.pory"
	applymovement 43, Common_Movement_ExclamationMark
# 183 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 184 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 185 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 186 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_Marley
# 187 "data/maps/Route111/scripts.pory"
	release
	end


Route111_EventScript_Marley::
# 192 "data/maps/Route111/scripts.pory"
	lock
# 193 "data/maps/Route111/scripts.pory"
	faceplayer
# 194 "data/maps/Route111/scripts.pory"
	setflag FLAG_DISABLE_EXP
# 195 "data/maps/Route111/scripts.pory"
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT_NO_MUSIC, 43, TRAINER_MARLEY_ROUTE_111, Route111_Text_MarleyIntro, Route111_Text_MarleyDefeat, Route111_EventScript_MarleyDefeated, OBJ_ID_NONE, TRAINER_NONE, NULL, NULL, NULL, NULL, NULL, FALSE, TRUE, FALSE, FALSE
# 196 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_Marley_Text_0
# 200 "data/maps/Route111/scripts.pory"
	clearflag FLAG_DISABLE_EXP
# 201 "data/maps/Route111/scripts.pory"
	release
	end


# 219 "data/maps/Route111/scripts.pory"
Route111_Movement_FaceUp:
# 220 "data/maps/Route111/scripts.pory"
	face_up
# 221 "data/maps/Route111/scripts.pory"
	step_end

Route111_EventScript_MarleyDefeated::
# 225 "data/maps/Route111/scripts.pory"
	clearflag FLAG_DISABLE_EXP
# 226 "data/maps/Route111/scripts.pory"
	msgbox Route111_EventScript_Marley_Text_0
# 230 "data/maps/Route111/scripts.pory"
	setflag FLAG_DEFEATED_MARLEY
# 231 "data/maps/Route111/scripts.pory"
	setvar VAR_STAT_TRAINERS_STATE, 3
# 232 "data/maps/Route111/scripts.pory"
	release
	end


# 236 "data/maps/Route111/scripts.pory"

# 237 "data/maps/Route111/scripts.pory"
.set LOCALID_VICTOR, 1
# 238 "data/maps/Route111/scripts.pory"
.set LOCALID_VICTORIA, 2
# 239 "data/maps/Route111/scripts.pory"
.set LOCALID_VIVI, 3
# 240 "data/maps/Route111/scripts.pory"
.set LOCALID_VICKY, 4
# 241 "data/maps/Route111/scripts.pory"
.set LOCALID_ROCK_SMASH_MAN, 46
# 242 "data/maps/Route111/scripts.pory"

# 243 "data/maps/Route111/scripts.pory"
@ Note: LOCALID_ROUTE111_PLAYER_FALLING is a local id for this map used elsewhere. It's defined in event_objects.h
# 244 "data/maps/Route111/scripts.pory"

# 245 "data/maps/Route111/scripts.pory"
Route111_MapScripts::
# 246 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route111_OnLoad
# 247 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route111_OnTransition
# 248 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route111_OnWarp
# 249 "data/maps/Route111/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route111_OnFrame
# 250 "data/maps/Route111/scripts.pory"
	.byte 0
# 251 "data/maps/Route111/scripts.pory"

# 252 "data/maps/Route111/scripts.pory"
Route111_OnLoad:
# 253 "data/maps/Route111/scripts.pory"
	call_if_unset FLAG_REGI_DOORS_OPENED, Route111_EventScript_CloseDesertRuins
# 254 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_ShowTemporaryMirageTower
# 255 "data/maps/Route111/scripts.pory"
	end
# 256 "data/maps/Route111/scripts.pory"

# 257 "data/maps/Route111/scripts.pory"
Route111_EventScript_CloseDesertRuins::
# 258 "data/maps/Route111/scripts.pory"
	setmetatile 29, 86, METATILE_General_RockWall_RockBase, TRUE
# 259 "data/maps/Route111/scripts.pory"
	setmetatile 29, 87, METATILE_General_RockWall_SandBase, TRUE
# 260 "data/maps/Route111/scripts.pory"
	return
# 261 "data/maps/Route111/scripts.pory"

# 262 "data/maps/Route111/scripts.pory"
@ Show Mirage Tower just prior to disintegration. Mirage Tower is otherwise handled by the map layout
# 263 "data/maps/Route111/scripts.pory"
Route111_EventScript_ShowTemporaryMirageTower::
# 264 "data/maps/Route111/scripts.pory"
	setmetatile 18, 53, METATILE_Mauville_MirageTower_Tile0, FALSE
# 265 "data/maps/Route111/scripts.pory"
	setmetatile 19, 53, METATILE_Mauville_MirageTower_Tile1, FALSE
# 266 "data/maps/Route111/scripts.pory"
	setmetatile 20, 53, METATILE_Mauville_MirageTower_Tile2, FALSE
# 267 "data/maps/Route111/scripts.pory"
	setmetatile 18, 54, METATILE_Mauville_MirageTower_Tile3, FALSE
# 268 "data/maps/Route111/scripts.pory"
	setmetatile 19, 54, METATILE_Mauville_MirageTower_Tile4, FALSE
# 269 "data/maps/Route111/scripts.pory"
	setmetatile 20, 54, METATILE_Mauville_MirageTower_Tile5, FALSE
# 270 "data/maps/Route111/scripts.pory"
	setmetatile 18, 55, METATILE_Mauville_MirageTower_Tile6, FALSE
# 271 "data/maps/Route111/scripts.pory"
	setmetatile 19, 55, METATILE_Mauville_MirageTower_Tile7, FALSE
# 272 "data/maps/Route111/scripts.pory"
	setmetatile 20, 55, METATILE_Mauville_MirageTower_Tile8, FALSE
# 273 "data/maps/Route111/scripts.pory"
	setmetatile 18, 56, METATILE_Mauville_MirageTower_Tile9, FALSE
# 274 "data/maps/Route111/scripts.pory"
	setmetatile 19, 56, METATILE_Mauville_MirageTower_TileA, FALSE
# 275 "data/maps/Route111/scripts.pory"
	setmetatile 20, 56, METATILE_Mauville_MirageTower_TileB, FALSE
# 276 "data/maps/Route111/scripts.pory"
	setmetatile 18, 57, METATILE_Mauville_MirageTower_TileC, FALSE
# 277 "data/maps/Route111/scripts.pory"
	setmetatile 19, 57, METATILE_Mauville_MirageTower_TileD, FALSE
# 278 "data/maps/Route111/scripts.pory"
	setmetatile 20, 57, METATILE_Mauville_MirageTower_TileE, FALSE
# 279 "data/maps/Route111/scripts.pory"
	setmetatile 18, 58, METATILE_Mauville_MirageTower_TileF, FALSE
# 280 "data/maps/Route111/scripts.pory"
	setmetatile 19, 58, METATILE_Mauville_MirageTower_Tile10, FALSE
# 281 "data/maps/Route111/scripts.pory"
	setmetatile 20, 58, METATILE_Mauville_MirageTower_Tile11, FALSE
# 282 "data/maps/Route111/scripts.pory"
	return
# 283 "data/maps/Route111/scripts.pory"

# 284 "data/maps/Route111/scripts.pory"
Route111_OnTransition:
# 285 "data/maps/Route111/scripts.pory"
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 0
# 286 "data/maps/Route111/scripts.pory"
	special SetMirageTowerVisibility
# 287 "data/maps/Route111/scripts.pory"
	call_if_unset FLAG_MIRAGE_TOWER_VISIBLE, Route111_EventScript_SetLayoutNoMirageTower
# 288 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_SetFallingPlayerGfx
# 289 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_MIRAGE_TOWER_STATE, 2, Route111_EventScript_SetMirageTowerGone
# 290 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CheckSetSandstorm
# 291 "data/maps/Route111/scripts.pory"
	call GabbyAndTy_EventScript_UpdateLocation
# 292 "data/maps/Route111/scripts.pory"
	goto_if_not_defeated TRAINER_VICKY, Route111_EventScript_SetWinstratesNotDefeated
# 293 "data/maps/Route111/scripts.pory"
	end
# 294 "data/maps/Route111/scripts.pory"

# 295 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfx::
# 296 "data/maps/Route111/scripts.pory"
	checkplayergender
# 297 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route111_EventScript_SetFallingPlayerGfxMale
# 298 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route111_EventScript_SetFallingPlayerGfxFemale
# 299 "data/maps/Route111/scripts.pory"
	return
# 300 "data/maps/Route111/scripts.pory"

# 301 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfxMale::
# 302 "data/maps/Route111/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_BRENDAN_NORMAL
# 303 "data/maps/Route111/scripts.pory"
	return
# 304 "data/maps/Route111/scripts.pory"

# 305 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetFallingPlayerGfxFemale::
# 306 "data/maps/Route111/scripts.pory"
	setvar VAR_OBJ_GFX_ID_0, OBJ_EVENT_GFX_RIVAL_MAY_NORMAL
# 307 "data/maps/Route111/scripts.pory"
	return
# 308 "data/maps/Route111/scripts.pory"

# 309 "data/maps/Route111/scripts.pory"
Route111_EventScript_CheckSetSandstorm::
# 310 "data/maps/Route111/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 311 "data/maps/Route111/scripts.pory"
	goto_if_lt VAR_TEMP_1, 34, Route111_EventScript_EndCheckSetSandstorm
# 312 "data/maps/Route111/scripts.pory"
	goto_if_gt VAR_TEMP_1, 107, Route111_EventScript_EndCheckSetSandstorm
# 313 "data/maps/Route111/scripts.pory"
	goto_if_gt VAR_TEMP_1, 72, Route111_EventScript_SetSandstorm
# 314 "data/maps/Route111/scripts.pory"
	goto_if_lt VAR_TEMP_1, 65, Route111_EventScript_SetSandstorm
# 315 "data/maps/Route111/scripts.pory"
	goto_if_gt VAR_TEMP_0, 2000, Route111_EventScript_EndCheckSetSandstorm
# 316 "data/maps/Route111/scripts.pory"
	goto_if_lt VAR_TEMP_0, 8, Route111_EventScript_EndCheckSetSandstorm
# 317 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetSandstorm::
# 318 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SANDSTORM
# 319 "data/maps/Route111/scripts.pory"
	fadenewbgm MUS_DP_ROUTE228_DAY
# 320 "data/maps/Route111/scripts.pory"
Route111_EventScript_EndCheckSetSandstorm::
# 321 "data/maps/Route111/scripts.pory"
	return
# 322 "data/maps/Route111/scripts.pory"

# 323 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetWinstratesNotDefeated::
# 324 "data/maps/Route111/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_111_VICTOR_WINSTRATE
# 325 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VICTORIA_WINSTRATE
# 326 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VIVI_WINSTRATE
# 327 "data/maps/Route111/scripts.pory"
	setflag FLAG_HIDE_ROUTE_111_VICKY_WINSTRATE
# 328 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VICTOR
# 329 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VICTORIA
# 330 "data/maps/Route111/scripts.pory"
	cleartrainerflag TRAINER_VIVI
# 331 "data/maps/Route111/scripts.pory"
	end
# 332 "data/maps/Route111/scripts.pory"

# 333 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetLayoutNoMirageTower::
# 334 "data/maps/Route111/scripts.pory"
	return
# 335 "data/maps/Route111/scripts.pory"

# 336 "data/maps/Route111/scripts.pory"
Route111_EventScript_SetMirageTowerGone::
# 337 "data/maps/Route111/scripts.pory"
	setvar VAR_MIRAGE_TOWER_STATE, 3
# 338 "data/maps/Route111/scripts.pory"
	return
# 339 "data/maps/Route111/scripts.pory"

# 340 "data/maps/Route111/scripts.pory"
Route111_OnWarp:
# 341 "data/maps/Route111/scripts.pory"
	map_script_2 VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_HidePlayerForMirageTower
# 342 "data/maps/Route111/scripts.pory"
	.2byte 0
# 343 "data/maps/Route111/scripts.pory"

# 344 "data/maps/Route111/scripts.pory"
Route111_EventScript_HidePlayerForMirageTower::
# 345 "data/maps/Route111/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_LITTLEROOT_TOWN
# 346 "data/maps/Route111/scripts.pory"
	end
# 347 "data/maps/Route111/scripts.pory"

# 348 "data/maps/Route111/scripts.pory"
Route111_OnFrame:
# 349 "data/maps/Route111/scripts.pory"
	map_script_2 VAR_MIRAGE_TOWER_STATE, 1, Route111_EventScript_MirageTowerDisappear
# 350 "data/maps/Route111/scripts.pory"
	.2byte 0
# 351 "data/maps/Route111/scripts.pory"

# 352 "data/maps/Route111/scripts.pory"
Route111_EventScript_MirageTowerDisappear::
# 353 "data/maps/Route111/scripts.pory"
	lockall
# 354 "data/maps/Route111/scripts.pory"
	special StartMirageTowerShake
# 355 "data/maps/Route111/scripts.pory"
	waitstate
# 356 "data/maps/Route111/scripts.pory"
	delay 24
# 357 "data/maps/Route111/scripts.pory"
	playse SE_FALL
# 358 "data/maps/Route111/scripts.pory"
	addobject LOCALID_ROUTE111_PLAYER_FALLING
# 359 "data/maps/Route111/scripts.pory"
	special StartPlayerDescendMirageTower
# 360 "data/maps/Route111/scripts.pory"
	waitstate
# 361 "data/maps/Route111/scripts.pory"
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_LITTLEROOT_TOWN
# 362 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_ROUTE111_PLAYER_FALLING
# 363 "data/maps/Route111/scripts.pory"
	delay 16
# 364 "data/maps/Route111/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 365 "data/maps/Route111/scripts.pory"
	delay 16
# 366 "data/maps/Route111/scripts.pory"
	special StartMirageTowerDisintegration
# 367 "data/maps/Route111/scripts.pory"
	waitstate
# 368 "data/maps/Route111/scripts.pory"
	special StartMirageTowerFossilFallAndSink
# 369 "data/maps/Route111/scripts.pory"
	waitstate
# 370 "data/maps/Route111/scripts.pory"
	setvar VAR_MIRAGE_TOWER_STATE, 2
# 371 "data/maps/Route111/scripts.pory"
	clearflag FLAG_HIDE_DESERT_UNDERPASS_FOSSIL
# 372 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_CHOSE_CLAW_FOSSIL, Route111_EventScript_RootFossilDisappeared
# 373 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ClawFossilDisappeared, MSGBOX_DEFAULT
# 374 "data/maps/Route111/scripts.pory"
	releaseall
# 375 "data/maps/Route111/scripts.pory"
	end
# 376 "data/maps/Route111/scripts.pory"

# 377 "data/maps/Route111/scripts.pory"
Route111_EventScript_RootFossilDisappeared::
# 378 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RootFossilDisappeared, MSGBOX_DEFAULT
# 379 "data/maps/Route111/scripts.pory"
	releaseall
# 380 "data/maps/Route111/scripts.pory"
	end
# 381 "data/maps/Route111/scripts.pory"

# 382 "data/maps/Route111/scripts.pory"
@ Unused
# 383 "data/maps/Route111/scripts.pory"
Route111_Movement_PlayerFall::
# 384 "data/maps/Route111/scripts.pory"
	lock_anim
# 385 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 386 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 387 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 388 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 389 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 390 "data/maps/Route111/scripts.pory"
	walk_fast_down
# 391 "data/maps/Route111/scripts.pory"
	step_end
# 392 "data/maps/Route111/scripts.pory"

# 393 "data/maps/Route111/scripts.pory"
Route111_EventScript_Girl::
# 394 "data/maps/Route111/scripts.pory"
	lock
# 395 "data/maps/Route111/scripts.pory"
	faceplayer
# 396 "data/maps/Route111/scripts.pory"
	dotimebasedevents
# 397 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_DAILY_ROUTE_111_RECEIVED_BERRY, Route111_EventScript_ReceivedBerry
# 398 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WateredPlantsEveryDayTakeBerry, MSGBOX_DEFAULT
# 399 "data/maps/Route111/scripts.pory"
	giveitem ITEM_RAZZ_BERRY
# 400 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 401 "data/maps/Route111/scripts.pory"
	setflag FLAG_DAILY_ROUTE_111_RECEIVED_BERRY
# 402 "data/maps/Route111/scripts.pory"
	special GetPlayerBigGuyGirlString
# 403 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_GoingToTryToMakeDifferentColorBerries, MSGBOX_DEFAULT
# 404 "data/maps/Route111/scripts.pory"
	release
# 405 "data/maps/Route111/scripts.pory"
	end
# 406 "data/maps/Route111/scripts.pory"

# 407 "data/maps/Route111/scripts.pory"
Route111_EventScript_ReceivedBerry::
# 408 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WhatColorBerriesToLookForToday, MSGBOX_DEFAULT
# 409 "data/maps/Route111/scripts.pory"
	release
# 410 "data/maps/Route111/scripts.pory"
	end
# 411 "data/maps/Route111/scripts.pory"

# 412 "data/maps/Route111/scripts.pory"
@ Unused
# 413 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerUp::
# 414 "data/maps/Route111/scripts.pory"
	lockall
# 415 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 0
# 416 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 417 "data/maps/Route111/scripts.pory"
	end
# 418 "data/maps/Route111/scripts.pory"

# 419 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerDown::
# 420 "data/maps/Route111/scripts.pory"
	lockall
# 421 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 1
# 422 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 423 "data/maps/Route111/scripts.pory"
	end
# 424 "data/maps/Route111/scripts.pory"

# 425 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerLeft::
# 426 "data/maps/Route111/scripts.pory"
	lockall
# 427 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 2
# 428 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 429 "data/maps/Route111/scripts.pory"
	end
# 430 "data/maps/Route111/scripts.pory"

# 431 "data/maps/Route111/scripts.pory"
@ Unused
# 432 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTriggerRight::
# 433 "data/maps/Route111/scripts.pory"
	lockall
# 434 "data/maps/Route111/scripts.pory"
	setvar VAR_0x8004, 3
# 435 "data/maps/Route111/scripts.pory"
	goto Route111_EventScript_ViciousSandstormTrigger
# 436 "data/maps/Route111/scripts.pory"
	end
# 437 "data/maps/Route111/scripts.pory"

# 438 "data/maps/Route111/scripts.pory"
Route111_EventScript_ViciousSandstormTrigger::
# 439 "data/maps/Route111/scripts.pory"
	checkitem ITEM_GO_GOGGLES
# 440 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route111_EventScript_PreventRouteAccess
# 441 "data/maps/Route111/scripts.pory"
	setvar VAR_TEMP_3, 1
# 442 "data/maps/Route111/scripts.pory"
	releaseall
# 443 "data/maps/Route111/scripts.pory"
	end
# 444 "data/maps/Route111/scripts.pory"

# 445 "data/maps/Route111/scripts.pory"
Route111_EventScript_PreventRouteAccess::
# 446 "data/maps/Route111/scripts.pory"
	msgbox gText_SandstormIsVicious, MSGBOX_DEFAULT
# 447 "data/maps/Route111/scripts.pory"
	closemessage
# 448 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 0, Route111_EventScript_PushUpFromRoute
# 449 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 1, Route111_EventScript_PushDownFromRoute
# 450 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 2, Route111_EventScript_PushLeftFromRoute
# 451 "data/maps/Route111/scripts.pory"
	call_if_eq VAR_0x8004, 3, Route111_EventScript_PushRightFromRoute
# 452 "data/maps/Route111/scripts.pory"
	releaseall
# 453 "data/maps/Route111/scripts.pory"
	end
# 454 "data/maps/Route111/scripts.pory"

# 455 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushUpFromRoute::
# 456 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushUpFromRoute
# 457 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 458 "data/maps/Route111/scripts.pory"
	return
# 459 "data/maps/Route111/scripts.pory"

# 460 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushDownFromRoute::
# 461 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushDownFromRoute
# 462 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 463 "data/maps/Route111/scripts.pory"
	return
# 464 "data/maps/Route111/scripts.pory"

# 465 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushLeftFromRoute::
# 466 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushLeftFromRoute
# 467 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 468 "data/maps/Route111/scripts.pory"
	return
# 469 "data/maps/Route111/scripts.pory"

# 470 "data/maps/Route111/scripts.pory"
Route111_EventScript_PushRightFromRoute::
# 471 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_PushRightFromRoute
# 472 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 473 "data/maps/Route111/scripts.pory"
	return
# 474 "data/maps/Route111/scripts.pory"

# 475 "data/maps/Route111/scripts.pory"
Route111_Movement_PushUpFromRoute:
# 476 "data/maps/Route111/scripts.pory"
	walk_up
# 477 "data/maps/Route111/scripts.pory"
	step_end
# 478 "data/maps/Route111/scripts.pory"

# 479 "data/maps/Route111/scripts.pory"
Route111_Movement_PushDownFromRoute:
# 480 "data/maps/Route111/scripts.pory"
	walk_down
# 481 "data/maps/Route111/scripts.pory"
	step_end
# 482 "data/maps/Route111/scripts.pory"

# 483 "data/maps/Route111/scripts.pory"
Route111_Movement_PushLeftFromRoute:
# 484 "data/maps/Route111/scripts.pory"
	walk_left
# 485 "data/maps/Route111/scripts.pory"
	step_end
# 486 "data/maps/Route111/scripts.pory"

# 487 "data/maps/Route111/scripts.pory"
Route111_Movement_PushRightFromRoute:
# 488 "data/maps/Route111/scripts.pory"
	walk_right
# 489 "data/maps/Route111/scripts.pory"
	step_end
# 490 "data/maps/Route111/scripts.pory"

# 491 "data/maps/Route111/scripts.pory"
Route111_EventScript_SunTrigger::
# 492 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SUNNY
# 493 "data/maps/Route111/scripts.pory"
	fadenewbgm MUS_DP_ROUTE210_DAY
# 494 "data/maps/Route111/scripts.pory"
	doweather
# 495 "data/maps/Route111/scripts.pory"
	setvar VAR_TEMP_3, 0
# 496 "data/maps/Route111/scripts.pory"
	end
# 497 "data/maps/Route111/scripts.pory"

# 498 "data/maps/Route111/scripts.pory"
Route111_EventScript_SandstormTrigger::
# 499 "data/maps/Route111/scripts.pory"
	setweather WEATHER_SANDSTORM
# 500 "data/maps/Route111/scripts.pory"
	fadenewbgm MUS_DP_ROUTE228_DAY
# 501 "data/maps/Route111/scripts.pory"
	doweather
# 502 "data/maps/Route111/scripts.pory"
	end
# 503 "data/maps/Route111/scripts.pory"

# 504 "data/maps/Route111/scripts.pory"
Route111_EventScript_Victor::
# 505 "data/maps/Route111/scripts.pory"
	lock
# 506 "data/maps/Route111/scripts.pory"
	faceplayer
# 507 "data/maps/Route111/scripts.pory"
	setflag FLAG_LANDMARK_WINSTRATE_FAMILY
# 508 "data/maps/Route111/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, Route111_EventScript_NotReady
# 509 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BattleOurFamily, MSGBOX_YESNO
# 510 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_RESULT, YES, Route111_EventScript_BattleWinstrates
# 511 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_IsThatSo, MSGBOX_DEFAULT
# 512 "data/maps/Route111/scripts.pory"
	release
# 513 "data/maps/Route111/scripts.pory"
	end
# 514 "data/maps/Route111/scripts.pory"

# 515 "data/maps/Route111/scripts.pory"
Route111_EventScript_NotReady::
# 516 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WeOnlyAccept, MSGBOX_DEFAULT
# 517 "data/maps/Route111/scripts.pory"
	release
# 518 "data/maps/Route111/scripts.pory"
	end
# 519 "data/maps/Route111/scripts.pory"

# 520 "data/maps/Route111/scripts.pory"
Route111_EventScript_BattleWinstrates::
# 521 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictorIntro, MSGBOX_DEFAULT
# 522 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICTOR, Route111_Text_VictorDefeat
# 523 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICTOR, Common_Movement_WalkInPlaceFasterUp
# 524 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 525 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 526 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictorPostBattle, MSGBOX_DEFAULT
# 527 "data/maps/Route111/scripts.pory"
	closemessage
# 528 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICTOR, Route111_Movement_WinstrateEnterHouse
# 529 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 530 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_VICTOR
# 531 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 532 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 533 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 534 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 535 "data/maps/Route111/scripts.pory"
	addobject LOCALID_VICTORIA
# 536 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICTORIA, Route111_Movement_WinstrateExitHouse
# 537 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 538 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 539 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictoriaIntro, MSGBOX_DEFAULT
# 540 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICTORIA, Route111_Text_VictoriaDefeat
# 541 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICTORIA, Common_Movement_WalkInPlaceFasterUp
# 542 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 543 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 544 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VictoriaPostBattle, MSGBOX_DEFAULT
# 545 "data/maps/Route111/scripts.pory"
	closemessage
# 546 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICTORIA, Route111_Movement_WinstrateEnterHouse
# 547 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 548 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_VICTORIA
# 549 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 550 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 551 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 552 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 553 "data/maps/Route111/scripts.pory"
	addobject LOCALID_VIVI
# 554 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VIVI, Route111_Movement_WinstrateExitHouse
# 555 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 556 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 557 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ViviIntro, MSGBOX_DEFAULT
# 558 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VIVI, Route111_Text_ViviDefeat
# 559 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VIVI, Common_Movement_WalkInPlaceFasterUp
# 560 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 561 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 562 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ViviPostBattle, MSGBOX_DEFAULT
# 563 "data/maps/Route111/scripts.pory"
	closemessage
# 564 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VIVI, Route111_Movement_WinstrateEnterHouse
# 565 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 566 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_VIVI
# 567 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 568 "data/maps/Route111/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route111_Movement_WaitForNextWinstrate
# 569 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 570 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 571 "data/maps/Route111/scripts.pory"
	addobject LOCALID_VICKY
# 572 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICKY, Route111_Movement_WinstrateExitHouse
# 573 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 574 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 575 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VickyIntro, MSGBOX_DEFAULT
# 576 "data/maps/Route111/scripts.pory"
	trainerbattle_no_intro TRAINER_VICKY, Route111_Text_VickyDefeat
# 577 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_VickyPostBattle, MSGBOX_DEFAULT
# 578 "data/maps/Route111/scripts.pory"
	closemessage
# 579 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICKY, Common_Movement_WalkInPlaceFasterUp
# 580 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 581 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_OpenWinstrateDoor
# 582 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_VICKY, Route111_Movement_WinstrateEnterHouse
# 583 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 584 "data/maps/Route111/scripts.pory"
	removeobject LOCALID_VICKY
# 585 "data/maps/Route111/scripts.pory"
	call Route111_EventScript_CloseWinstrateDoor
# 586 "data/maps/Route111/scripts.pory"
	release
# 587 "data/maps/Route111/scripts.pory"
	end
# 588 "data/maps/Route111/scripts.pory"

# 589 "data/maps/Route111/scripts.pory"
Route111_EventScript_OpenWinstrateDoor::
# 590 "data/maps/Route111/scripts.pory"
	opendoor 13, 113
# 591 "data/maps/Route111/scripts.pory"
	waitdooranim
# 592 "data/maps/Route111/scripts.pory"
	return
# 593 "data/maps/Route111/scripts.pory"

# 594 "data/maps/Route111/scripts.pory"
Route111_EventScript_CloseWinstrateDoor::
# 595 "data/maps/Route111/scripts.pory"
	closedoor 13, 113
# 596 "data/maps/Route111/scripts.pory"
	waitdooranim
# 597 "data/maps/Route111/scripts.pory"
	return
# 598 "data/maps/Route111/scripts.pory"

# 599 "data/maps/Route111/scripts.pory"
Route111_Movement_WinstrateEnterHouse:
# 600 "data/maps/Route111/scripts.pory"
	walk_in_place_faster_up
# 601 "data/maps/Route111/scripts.pory"
	walk_up
# 602 "data/maps/Route111/scripts.pory"
	step_end
# 603 "data/maps/Route111/scripts.pory"

# 604 "data/maps/Route111/scripts.pory"
Route111_Movement_WinstrateExitHouse:
# 605 "data/maps/Route111/scripts.pory"
	walk_down
# 606 "data/maps/Route111/scripts.pory"
	step_end
# 607 "data/maps/Route111/scripts.pory"

# 608 "data/maps/Route111/scripts.pory"
Route111_Movement_WaitForNextWinstrate:
# 609 "data/maps/Route111/scripts.pory"
	delay_16
# 610 "data/maps/Route111/scripts.pory"
	delay_16
# 611 "data/maps/Route111/scripts.pory"
	delay_16
# 612 "data/maps/Route111/scripts.pory"
	step_end
# 613 "data/maps/Route111/scripts.pory"

# 614 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSignMauville::
# 615 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSignMauville, MSGBOX_SIGN
# 616 "data/maps/Route111/scripts.pory"
	end
# 617 "data/maps/Route111/scripts.pory"

# 618 "data/maps/Route111/scripts.pory"
Route111_EventScript_WinstrateHouseSign::
# 619 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WinstrateHouseSign, MSGBOX_SIGN
# 620 "data/maps/Route111/scripts.pory"
	end
# 621 "data/maps/Route111/scripts.pory"

# 622 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSign112::
# 623 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSign112, MSGBOX_SIGN
# 624 "data/maps/Route111/scripts.pory"
	end
# 625 "data/maps/Route111/scripts.pory"

# 626 "data/maps/Route111/scripts.pory"
Route111_EventScript_RouteSign113::
# 627 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_RouteSign113, MSGBOX_SIGN
# 628 "data/maps/Route111/scripts.pory"
	end
# 629 "data/maps/Route111/scripts.pory"

# 630 "data/maps/Route111/scripts.pory"
Route111_EventScript_OldLadysRestStopSign::
# 631 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_OldLadysRestStopSign, MSGBOX_SIGN
# 632 "data/maps/Route111/scripts.pory"
	end
# 633 "data/maps/Route111/scripts.pory"

# 634 "data/maps/Route111/scripts.pory"
Route111_EventScript_TrainerTipsSpAtkSpDef::
# 635 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TrainerTipsSpAtkSpDef, MSGBOX_SIGN
# 636 "data/maps/Route111/scripts.pory"
	end
# 637 "data/maps/Route111/scripts.pory"

# 638 "data/maps/Route111/scripts.pory"
Route111_EventScript_Man1::
# 639 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ToughToKeepWinningUpTheRanks, MSGBOX_NPC
# 640 "data/maps/Route111/scripts.pory"
	end
# 641 "data/maps/Route111/scripts.pory"

# 642 "data/maps/Route111/scripts.pory"
Route111_EventScript_Man2::
# 643 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WinstrateFamilyDestroyedMe, MSGBOX_NPC
# 644 "data/maps/Route111/scripts.pory"
	end
# 645 "data/maps/Route111/scripts.pory"

# 646 "data/maps/Route111/scripts.pory"
Route111_EventScript_Hiker::
# 647 "data/maps/Route111/scripts.pory"
	lock
# 648 "data/maps/Route111/scripts.pory"
	faceplayer
# 649 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_MIRAGE_TOWER_STATE, 3, Route111_EventScript_HikerMirageTowerGone
# 650 "data/maps/Route111/scripts.pory"
	goto_if_eq VAR_MIRAGE_TOWER_STATE, 2, Route111_EventScript_HikerMirageTowerDisintegrated
# 651 "data/maps/Route111/scripts.pory"
	goto_if_set FLAG_MIRAGE_TOWER_VISIBLE, Route111_EventScript_HikerMirageTowerVisible
# 652 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ShouldBeMirageTowerAroundHere, MSGBOX_DEFAULT
# 653 "data/maps/Route111/scripts.pory"
	release
# 654 "data/maps/Route111/scripts.pory"
	end
# 655 "data/maps/Route111/scripts.pory"

# 656 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerGone::
# 657 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MirageTowerHasntBeenSeenSince, MSGBOX_DEFAULT
# 658 "data/maps/Route111/scripts.pory"
	release
# 659 "data/maps/Route111/scripts.pory"
	end
# 660 "data/maps/Route111/scripts.pory"

# 661 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerDisintegrated::
# 662 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_ThatWasShockingSandRainedDown, MSGBOX_DEFAULT
# 663 "data/maps/Route111/scripts.pory"
	release
# 664 "data/maps/Route111/scripts.pory"
	end
# 665 "data/maps/Route111/scripts.pory"

# 666 "data/maps/Route111/scripts.pory"
Route111_EventScript_HikerMirageTowerVisible::
# 667 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MirageTowerClearlyVisible, MSGBOX_DEFAULT
# 668 "data/maps/Route111/scripts.pory"
	release
# 669 "data/maps/Route111/scripts.pory"
	end
# 670 "data/maps/Route111/scripts.pory"

# 671 "data/maps/Route111/scripts.pory"
Route111_EventScript_RockSmashTipFatMan::
# 672 "data/maps/Route111/scripts.pory"
	lockall
# 673 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROCK_SMASH_MAN, Common_Movement_FacePlayer
# 674 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 675 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_MauvilleUncleToldMeToTakeRockSmash, MSGBOX_DEFAULT
# 676 "data/maps/Route111/scripts.pory"
	closemessage
# 677 "data/maps/Route111/scripts.pory"
	applymovement LOCALID_ROCK_SMASH_MAN, Common_Movement_FaceOriginalDirection
# 678 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 679 "data/maps/Route111/scripts.pory"
	releaseall
# 680 "data/maps/Route111/scripts.pory"
	end
# 681 "data/maps/Route111/scripts.pory"

# 682 "data/maps/Route111/scripts.pory"
Route111_EventScript_Drew::
# 683 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DREW, Route111_Text_DrewIntro, Route111_Text_DrewDefeat
# 684 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DrewPostBattle, MSGBOX_AUTOCLOSE
# 685 "data/maps/Route111/scripts.pory"
	end
# 686 "data/maps/Route111/scripts.pory"

# 687 "data/maps/Route111/scripts.pory"
Route111_EventScript_Heidi::
# 688 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_HEIDI, Route111_Text_HeidiIntro, Route111_Text_HeidiDefeat
# 689 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_HeidiPostBattle, MSGBOX_AUTOCLOSE
# 690 "data/maps/Route111/scripts.pory"
	end
# 691 "data/maps/Route111/scripts.pory"

# 692 "data/maps/Route111/scripts.pory"
Route111_EventScript_Beau::
# 693 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BEAU, Route111_Text_BeauIntro, Route111_Text_BeauDefeat
# 694 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BeauPostBattle, MSGBOX_AUTOCLOSE
# 695 "data/maps/Route111/scripts.pory"
	end
# 696 "data/maps/Route111/scripts.pory"

# 697 "data/maps/Route111/scripts.pory"
Route111_EventScript_Becky::
# 698 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BECKY, Route111_Text_BeckyIntro, Route111_Text_BeckyDefeat
# 699 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BeckyPostBattle, MSGBOX_AUTOCLOSE
# 700 "data/maps/Route111/scripts.pory"
	end
# 701 "data/maps/Route111/scripts.pory"

# 702 "data/maps/Route111/scripts.pory"
Route111_EventScript_Dusty::
# 703 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DUSTY_1, Route111_Text_DustyIntro, Route111_Text_DustyDefeat
# 704 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyPostBattle, MSGBOX_DEFAULT
# 705 "data/maps/Route111/scripts.pory"
	release
# 706 "data/maps/Route111/scripts.pory"
	end
# 707 "data/maps/Route111/scripts.pory"

# 708 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterDusty::
# 709 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 710 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 711 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyRegister, MSGBOX_DEFAULT
# 712 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_DUSTY_1
# 713 "data/maps/Route111/scripts.pory"
	release
# 714 "data/maps/Route111/scripts.pory"
	end
# 715 "data/maps/Route111/scripts.pory"

# 716 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchDusty::
# 717 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_DUSTY_1, Route111_Text_DustyRematchIntro, Route111_Text_DustyRematchDefeat
# 718 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DustyPostRematch, MSGBOX_AUTOCLOSE
# 719 "data/maps/Route111/scripts.pory"
	end
# 720 "data/maps/Route111/scripts.pory"

# 721 "data/maps/Route111/scripts.pory"
Route111_EventScript_Travis::
# 722 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_TRAVIS, Route111_Text_TravisIntro, Route111_Text_TravisDefeat
# 723 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TravisPostBattle, MSGBOX_AUTOCLOSE
# 724 "data/maps/Route111/scripts.pory"
	end
# 725 "data/maps/Route111/scripts.pory"

# 726 "data/maps/Route111/scripts.pory"
Route111_EventScript_Irene::
# 727 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_IRENE, Route111_Text_IreneIntro, Route111_Text_IreneDefeat
# 728 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_IrenePostBattle, MSGBOX_AUTOCLOSE
# 729 "data/maps/Route111/scripts.pory"
	end
# 730 "data/maps/Route111/scripts.pory"

# 731 "data/maps/Route111/scripts.pory"
Route111_EventScript_Daisuke::
# 732 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_DAISUKE, Route111_Text_DaisukeIntro, Route111_Text_DaisukeDefeat
# 733 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_DaisukePostBattle, MSGBOX_AUTOCLOSE
# 734 "data/maps/Route111/scripts.pory"
	end
# 735 "data/maps/Route111/scripts.pory"

# 736 "data/maps/Route111/scripts.pory"
Route111_EventScript_Wilton::
# 737 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_WILTON_1, Route111_Text_WiltonIntro, Route111_Text_WiltonDefeat
# 738 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonPostBattle, MSGBOX_DEFAULT
# 739 "data/maps/Route111/scripts.pory"
	release
# 740 "data/maps/Route111/scripts.pory"
	end
# 741 "data/maps/Route111/scripts.pory"

# 742 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterWilton::
# 743 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 744 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 745 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonRegister, MSGBOX_DEFAULT
# 746 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_WILTON_1
# 747 "data/maps/Route111/scripts.pory"
	release
# 748 "data/maps/Route111/scripts.pory"
	end
# 749 "data/maps/Route111/scripts.pory"

# 750 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchWilton::
# 751 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_WILTON_1, Route111_Text_WiltonRematchIntro, Route111_Text_WiltonRematchDefeat
# 752 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_WiltonPostRematch, MSGBOX_AUTOCLOSE
# 753 "data/maps/Route111/scripts.pory"
	end
# 754 "data/maps/Route111/scripts.pory"

# 755 "data/maps/Route111/scripts.pory"
Route111_EventScript_Brooke::
# 756 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BROOKE_1, Route111_Text_BrookeIntro, Route111_Text_BrookeDefeat
# 757 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookePostBattle, MSGBOX_DEFAULT
# 758 "data/maps/Route111/scripts.pory"
	release
# 759 "data/maps/Route111/scripts.pory"
	end
# 760 "data/maps/Route111/scripts.pory"

# 761 "data/maps/Route111/scripts.pory"
Route111_EventScript_RegisterBrooke::
# 762 "data/maps/Route111/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 763 "data/maps/Route111/scripts.pory"
	waitmovement 0
# 764 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookeRegister, MSGBOX_DEFAULT
# 765 "data/maps/Route111/scripts.pory"
	register_matchcall TRAINER_BROOKE_1
# 766 "data/maps/Route111/scripts.pory"
	release
# 767 "data/maps/Route111/scripts.pory"
	end
# 768 "data/maps/Route111/scripts.pory"

# 769 "data/maps/Route111/scripts.pory"
Route111_EventScript_RematchBrooke::
# 770 "data/maps/Route111/scripts.pory"
	trainerbattle_rematch TRAINER_BROOKE_1, Route111_Text_BrookeRematchIntro, Route111_Text_BrookeRematchDefeat
# 771 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrookePostRematch, MSGBOX_AUTOCLOSE
# 772 "data/maps/Route111/scripts.pory"
	end
# 773 "data/maps/Route111/scripts.pory"

# 774 "data/maps/Route111/scripts.pory"
Route111_EventScript_Hayden::
# 775 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_HAYDEN, Route111_Text_HaydenIntro, Route111_Text_HaydenDefeat
# 776 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_HaydenPostBattle, MSGBOX_AUTOCLOSE
# 777 "data/maps/Route111/scripts.pory"
	end
# 778 "data/maps/Route111/scripts.pory"

# 779 "data/maps/Route111/scripts.pory"
Route111_EventScript_Bianca::
# 780 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BIANCA, Route111_Text_BiancaIntro, Route111_Text_BiancaDefeat
# 781 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BiancaPostBattle, MSGBOX_AUTOCLOSE
# 782 "data/maps/Route111/scripts.pory"
	end
# 783 "data/maps/Route111/scripts.pory"

# 784 "data/maps/Route111/scripts.pory"
Route111_EventScript_Tyron::
# 785 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_TYRON, Route111_Text_TyronIntro, Route111_Text_TyronDefeat
# 786 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TyronPostBattle, MSGBOX_AUTOCLOSE
# 787 "data/maps/Route111/scripts.pory"
	end
# 788 "data/maps/Route111/scripts.pory"

# 789 "data/maps/Route111/scripts.pory"
Route111_EventScript_Celina::
# 790 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_CELINA, Route111_Text_CelinaIntro, Route111_Text_CelinaDefeat
# 791 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_CelinaPostBattle, MSGBOX_AUTOCLOSE
# 792 "data/maps/Route111/scripts.pory"
	end
# 793 "data/maps/Route111/scripts.pory"

# 794 "data/maps/Route111/scripts.pory"
Route111_EventScript_Celia::
# 795 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_CELIA, Route111_Text_CeliaIntro, Route111_Text_CeliaDefeat
# 796 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_CeliaPostBattle, MSGBOX_AUTOCLOSE
# 797 "data/maps/Route111/scripts.pory"
	end
# 798 "data/maps/Route111/scripts.pory"

# 799 "data/maps/Route111/scripts.pory"
Route111_EventScript_Bryan::
# 800 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BRYAN, Route111_Text_BryanIntro, Route111_Text_BryanDefeat
# 801 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BryanPostBattle, MSGBOX_AUTOCLOSE
# 802 "data/maps/Route111/scripts.pory"
	end
# 803 "data/maps/Route111/scripts.pory"

# 804 "data/maps/Route111/scripts.pory"
Route111_EventScript_Branden::
# 805 "data/maps/Route111/scripts.pory"
	trainerbattle_single TRAINER_BRANDEN, Route111_Text_BrandenIntro, Route111_Text_BrandenDefeat
# 806 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_BrandenPostBattle, MSGBOX_AUTOCLOSE
# 807 "data/maps/Route111/scripts.pory"
	end
# 808 "data/maps/Route111/scripts.pory"

# 809 "data/maps/Route111/scripts.pory"
Route111_EventScript_TrainerHillSign::
# 810 "data/maps/Route111/scripts.pory"
	msgbox Route111_Text_TrainerHillSign, MSGBOX_SIGN
# 811 "data/maps/Route111/scripts.pory"
	end
# 812 "data/maps/Route111/scripts.pory"

# 813 "data/maps/Route111/scripts.pory"
Route111_Text_BattleOurFamily:
# 814 "data/maps/Route111/scripts.pory"
	.string "Hello! I take it you're a traveler.\p"
# 815 "data/maps/Route111/scripts.pory"
	.string "How's this? What do you say to taking\n"
# 816 "data/maps/Route111/scripts.pory"
	.string "on our family of four in a series of\l"
# 817 "data/maps/Route111/scripts.pory"
	.string "Pokémon battles?$"
# 818 "data/maps/Route111/scripts.pory"

# 819 "data/maps/Route111/scripts.pory"
Route111_Text_WeOnlyAccept:
# 820 "data/maps/Route111/scripts.pory"
	.string "Hello! I take it you're a traveler.\p"
# 821 "data/maps/Route111/scripts.pory"
	.string "Trainers from all over the region come\n"
# 822 "data/maps/Route111/scripts.pory"
	.string "to challenge us.\p"
# 823 "data/maps/Route111/scripts.pory"
	.string "But without the Dynamo Badge, we don't\n"
# 824 "data/maps/Route111/scripts.pory"
	.string "think you'll be much of a match for us…$"
# 825 "data/maps/Route111/scripts.pory"

# 826 "data/maps/Route111/scripts.pory"
Route111_Text_IsThatSo:
# 827 "data/maps/Route111/scripts.pory"
	.string "Is that so?\n"
# 828 "data/maps/Route111/scripts.pory"
	.string "Drop in, if you change your mind!$"
# 829 "data/maps/Route111/scripts.pory"

# 830 "data/maps/Route111/scripts.pory"
Route111_Text_VictorIntro:
# 831 "data/maps/Route111/scripts.pory"
	.string "That's the spirit! I like you!$"
# 832 "data/maps/Route111/scripts.pory"

# 833 "data/maps/Route111/scripts.pory"
Route111_Text_VictorDefeat:
# 834 "data/maps/Route111/scripts.pory"
	.string "Aiyah!\n"
# 835 "data/maps/Route111/scripts.pory"
	.string "You're a lot tougher than I expected!$"
# 836 "data/maps/Route111/scripts.pory"

# 837 "data/maps/Route111/scripts.pory"
Route111_Text_VictorPostBattle:
# 838 "data/maps/Route111/scripts.pory"
	.string "Hey, all!\n"
# 839 "data/maps/Route111/scripts.pory"
	.string "I've found a pretty strong Trainer!$"
# 840 "data/maps/Route111/scripts.pory"

# 841 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaIntro:
# 842 "data/maps/Route111/scripts.pory"
	.string "Oh, my goodness! Aren't you young?\p"
# 843 "data/maps/Route111/scripts.pory"
	.string "You must be quite the Trainer to beat\n"
# 844 "data/maps/Route111/scripts.pory"
	.string "my husband, though.\p"
# 845 "data/maps/Route111/scripts.pory"
	.string "It's my turn to battle now!$"
# 846 "data/maps/Route111/scripts.pory"

# 847 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaDefeat:
# 848 "data/maps/Route111/scripts.pory"
	.string "Oh, gosh!\n"
# 849 "data/maps/Route111/scripts.pory"
	.string "I can't get over how strong you are!$"
# 850 "data/maps/Route111/scripts.pory"

# 851 "data/maps/Route111/scripts.pory"
Route111_Text_VictoriaPostBattle:
# 852 "data/maps/Route111/scripts.pory"
	.string "There's a strong Trainer here!\n"
# 853 "data/maps/Route111/scripts.pory"
	.string "This one's really strong!$"
# 854 "data/maps/Route111/scripts.pory"

# 855 "data/maps/Route111/scripts.pory"
Route111_Text_ViviIntro:
# 856 "data/maps/Route111/scripts.pory"
	.string "You're stronger than Mommy? Wow!\p"
# 857 "data/maps/Route111/scripts.pory"
	.string "But I'm strong, too!\n"
# 858 "data/maps/Route111/scripts.pory"
	.string "Really! Honestly!$"
# 859 "data/maps/Route111/scripts.pory"

# 860 "data/maps/Route111/scripts.pory"
Route111_Text_ViviDefeat:
# 861 "data/maps/Route111/scripts.pory"
	.string "Huh? Did I just lose?$"
# 862 "data/maps/Route111/scripts.pory"

# 863 "data/maps/Route111/scripts.pory"
Route111_Text_ViviPostBattle:
# 864 "data/maps/Route111/scripts.pory"
	.string "This stinks…\p"
# 865 "data/maps/Route111/scripts.pory"
	.string "…Snivel… Grandma!$"
# 866 "data/maps/Route111/scripts.pory"

# 867 "data/maps/Route111/scripts.pory"
Route111_Text_VickyIntro:
# 868 "data/maps/Route111/scripts.pory"
	.string "How dare you make my granddaughter\n"
# 869 "data/maps/Route111/scripts.pory"
	.string "cry!\p"
# 870 "data/maps/Route111/scripts.pory"
	.string "For that, I'm going to smack you!\n"
# 871 "data/maps/Route111/scripts.pory"
	.string "Prepare to lose!$"
# 872 "data/maps/Route111/scripts.pory"

# 873 "data/maps/Route111/scripts.pory"
Route111_Text_VickyDefeat:
# 874 "data/maps/Route111/scripts.pory"
	.string "Kwah! You are strong…\n"
# 875 "data/maps/Route111/scripts.pory"
	.string "My granddaughter was right…$"
# 876 "data/maps/Route111/scripts.pory"

# 877 "data/maps/Route111/scripts.pory"
Route111_Text_VickyPostBattle:
# 878 "data/maps/Route111/scripts.pory"
	.string "If you're not in any hurry,\n"
# 879 "data/maps/Route111/scripts.pory"
	.string "visit with us awhile.$"
# 880 "data/maps/Route111/scripts.pory"

# 881 "data/maps/Route111/scripts.pory"
Route111_Text_ToughToKeepWinningUpTheRanks:
# 882 "data/maps/Route111/scripts.pory"
	.string "If you don't raise your Pokémon some\n"
# 883 "data/maps/Route111/scripts.pory"
	.string "more, it could be tough to keep winning\l"
# 884 "data/maps/Route111/scripts.pory"
	.string "up through the ranks.\p"
# 885 "data/maps/Route111/scripts.pory"
	.string "I've heard the Pokémon League's\n"
# 886 "data/maps/Route111/scripts.pory"
	.string "Elite Four are far stronger than\l"
# 887 "data/maps/Route111/scripts.pory"
	.string "any Gym Leader.$"
# 888 "data/maps/Route111/scripts.pory"

# 889 "data/maps/Route111/scripts.pory"
Route111_Text_WinstrateFamilyDestroyedMe:
# 890 "data/maps/Route111/scripts.pory"
	.string "I challenged the Winstrate family,\n"
# 891 "data/maps/Route111/scripts.pory"
	.string "but four matches in a row is tough\l"
# 892 "data/maps/Route111/scripts.pory"
	.string "going… They destroyed me.$"
# 893 "data/maps/Route111/scripts.pory"

# 894 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSignMauville:
# 895 "data/maps/Route111/scripts.pory"
	.string "Route 111\n"
# 896 "data/maps/Route111/scripts.pory"
	.string "{LEFT_ARROW} Route 117$"
# 897 "data/maps/Route111/scripts.pory"

# 898 "data/maps/Route111/scripts.pory"
Route111_Text_WinstrateHouseSign:
# 899 "data/maps/Route111/scripts.pory"
	.string "“Our family's hearts beat as one!”\n"
# 900 "data/maps/Route111/scripts.pory"
	.string "The Winstrate's House$"
# 901 "data/maps/Route111/scripts.pory"

# 902 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSign112:
# 903 "data/maps/Route111/scripts.pory"
	.string "{UP_ARROW} Terra Cave\n"
# 904 "data/maps/Route111/scripts.pory"
	.string "{LEFT_ARROW} Route 112$"
# 905 "data/maps/Route111/scripts.pory"

# 906 "data/maps/Route111/scripts.pory"
Route111_Text_RouteSign113:
# 907 "data/maps/Route111/scripts.pory"
	.string "Route 111\n"
# 908 "data/maps/Route111/scripts.pory"
	.string "{LEFT_ARROW} Route 113$"
# 909 "data/maps/Route111/scripts.pory"

# 910 "data/maps/Route111/scripts.pory"
Route111_Text_OldLadysRestStopSign:
# 911 "data/maps/Route111/scripts.pory"
	.string "Old Lady's Rest Stop\n"
# 912 "data/maps/Route111/scripts.pory"
	.string "“Come in and rest your tired bones.”$"
# 913 "data/maps/Route111/scripts.pory"

# 914 "data/maps/Route111/scripts.pory"
Route111_Text_TrainerTipsSpAtkSpDef:
# 915 "data/maps/Route111/scripts.pory"
	.string "Trainer Tips\p"
# 916 "data/maps/Route111/scripts.pory"
	.string "One of the indicators of a Pokémon's\n"
# 917 "data/maps/Route111/scripts.pory"
	.string "powerfulness is Sp. Atk. It stands for\l"
# 918 "data/maps/Route111/scripts.pory"
	.string "“Special Attack.”\p"
# 919 "data/maps/Route111/scripts.pory"
	.string "Likewise, Sp. Def stands for “Special\n"
# 920 "data/maps/Route111/scripts.pory"
	.string "Defense.”$"
# 921 "data/maps/Route111/scripts.pory"

# 922 "data/maps/Route111/scripts.pory"
Route111_Text_ShouldBeMirageTowerAroundHere:
# 923 "data/maps/Route111/scripts.pory"
	.string "There should be a tower made of sand\n"
# 924 "data/maps/Route111/scripts.pory"
	.string "around here somewhere.\p"
# 925 "data/maps/Route111/scripts.pory"
	.string "But for some reason, it can be seen\n"
# 926 "data/maps/Route111/scripts.pory"
	.string "sometimes, and sometimes not.\p"
# 927 "data/maps/Route111/scripts.pory"
	.string "That's why I call it the Mirage Tower.$"
# 928 "data/maps/Route111/scripts.pory"

# 929 "data/maps/Route111/scripts.pory"
Route111_Text_MirageTowerClearlyVisible:
# 930 "data/maps/Route111/scripts.pory"
	.string "I see it!\n"
# 931 "data/maps/Route111/scripts.pory"
	.string "The tower of sand!\p"
# 932 "data/maps/Route111/scripts.pory"
	.string "The sand tower they called a mirage\n"
# 933 "data/maps/Route111/scripts.pory"
	.string "is clearly visible!\p"
# 934 "data/maps/Route111/scripts.pory"
	.string "But it looks so fragile…\n"
# 935 "data/maps/Route111/scripts.pory"
	.string "It could crumble away anytime…\p"
# 936 "data/maps/Route111/scripts.pory"
	.string "I want to go inside it, but I can't\n"
# 937 "data/maps/Route111/scripts.pory"
	.string "get my courage up for it…$"
# 938 "data/maps/Route111/scripts.pory"

# 939 "data/maps/Route111/scripts.pory"
Route111_Text_ThatWasShockingSandRainedDown:
# 940 "data/maps/Route111/scripts.pory"
	.string "Whoa…\n"
# 941 "data/maps/Route111/scripts.pory"
	.string "That was shocking.\p"
# 942 "data/maps/Route111/scripts.pory"
	.string "Sand rained down in chunks all of\n"
# 943 "data/maps/Route111/scripts.pory"
	.string "a sudden.\p"
# 944 "data/maps/Route111/scripts.pory"
	.string "What was it like inside?\n"
# 945 "data/maps/Route111/scripts.pory"
	.string "Were there sandy ghosts and such?$"
# 946 "data/maps/Route111/scripts.pory"

# 947 "data/maps/Route111/scripts.pory"
Route111_Text_MirageTowerHasntBeenSeenSince:
# 948 "data/maps/Route111/scripts.pory"
	.string "Since I spoke to you, the tower of sand\n"
# 949 "data/maps/Route111/scripts.pory"
	.string "hasn't been seen.\p"
# 950 "data/maps/Route111/scripts.pory"
	.string "Perhaps it really was\n"
# 951 "data/maps/Route111/scripts.pory"
	.string "the Mirage Tower…$"
# 952 "data/maps/Route111/scripts.pory"

# 953 "data/maps/Route111/scripts.pory"
Route111_Text_ClawFossilDisappeared:
# 954 "data/maps/Route111/scripts.pory"
	.string "The Claw Fossil disappeared into\n"
# 955 "data/maps/Route111/scripts.pory"
	.string "the sand…$"
# 956 "data/maps/Route111/scripts.pory"

# 957 "data/maps/Route111/scripts.pory"
Route111_Text_RootFossilDisappeared:
# 958 "data/maps/Route111/scripts.pory"
	.string "The Root Fossil disappeared into\n"
# 959 "data/maps/Route111/scripts.pory"
	.string "the sand…$"
# 960 "data/maps/Route111/scripts.pory"

# 961 "data/maps/Route111/scripts.pory"
Route111_Text_MauvilleUncleToldMeToTakeRockSmash:
# 962 "data/maps/Route111/scripts.pory"
	.string "Oh, no!\p"
# 963 "data/maps/Route111/scripts.pory"
	.string "My uncle on Route 116 told me to take\n"
# 964 "data/maps/Route111/scripts.pory"
	.string "Rock Smash with me if I was going to\l"
# 965 "data/maps/Route111/scripts.pory"
	.string "Route 111!\p"
# 966 "data/maps/Route111/scripts.pory"
	.string "My uncle? He lives right next to\n"
# 967 "data/maps/Route111/scripts.pory"
	.string "Rusturf Tunnel.$"
# 968 "data/maps/Route111/scripts.pory"

# 969 "data/maps/Route111/scripts.pory"
Route111_Text_TrainerHillSign:
# 970 "data/maps/Route111/scripts.pory"
	.string "{RIGHT_ARROW} Trainer Hill Entrance\p"
# 971 "data/maps/Route111/scripts.pory"
	.string "“Scale the heights, you hot-blooded\n"
# 972 "data/maps/Route111/scripts.pory"
	.string "Trainers!”$"

Route111_EventScript_Clair_Text_0:
# 55 "data/maps/Route111/scripts.pory"
	.string "I think you could make good use of this\n"
	.string "Egg, do you want it?$"

Route111_EventScript_Clair_Text_1:
# 58 "data/maps/Route111/scripts.pory"
	.string "Alright, I'll be here in case you\n"
	.string "change your mind.$"

Route111_EventScript_Clair_Text_2:
# 62 "data/maps/Route111/scripts.pory"
	.string "{PLAYER} received the Egg.$"

Route111_EventScript_Clair_Text_3:
# 86 "data/maps/Route111/scripts.pory"
	.string "That Egg has one of the strongest\n"
	.string "Dragon type Pokémon around!\p"
	.string "Raise it well and use it wisely.$"

Route111_EventScript_ClairDefeated_Text_0:
# 119 "data/maps/Route111/scripts.pory"
	.string "Oops, I got ahead of myself there.\p"
	.string "My name is Clair, and I'm a Gym Leader\n"
	.string "from the Johto region.\p"
	.string "I came here to learn more about an\n"
	.string "ancient legend, but I haven't had any\l"
	.string "luck so far…\p"
	.string "I think you could make good use of this\n"
	.string "Egg, do you want it?$"

Route111_EventScript_ClairExits_Text_0:
# 173 "data/maps/Route111/scripts.pory"
	.string "It looks like Clair dropped something.$"

Route111_EventScript_Marley_Text_0:
# 196 "data/maps/Route111/scripts.pory"
	.string "You're so strong,\n"
	.string "it makes me feel happy!\p"
	.string "I really enjoyed our battle.\n"
	.string "Next time, I won't lose!$"

Route111_Text_ClairIntro::
# 98 "data/maps/Route111/scripts.pory"
	.string "Excuse me. Can you tell me how to get\n"
	.string "to Mt. Chimney?\p"
	.string "…\p"
	.string "You say it's blocked?\p"
	.string "That won't do, I told a colleague that I\n"
	.string "would meet him there.\p"
	.string "…\p"
	.string "You're trying to get there too, you say?\p"
	.string "Don't tell me you're after it as well…\n"
	.string "In that case, I challenge you!$"

Route111_Text_ClairDefeat::
# 111 "data/maps/Route111/scripts.pory"
	.string "This can't be…$"

Route111_Text_MarleyIntro::
# 205 "data/maps/Route111/scripts.pory"
	.string "I'm Marley. …You are?\p"
	.string "{PLAYER}. I see…\n"
	.string "Riley and Cheryl told me about you.\p"
	.string "I don't like to chat, I prefer to let my\n"
	.string "Pokémon and their blazing Speed stat do\l"
	.string "all the talking for me!\p"
	.string "Are you ready?$"

Route111_Text_MarleyDefeat::
# 215 "data/maps/Route111/scripts.pory"
	.string "I got left in the dust…$"
