Route103_EventScript_Norman::
# 4 "data/maps/Route103/scripts.pory"
	lock
# 5 "data/maps/Route103/scripts.pory"
	faceplayer
# 6 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_Norman_Text_0
# 16 "data/maps/Route103/scripts.pory"
	giveitem ITEM_HM_SURF
# 17 "data/maps/Route103/scripts.pory"
	msgbox Route103_EventScript_Norman_Text_1
# 24 "data/maps/Route103/scripts.pory"
	closemessage
# 25 "data/maps/Route103/scripts.pory"
	fadescreen FADE_TO_BLACK
# 26 "data/maps/Route103/scripts.pory"
	removeobject 12
# 27 "data/maps/Route103/scripts.pory"
	setflag FLAG_HIDE_ROUTE_103_NORMAN
# 28 "data/maps/Route103/scripts.pory"
	clearflag FLAG_HIDE_ROUTE_107_SWIMMERS
# 29 "data/maps/Route103/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 30 "data/maps/Route103/scripts.pory"
	release
	end


# 34 "data/maps/Route103/scripts.pory"

# 35 "data/maps/Route103/scripts.pory"
.set LOCALID_RIVAL, 2
# 36 "data/maps/Route103/scripts.pory"

# 37 "data/maps/Route103/scripts.pory"
Route103_MapScripts::
# 38 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route103_OnTransition
# 39 "data/maps/Route103/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, Route103_OnLoad
# 40 "data/maps/Route103/scripts.pory"
	.byte 0
# 41 "data/maps/Route103/scripts.pory"

# 42 "data/maps/Route103/scripts.pory"
Route103_OnTransition:
# 43 "data/maps/Route103/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 44 "data/maps/Route103/scripts.pory"
	call ProfBirch_EventScript_UpdateLocation
# 45 "data/maps/Route103/scripts.pory"
	end
# 46 "data/maps/Route103/scripts.pory"

# 47 "data/maps/Route103/scripts.pory"
Route103_OnLoad:
# 48 "data/maps/Route103/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, Route103_EventScript_OpenAlteringCave
# 49 "data/maps/Route103/scripts.pory"
	end
# 50 "data/maps/Route103/scripts.pory"

# 51 "data/maps/Route103/scripts.pory"
Route103_EventScript_OpenAlteringCave::
# 52 "data/maps/Route103/scripts.pory"
	setmetatile 45, 5, METATILE_General_CaveEntrance_Top, TRUE
# 53 "data/maps/Route103/scripts.pory"
	setmetatile 45, 6, METATILE_General_CaveEntrance_Bottom, FALSE
# 54 "data/maps/Route103/scripts.pory"
	return
# 55 "data/maps/Route103/scripts.pory"

# 56 "data/maps/Route103/scripts.pory"
Route103_EventScript_Rival::
# 57 "data/maps/Route103/scripts.pory"
	lockall
# 58 "data/maps/Route103/scripts.pory"
	checkplayergender
# 59 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route103_EventScript_RivalMay
# 60 "data/maps/Route103/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route103_EventScript_RivalBrendan
# 61 "data/maps/Route103/scripts.pory"
	end
# 62 "data/maps/Route103/scripts.pory"

# 63 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalMay::
# 64 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayRoute103Pokemon, MSGBOX_DEFAULT
# 65 "data/maps/Route103/scripts.pory"
	closemessage
# 66 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 67 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 68 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 69 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 70 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 71 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 72 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 73 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayLetsBattle, MSGBOX_DEFAULT
# 74 "data/maps/Route103/scripts.pory"
	switch VAR_STARTER_MON
# 75 "data/maps/Route103/scripts.pory"
	case 0, Route103_EventScript_StartMayBattleTreecko
# 76 "data/maps/Route103/scripts.pory"
	case 1, Route103_EventScript_StartMayBattleTorchic
# 77 "data/maps/Route103/scripts.pory"
	case 2, Route103_EventScript_StartMayBattleMudkip
# 78 "data/maps/Route103/scripts.pory"
	end
# 79 "data/maps/Route103/scripts.pory"

# 80 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalBrendan::
# 81 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanRoute103Pokemon, MSGBOX_DEFAULT
# 82 "data/maps/Route103/scripts.pory"
	closemessage
# 83 "data/maps/Route103/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 84 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
# 85 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 86 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 87 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 88 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 89 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 90 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanLetsBattle, MSGBOX_DEFAULT
# 91 "data/maps/Route103/scripts.pory"
	switch VAR_STARTER_MON
# 92 "data/maps/Route103/scripts.pory"
	case 0, Route103_EventScript_StartBrendanBattleTreecko
# 93 "data/maps/Route103/scripts.pory"
	case 1, Route103_EventScript_StartBrendanBattleTorchic
# 94 "data/maps/Route103/scripts.pory"
	case 2, Route103_EventScript_StartBrendanBattleMudkip
# 95 "data/maps/Route103/scripts.pory"
	end
# 96 "data/maps/Route103/scripts.pory"

# 97 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartMayBattleTreecko::
# 98 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TREECKO, Route103_Text_MayDefeated
# 99 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterMayBattle
# 100 "data/maps/Route103/scripts.pory"
	end
# 101 "data/maps/Route103/scripts.pory"

# 102 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartMayBattleTorchic::
# 103 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TORCHIC, Route103_Text_MayDefeated
# 104 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterMayBattle
# 105 "data/maps/Route103/scripts.pory"
	end
# 106 "data/maps/Route103/scripts.pory"

# 107 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartMayBattleMudkip::
# 108 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_MUDKIP, Route103_Text_MayDefeated
# 109 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterMayBattle
# 110 "data/maps/Route103/scripts.pory"
	end
# 111 "data/maps/Route103/scripts.pory"

# 112 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartBrendanBattleTreecko::
# 113 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TREECKO, Route103_Text_BrendanDefeated
# 114 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterBrendanBattle
# 115 "data/maps/Route103/scripts.pory"
	end
# 116 "data/maps/Route103/scripts.pory"

# 117 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartBrendanBattleTorchic::
# 118 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TORCHIC, Route103_Text_BrendanDefeated
# 119 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterBrendanBattle
# 120 "data/maps/Route103/scripts.pory"
	end
# 121 "data/maps/Route103/scripts.pory"

# 122 "data/maps/Route103/scripts.pory"
Route103_EventScript_StartBrendanBattleMudkip::
# 123 "data/maps/Route103/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_MUDKIP, Route103_Text_BrendanDefeated
# 124 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_AfterBrendanBattle
# 125 "data/maps/Route103/scripts.pory"
	end
# 126 "data/maps/Route103/scripts.pory"

# 127 "data/maps/Route103/scripts.pory"
Route103_EventScript_AfterMayBattle::
# 128 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MayTimeToHeadBack, MSGBOX_DEFAULT
# 129 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalExit
# 130 "data/maps/Route103/scripts.pory"
	end
# 131 "data/maps/Route103/scripts.pory"

# 132 "data/maps/Route103/scripts.pory"
Route103_EventScript_AfterBrendanBattle::
# 133 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_BrendanTimeToHeadBack, MSGBOX_DEFAULT
# 134 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalExit
# 135 "data/maps/Route103/scripts.pory"
	end
# 136 "data/maps/Route103/scripts.pory"

# 137 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExit::
# 138 "data/maps/Route103/scripts.pory"
	closemessage
# 139 "data/maps/Route103/scripts.pory"
	switch VAR_FACING
# 140 "data/maps/Route103/scripts.pory"
	case DIR_SOUTH, Route103_EventScript_RivalExitFacingSouth
# 141 "data/maps/Route103/scripts.pory"
	case DIR_NORTH, Route103_EventScript_RivalExitFacingNorth
# 142 "data/maps/Route103/scripts.pory"
	case DIR_WEST, Route103_EventScript_RivalExitFacingEastOrWest
# 143 "data/maps/Route103/scripts.pory"
	case DIR_EAST, Route103_EventScript_RivalExitFacingEastOrWest
# 144 "data/maps/Route103/scripts.pory"
	end
# 145 "data/maps/Route103/scripts.pory"

# 146 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingNorth::
# 147 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103_Movement_WatchRivalExitFacingNorth
# 148 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExitFacingNorth1
# 149 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 150 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 151 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExitFacingNorth2
# 152 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 153 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 154 "data/maps/Route103/scripts.pory"
	end
# 155 "data/maps/Route103/scripts.pory"

# 156 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingEastOrWest::
# 157 "data/maps/Route103/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Route103_Movement_WatchRivalExitFacingEastOrWest
# 158 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit1
# 159 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 160 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 161 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit2
# 162 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 163 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 164 "data/maps/Route103/scripts.pory"
	end
# 165 "data/maps/Route103/scripts.pory"

# 166 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalExitFacingSouth::
# 167 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit1
# 168 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 169 "data/maps/Route103/scripts.pory"
	playse SE_LEDGE
# 170 "data/maps/Route103/scripts.pory"
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit2
# 171 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 172 "data/maps/Route103/scripts.pory"
	goto Route103_EventScript_RivalEnd
# 173 "data/maps/Route103/scripts.pory"
	end
# 174 "data/maps/Route103/scripts.pory"

# 175 "data/maps/Route103/scripts.pory"
Route103_EventScript_RivalEnd::
# 176 "data/maps/Route103/scripts.pory"
	removeobject LOCALID_RIVAL
# 177 "data/maps/Route103/scripts.pory"
	setvar VAR_BIRCH_LAB_STATE, 4
# 178 "data/maps/Route103/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 179 "data/maps/Route103/scripts.pory"
	setflag FLAG_DEFEATED_RIVAL_ROUTE103
# 180 "data/maps/Route103/scripts.pory"
	setvar VAR_OLDALE_RIVAL_STATE, 1
# 181 "data/maps/Route103/scripts.pory"
	clearflag FLAG_HIDE_OLDALE_TOWN_RIVAL
# 182 "data/maps/Route103/scripts.pory"
	savebgm MUS_DUMMY
# 183 "data/maps/Route103/scripts.pory"
	fadedefaultbgm
# 184 "data/maps/Route103/scripts.pory"
	releaseall
# 185 "data/maps/Route103/scripts.pory"
	end
# 186 "data/maps/Route103/scripts.pory"

# 187 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExitFacingNorth1:
# 188 "data/maps/Route103/scripts.pory"
	walk_left
# 189 "data/maps/Route103/scripts.pory"
	walk_down
# 190 "data/maps/Route103/scripts.pory"
	step_end
# 191 "data/maps/Route103/scripts.pory"

# 192 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExitFacingNorth2:
# 193 "data/maps/Route103/scripts.pory"
	jump_2_down
# 194 "data/maps/Route103/scripts.pory"
	delay_16
# 195 "data/maps/Route103/scripts.pory"
	walk_down
# 196 "data/maps/Route103/scripts.pory"
	walk_down
# 197 "data/maps/Route103/scripts.pory"
	walk_down
# 198 "data/maps/Route103/scripts.pory"
	walk_down
# 199 "data/maps/Route103/scripts.pory"
	step_end
# 200 "data/maps/Route103/scripts.pory"

# 201 "data/maps/Route103/scripts.pory"
Route103_Movement_WatchRivalExitFacingNorth:
# 202 "data/maps/Route103/scripts.pory"
	delay_16
# 203 "data/maps/Route103/scripts.pory"
	delay_4
# 204 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_left
# 205 "data/maps/Route103/scripts.pory"
	delay_16
# 206 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_down
# 207 "data/maps/Route103/scripts.pory"
	step_end
# 208 "data/maps/Route103/scripts.pory"

# 209 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExit1:
# 210 "data/maps/Route103/scripts.pory"
	walk_down
# 211 "data/maps/Route103/scripts.pory"
	step_end
# 212 "data/maps/Route103/scripts.pory"

# 213 "data/maps/Route103/scripts.pory"
Route103_Movement_RivalExit2:
# 214 "data/maps/Route103/scripts.pory"
	jump_2_down
# 215 "data/maps/Route103/scripts.pory"
	delay_16
# 216 "data/maps/Route103/scripts.pory"
	walk_down
# 217 "data/maps/Route103/scripts.pory"
	walk_down
# 218 "data/maps/Route103/scripts.pory"
	walk_down
# 219 "data/maps/Route103/scripts.pory"
	step_end
# 220 "data/maps/Route103/scripts.pory"

# 221 "data/maps/Route103/scripts.pory"
Route103_Movement_WatchRivalExitFacingEastOrWest:
# 222 "data/maps/Route103/scripts.pory"
	delay_16
# 223 "data/maps/Route103/scripts.pory"
	walk_in_place_faster_down
# 224 "data/maps/Route103/scripts.pory"
	step_end
# 225 "data/maps/Route103/scripts.pory"

# 226 "data/maps/Route103/scripts.pory"
Route103_EventScript_Boy::
# 227 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShouldHaveBroughtPotion, MSGBOX_NPC
# 228 "data/maps/Route103/scripts.pory"
	end
# 229 "data/maps/Route103/scripts.pory"

# 230 "data/maps/Route103/scripts.pory"
Route103_EventScript_Man::
# 231 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_ShortcutToOldale, MSGBOX_NPC
# 232 "data/maps/Route103/scripts.pory"
	end
# 233 "data/maps/Route103/scripts.pory"

# 234 "data/maps/Route103/scripts.pory"
Route103_EventScript_RouteSign::
# 235 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RouteSign, MSGBOX_SIGN
# 236 "data/maps/Route103/scripts.pory"
	end
# 237 "data/maps/Route103/scripts.pory"

# 238 "data/maps/Route103/scripts.pory"
Route103_EventScript_Daisy::
# 239 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_DAISY, Route103_Text_DaisyIntro, Route103_Text_DaisyDefeated
# 240 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_DaisyPostBattle, MSGBOX_AUTOCLOSE
# 241 "data/maps/Route103/scripts.pory"
	end
# 242 "data/maps/Route103/scripts.pory"

# 243 "data/maps/Route103/scripts.pory"
Route103_EventScript_Amy::
# 244 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyIntro, Route103_Text_AmyDefeated, Route103_Text_AmyNotEnoughPokemon
# 245 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyPostBattle, MSGBOX_AUTOCLOSE
# 246 "data/maps/Route103/scripts.pory"
	end
# 247 "data/maps/Route103/scripts.pory"

# 248 "data/maps/Route103/scripts.pory"
Route102_EventScript_AmyRegisterMatchCallAfterBattle::
# 249 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 250 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 251 "data/maps/Route103/scripts.pory"
	release
# 252 "data/maps/Route103/scripts.pory"
	end
# 253 "data/maps/Route103/scripts.pory"

# 254 "data/maps/Route103/scripts.pory"
Route102_EventScript_AmyRematch::
# 255 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyRematchIntro, Route103_Text_AmyRematchDefeated, Route103_Text_AmyRematchNotEnoughPokemon
# 256 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyRematchPostBattle, MSGBOX_AUTOCLOSE
# 257 "data/maps/Route103/scripts.pory"
	end
# 258 "data/maps/Route103/scripts.pory"

# 259 "data/maps/Route103/scripts.pory"
Route103_EventScript_Liv::
# 260 "data/maps/Route103/scripts.pory"
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivIntro, Route103_Text_LivDefeated, Route103_Text_LivNotEnoughPokemon
# 261 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivPostBattle, MSGBOX_AUTOCLOSE
# 262 "data/maps/Route103/scripts.pory"
	end
# 263 "data/maps/Route103/scripts.pory"

# 264 "data/maps/Route103/scripts.pory"
Route102_EventScript_LivRegisterMatchCallAfterBattle::
# 265 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
# 266 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_AMY_AND_LIV_1
# 267 "data/maps/Route103/scripts.pory"
	release
# 268 "data/maps/Route103/scripts.pory"
	end
# 269 "data/maps/Route103/scripts.pory"

# 270 "data/maps/Route103/scripts.pory"
Route102_EventScript_LivRematch::
# 271 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivRematchIntro, Route103_Text_LivRematchDefeated, Route103_Text_LivRematchNotEnoughPokemon
# 272 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_LivRematchPostBattle, MSGBOX_AUTOCLOSE
# 273 "data/maps/Route103/scripts.pory"
	end
# 274 "data/maps/Route103/scripts.pory"

# 275 "data/maps/Route103/scripts.pory"
Route103_EventScript_Andrew::
# 276 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ANDREW, Route103_Text_AndrewIntro, Route103_Text_AndrewDefeated
# 277 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_AndrewPostBattle, MSGBOX_AUTOCLOSE
# 278 "data/maps/Route103/scripts.pory"
	end
# 279 "data/maps/Route103/scripts.pory"

# 280 "data/maps/Route103/scripts.pory"
Route103_EventScript_Miguel::
# 281 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MIGUEL_1, Route103_Text_MiguelIntro, Route103_Text_MiguelDefeated
# 282 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelPostBattle, MSGBOX_DEFAULT
# 283 "data/maps/Route103/scripts.pory"
	release
# 284 "data/maps/Route103/scripts.pory"
	end
# 285 "data/maps/Route103/scripts.pory"

# 286 "data/maps/Route103/scripts.pory"
Route102_EventScript_MiguelRegisterMatchCallAfterBattle::
# 287 "data/maps/Route103/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 288 "data/maps/Route103/scripts.pory"
	waitmovement 0
# 289 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRegister, MSGBOX_DEFAULT
# 290 "data/maps/Route103/scripts.pory"
	register_matchcall TRAINER_MIGUEL_1
# 291 "data/maps/Route103/scripts.pory"
	release
# 292 "data/maps/Route103/scripts.pory"
	end
# 293 "data/maps/Route103/scripts.pory"

# 294 "data/maps/Route103/scripts.pory"
Route103_EventScript_MiguelRematch::
# 295 "data/maps/Route103/scripts.pory"
	trainerbattle_rematch TRAINER_MIGUEL_1, Route103_Text_MiguelRematchIntro, Route103_Text_MiguelRematchDefeated
# 296 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MiguelRematchPostBattle, MSGBOX_AUTOCLOSE
# 297 "data/maps/Route103/scripts.pory"
	end
# 298 "data/maps/Route103/scripts.pory"

# 299 "data/maps/Route103/scripts.pory"
Route103_EventScript_Marcos::
# 300 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_MARCOS, Route103_Text_MarcosIntro, Route103_Text_MarcosDefeated
# 301 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_MarcosPostBattle, MSGBOX_AUTOCLOSE
# 302 "data/maps/Route103/scripts.pory"
	end
# 303 "data/maps/Route103/scripts.pory"

# 304 "data/maps/Route103/scripts.pory"
Route103_EventScript_Rhett::
# 305 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_RHETT, Route103_Text_RhettIntro, Route103_Text_RhettDefeated
# 306 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_RhettPostBattle, MSGBOX_AUTOCLOSE
# 307 "data/maps/Route103/scripts.pory"
	end
# 308 "data/maps/Route103/scripts.pory"

# 309 "data/maps/Route103/scripts.pory"
Route103_EventScript_Pete::
# 310 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_PETE, Route103_Text_PeteIntro, Route103_Text_PeteDefeated
# 311 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_PetePostBattle, MSGBOX_AUTOCLOSE
# 312 "data/maps/Route103/scripts.pory"
	end
# 313 "data/maps/Route103/scripts.pory"

# 314 "data/maps/Route103/scripts.pory"
Route103_EventScript_Isabelle::
# 315 "data/maps/Route103/scripts.pory"
	trainerbattle_single TRAINER_ISABELLE, Route103_Text_IsabelleIntro, Route103_Text_IsabelleDefeated
# 316 "data/maps/Route103/scripts.pory"
	msgbox Route103_Text_IsabellePostBattle, MSGBOX_AUTOCLOSE
# 317 "data/maps/Route103/scripts.pory"
	end
# 318 "data/maps/Route103/scripts.pory"

# 319 "data/maps/Route103/scripts.pory"
Route103_Text_MayRoute103Pokemon:
# 320 "data/maps/Route103/scripts.pory"
	.string "MAY: Let's see… The Pokémon found\n"
# 321 "data/maps/Route103/scripts.pory"
	.string "on ROUTE 103 include…$"
# 322 "data/maps/Route103/scripts.pory"

# 323 "data/maps/Route103/scripts.pory"
Route103_Text_MayLetsBattle:
# 324 "data/maps/Route103/scripts.pory"
	.string "Oh, hi, {PLAYER}{KUN}!\p"
# 325 "data/maps/Route103/scripts.pory"
	.string "…Oh, I see, my dad gave you\n"
# 326 "data/maps/Route103/scripts.pory"
	.string "a Pokémon as a gift.\p"
# 327 "data/maps/Route103/scripts.pory"
	.string "Since we're here, let's have a quick\n"
# 328 "data/maps/Route103/scripts.pory"
	.string "battle!\p"
# 329 "data/maps/Route103/scripts.pory"
	.string "I'll give you a taste of what being\n"
# 330 "data/maps/Route103/scripts.pory"
	.string "a TRAINER is like.$"
# 331 "data/maps/Route103/scripts.pory"

# 332 "data/maps/Route103/scripts.pory"
Route103_Text_MayDefeated:
# 333 "data/maps/Route103/scripts.pory"
	.string "Wow! That's great!\n"
# 334 "data/maps/Route103/scripts.pory"
	.string "{PLAYER}{KUN}, you're pretty good!$"
# 335 "data/maps/Route103/scripts.pory"

# 336 "data/maps/Route103/scripts.pory"
Route103_Text_MayTimeToHeadBack:
# 337 "data/maps/Route103/scripts.pory"
	.string "MAY: I think I know why my dad has\n"
# 338 "data/maps/Route103/scripts.pory"
	.string "an eye out for you now.\p"
# 339 "data/maps/Route103/scripts.pory"
	.string "I mean, you just got that Pokémon,\n"
# 340 "data/maps/Route103/scripts.pory"
	.string "but it already likes you.\p"
# 341 "data/maps/Route103/scripts.pory"
	.string "You might be able to befriend any\n"
# 342 "data/maps/Route103/scripts.pory"
	.string "kind of Pokémon easily.\p"
# 343 "data/maps/Route103/scripts.pory"
	.string "Well, it's time to head back to\n"
# 344 "data/maps/Route103/scripts.pory"
	.string "the LAB.$"
# 345 "data/maps/Route103/scripts.pory"

# 346 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanRoute103Pokemon:
# 347 "data/maps/Route103/scripts.pory"
	.string "BRENDAN: Okay, so it's this one and\n"
# 348 "data/maps/Route103/scripts.pory"
	.string "that one that live on ROUTE 103…$"
# 349 "data/maps/Route103/scripts.pory"

# 350 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanLetsBattle:
# 351 "data/maps/Route103/scripts.pory"
	.string "Hey, it's {PLAYER}!\p"
# 352 "data/maps/Route103/scripts.pory"
	.string "…Oh, yeah, Dad gave you a Pokémon.\p"
# 353 "data/maps/Route103/scripts.pory"
	.string "Since we're here, how about a little\n"
# 354 "data/maps/Route103/scripts.pory"
	.string "battle?\p"
# 355 "data/maps/Route103/scripts.pory"
	.string "I'll teach you what being a TRAINER's\n"
# 356 "data/maps/Route103/scripts.pory"
	.string "about!$"
# 357 "data/maps/Route103/scripts.pory"

# 358 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanDefeated:
# 359 "data/maps/Route103/scripts.pory"
	.string "Huh, {PLAYER}, you're not too shabby.$"
# 360 "data/maps/Route103/scripts.pory"

# 361 "data/maps/Route103/scripts.pory"
Route103_Text_BrendanTimeToHeadBack:
# 362 "data/maps/Route103/scripts.pory"
	.string "BRENDAN: I think I get it.\n"
# 363 "data/maps/Route103/scripts.pory"
	.string "I think I know why my dad has his eye\l"
# 364 "data/maps/Route103/scripts.pory"
	.string "out for you now.\p"
# 365 "data/maps/Route103/scripts.pory"
	.string "Look, your Pokémon already likes you,\n"
# 366 "data/maps/Route103/scripts.pory"
	.string "even though you just got it.\p"
# 367 "data/maps/Route103/scripts.pory"
	.string "{PLAYER}, I get the feeling that you\n"
# 368 "data/maps/Route103/scripts.pory"
	.string "could befriend any Pokémon with ease.\p"
# 369 "data/maps/Route103/scripts.pory"
	.string "We should head back to the LAB.$"
# 370 "data/maps/Route103/scripts.pory"

# 371 "data/maps/Route103/scripts.pory"
Route103_Text_ShouldHaveBroughtPotion:
# 372 "data/maps/Route103/scripts.pory"
	.string "My Pokémon is staggeringly tired…\n"
# 373 "data/maps/Route103/scripts.pory"
	.string "I should have brought a Potion…$"
# 374 "data/maps/Route103/scripts.pory"

# 375 "data/maps/Route103/scripts.pory"
Route103_Text_ShortcutToOldale:
# 376 "data/maps/Route103/scripts.pory"
	.string "If you cross the sea from here,\n"
# 377 "data/maps/Route103/scripts.pory"
	.string "it'll be a shortcut to OLDALE TOWN.\p"
# 378 "data/maps/Route103/scripts.pory"
	.string "Fufufu, that's useful, isn't it?$"
# 379 "data/maps/Route103/scripts.pory"

# 380 "data/maps/Route103/scripts.pory"
Route103_Text_RouteSign:
# 381 "data/maps/Route103/scripts.pory"
	.string "Route 103\n"
# 382 "data/maps/Route103/scripts.pory"
	.string "{DOWN_ARROW} Oldale Town$"

Route103_EventScript_Norman_Text_0:
# 6 "data/maps/Route103/scripts.pory"
	.string "{PLAYER}, I had a feeling I'd find\n"
	.string "you here.\p"
	.string "I was ecstatic to find out that you\n"
	.string "already have three badges.\p"
	.string "I suppose you want to challenge your\n"
	.string "old man next, huh?\p"
	.string "I'll have you know, my Gym is not for\n"
	.string "the faint of heart.\p"
	.string "If you want to challenge me, you'll\n"
	.string "have to prove yourself first.$"

Route103_EventScript_Norman_Text_1:
# 17 "data/maps/Route103/scripts.pory"
	.string "Take this HM and travel south of\n"
	.string "Slateport City.\p"
	.string "You'll reach an abandoned ship where\n"
	.string "an old buddy of mine trains.\p"
	.string "If you can defeat him, I'll know that\n"
	.string "you're ready to face me!\p"
	.string "Good luck, {PLAYER}.$"
