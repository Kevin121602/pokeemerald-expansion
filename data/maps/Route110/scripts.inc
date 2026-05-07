Route110_EventScript_OldWoman::
# 2 "data/maps/Route110/scripts.pory"
	lock
# 3 "data/maps/Route110/scripts.pory"
	faceplayer
# 4 "data/maps/Route110/scripts.pory"
	goto_if_set FLAG_BLOCK_TRICK_HOUSE, Route110_EventScript_OldWoman_2
# 13 "data/maps/Route110/scripts.pory"
	msgbox Route110_EventScript_OldWoman_Text_1
Route110_EventScript_OldWoman_1:
# 19 "data/maps/Route110/scripts.pory"
	release
	end

Route110_EventScript_OldWoman_2:
# 5 "data/maps/Route110/scripts.pory"
	msgbox Route110_EventScript_OldWoman_Text_0
	goto Route110_EventScript_OldWoman_1


# 23 "data/maps/Route110/scripts.pory"

# 24 "data/maps/Route110/scripts.pory"
.set LOCALID_RIVAL_ON_BIKE, 29
# 25 "data/maps/Route110/scripts.pory"
.set LOCALID_BIRCH, 36
# 26 "data/maps/Route110/scripts.pory"
.set LOCALID_OLD_WOMAN, 3
# 27 "data/maps/Route110/scripts.pory"

# 28 "data/maps/Route110/scripts.pory"
Route110_MapScripts::
# 29 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Route110_OnResume
# 30 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route110_OnTransition
# 31 "data/maps/Route110/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route110_OnFrame
# 32 "data/maps/Route110/scripts.pory"
	.byte 0
# 33 "data/maps/Route110/scripts.pory"

# 34 "data/maps/Route110/scripts.pory"
Route110_OnResume:
# 35 "data/maps/Route110/scripts.pory"
	special UpdateCyclingRoadState
# 36 "data/maps/Route110/scripts.pory"
	end
# 37 "data/maps/Route110/scripts.pory"

# 38 "data/maps/Route110/scripts.pory"
Route110_OnTransition:
# 39 "data/maps/Route110/scripts.pory"
	call Common_EventScript_SetupRivalGfxId
# 40 "data/maps/Route110/scripts.pory"
	call Common_EventScript_SetupRivalOnBikeGfxId
# 41 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_CYCLING_CHALLENGE_STATE, 1, Route110_EventScript_SaveCyclingMusic
# 42 "data/maps/Route110/scripts.pory"
	call_if_set FLAG_BLOCK_TRICK_HOUSE, Route110_EventScript_BlockTrickHouse
# 43 "data/maps/Route110/scripts.pory"
	end
# 44 "data/maps/Route110/scripts.pory"

# 45 "data/maps/Route110/scripts.pory"
Route110_EventScript_BlockTrickHouse::
# 46 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_OLD_WOMAN, 11, 67
# 47 "data/maps/Route110/scripts.pory"
	return
# 48 "data/maps/Route110/scripts.pory"

# 49 "data/maps/Route110/scripts.pory"
Route110_EventScript_SaveCyclingMusic::
# 50 "data/maps/Route110/scripts.pory"
	savebgm MUS_CYCLING
# 51 "data/maps/Route110/scripts.pory"
	return
# 52 "data/maps/Route110/scripts.pory"

# 53 "data/maps/Route110/scripts.pory"
Route110_OnFrame:
# 54 "data/maps/Route110/scripts.pory"
	map_script_2 VAR_CYCLING_CHALLENGE_STATE, 1, Route110_EventScript_BeginCylcingRoadChallenge
# 55 "data/maps/Route110/scripts.pory"
	.2byte 0
# 56 "data/maps/Route110/scripts.pory"

# 57 "data/maps/Route110/scripts.pory"
Route110_EventScript_BeginCylcingRoadChallenge::
# 58 "data/maps/Route110/scripts.pory"
	special Special_BeginCyclingRoadChallenge
# 59 "data/maps/Route110/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 2
# 60 "data/maps/Route110/scripts.pory"
	return
# 61 "data/maps/Route110/scripts.pory"

# 62 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt1::
# 63 "data/maps/Route110/scripts.pory"
	lock
# 64 "data/maps/Route110/scripts.pory"
	faceplayer
# 65 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WeCantTalkAboutAquaActivities, MSGBOX_DEFAULT
# 66 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 67 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 68 "data/maps/Route110/scripts.pory"
	release
# 69 "data/maps/Route110/scripts.pory"
	end
# 70 "data/maps/Route110/scripts.pory"

# 71 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt2::
# 72 "data/maps/Route110/scripts.pory"
	lock
# 73 "data/maps/Route110/scripts.pory"
	faceplayer
# 74 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KickUpARuckus, MSGBOX_DEFAULT
# 75 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 76 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 77 "data/maps/Route110/scripts.pory"
	release
# 78 "data/maps/Route110/scripts.pory"
	end
# 79 "data/maps/Route110/scripts.pory"

# 80 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt3::
# 81 "data/maps/Route110/scripts.pory"
	lock
# 82 "data/maps/Route110/scripts.pory"
	faceplayer
# 83 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MyFirstJobInAqua, MSGBOX_DEFAULT
# 84 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 85 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 86 "data/maps/Route110/scripts.pory"
	release
# 87 "data/maps/Route110/scripts.pory"
	end
# 88 "data/maps/Route110/scripts.pory"

# 89 "data/maps/Route110/scripts.pory"
Route110_EventScript_AquaGrunt4::
# 90 "data/maps/Route110/scripts.pory"
	lock
# 91 "data/maps/Route110/scripts.pory"
	faceplayer
# 92 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AquaActionsBringSmiles, MSGBOX_DEFAULT
# 93 "data/maps/Route110/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 94 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 95 "data/maps/Route110/scripts.pory"
	release
# 96 "data/maps/Route110/scripts.pory"
	end
# 97 "data/maps/Route110/scripts.pory"

# 98 "data/maps/Route110/scripts.pory"
Route110_EventScript_Boy1::
# 99 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RideBikeAtFullSpeed, MSGBOX_NPC
# 100 "data/maps/Route110/scripts.pory"
	end
# 101 "data/maps/Route110/scripts.pory"

# 102 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGirl1::
# 103 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_HairStreamsBehindMe, MSGBOX_NPC
# 104 "data/maps/Route110/scripts.pory"
	end
# 105 "data/maps/Route110/scripts.pory"

# 106 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGuy1::
# 107 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_YouGotBikeFromRydel, MSGBOX_NPC
# 108 "data/maps/Route110/scripts.pory"
	end
# 109 "data/maps/Route110/scripts.pory"

# 110 "data/maps/Route110/scripts.pory"
Route110_EventScript_OldMan::
# 111 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TwoRoads, MSGBOX_NPC
# 112 "data/maps/Route110/scripts.pory"
	end
# 113 "data/maps/Route110/scripts.pory"

# 114 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingGuy2::
# 115 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BikeTechniques, MSGBOX_NPC
# 116 "data/maps/Route110/scripts.pory"
	end
# 117 "data/maps/Route110/scripts.pory"

# 118 "data/maps/Route110/scripts.pory"
Route110_EventScript_Boy2::
# 119 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_WhichShouldIChoose, MSGBOX_NPC
# 120 "data/maps/Route110/scripts.pory"
	end
# 121 "data/maps/Route110/scripts.pory"

# 122 "data/maps/Route110/scripts.pory"
Route110_EventScript_SlateportCitySign::
# 123 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SlateportCitySign, MSGBOX_SIGN
# 124 "data/maps/Route110/scripts.pory"
	end
# 125 "data/maps/Route110/scripts.pory"

# 126 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingRoadSign::
# 127 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_CyclingRoadSign, MSGBOX_SIGN
# 128 "data/maps/Route110/scripts.pory"
	end
# 129 "data/maps/Route110/scripts.pory"

# 130 "data/maps/Route110/scripts.pory"
Route110_EventScript_VandalizedSign::
# 131 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AquaWasHere, MSGBOX_SIGN
# 132 "data/maps/Route110/scripts.pory"
	end
# 133 "data/maps/Route110/scripts.pory"

# 134 "data/maps/Route110/scripts.pory"
Route110_EventScript_Route103Sign::
# 135 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_Route103Sign, MSGBOX_SIGN
# 136 "data/maps/Route110/scripts.pory"
	end
# 137 "data/maps/Route110/scripts.pory"

# 138 "data/maps/Route110/scripts.pory"
Route110_EventScript_SeasideParkingSign::
# 139 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_SeasideParkingSign, MSGBOX_SIGN
# 140 "data/maps/Route110/scripts.pory"
	end
# 141 "data/maps/Route110/scripts.pory"

# 142 "data/maps/Route110/scripts.pory"
Route110_EventScript_MauvilleCitySign::
# 143 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MauvilleCitySign, MSGBOX_SIGN
# 144 "data/maps/Route110/scripts.pory"
	end
# 145 "data/maps/Route110/scripts.pory"

# 146 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrainerTipsPrlzSleep::
# 147 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrainerTipsPrlzSleep, MSGBOX_SIGN
# 148 "data/maps/Route110/scripts.pory"
	end
# 149 "data/maps/Route110/scripts.pory"

# 150 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrainerTipsRegisterItems::
# 151 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrainerTipsRegisterItems, MSGBOX_SIGN
# 152 "data/maps/Route110/scripts.pory"
	end
# 153 "data/maps/Route110/scripts.pory"

# 154 "data/maps/Route110/scripts.pory"
Route110_EventScript_TrickHouseSign::
# 155 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TrickHouseSign, MSGBOX_SIGN
# 156 "data/maps/Route110/scripts.pory"
	end
# 157 "data/maps/Route110/scripts.pory"

# 158 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingRoadResultsSign::
# 159 "data/maps/Route110/scripts.pory"
	lockall
# 160 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, GetRecordedCyclingRoadResults
# 161 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route110_EventScript_NoRecordSet
# 162 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BestRecord, MSGBOX_DEFAULT
# 163 "data/maps/Route110/scripts.pory"
	releaseall
# 164 "data/maps/Route110/scripts.pory"
	end
# 165 "data/maps/Route110/scripts.pory"

# 166 "data/maps/Route110/scripts.pory"
Route110_EventScript_NoRecordSet::
# 167 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ThereIsNoRecord, MSGBOX_DEFAULT
# 168 "data/maps/Route110/scripts.pory"
	releaseall
# 169 "data/maps/Route110/scripts.pory"
	end
# 170 "data/maps/Route110/scripts.pory"

# 171 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeGuy::
# 172 "data/maps/Route110/scripts.pory"
	lock
# 173 "data/maps/Route110/scripts.pory"
	faceplayer
# 174 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, GetPlayerAvatarBike
# 175 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, 1, Route110_EventScript_PlayerRidingAcroBike
# 176 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_CYCLING_CHALLENGE_STATE, 0, Route110_EventScript_PlayerNotRidingBike
# 177 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AlwaysAimHigher, MSGBOX_DEFAULT
# 178 "data/maps/Route110/scripts.pory"
	release
# 179 "data/maps/Route110/scripts.pory"
	end
# 180 "data/maps/Route110/scripts.pory"

# 181 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayerNotRidingBike::
# 182 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RatedForNumberOfCollisions, MSGBOX_DEFAULT
# 183 "data/maps/Route110/scripts.pory"
	release
# 184 "data/maps/Route110/scripts.pory"
	end
# 185 "data/maps/Route110/scripts.pory"

# 186 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayerRidingAcroBike::
# 187 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AcroBikesDoNotQualify, MSGBOX_DEFAULT
# 188 "data/maps/Route110/scripts.pory"
	release
# 189 "data/maps/Route110/scripts.pory"
	end
# 190 "data/maps/Route110/scripts.pory"

# 191 "data/maps/Route110/scripts.pory"
Route110_EventScript_Edward::
# 192 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_EDWARD, Route110_Text_EdwardIntro, Route110_Text_EdwardDefeated
# 193 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwardPostBattle, MSGBOX_AUTOCLOSE
# 194 "data/maps/Route110/scripts.pory"
	end
# 195 "data/maps/Route110/scripts.pory"

# 196 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jaclyn::
# 197 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JACLYN, Route110_Text_JaclynIntro, Route110_Text_JaclynDefeated
# 198 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JaclynPostBattle, MSGBOX_AUTOCLOSE
# 199 "data/maps/Route110/scripts.pory"
	end
# 200 "data/maps/Route110/scripts.pory"

# 201 "data/maps/Route110/scripts.pory"
Route110_EventScript_Edwin::
# 202 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_EDWIN_1, Route110_Text_EdwinIntro, Route110_Text_EdwinDefeated
# 203 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinPostBattle, MSGBOX_AUTOCLOSE
# 204 "data/maps/Route110/scripts.pory"
	release
# 205 "data/maps/Route110/scripts.pory"
	end
# 206 "data/maps/Route110/scripts.pory"

# 207 "data/maps/Route110/scripts.pory"
Route110_EventScript_EdwinRegisterMatchCallAfterBattle::
# 208 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 209 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 210 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinRegister, MSGBOX_DEFAULT
# 211 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_EDWIN_1
# 212 "data/maps/Route110/scripts.pory"
	release
# 213 "data/maps/Route110/scripts.pory"
	end
# 214 "data/maps/Route110/scripts.pory"

# 215 "data/maps/Route110/scripts.pory"
Route110_EventScript_EdwinRematch::
# 216 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_EDWIN_1, Route110_Text_EdwinRematchIntro, Route110_Text_EdwinRematchDefeated
# 217 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinRematchPostBattle, MSGBOX_AUTOCLOSE
# 218 "data/maps/Route110/scripts.pory"
	end
# 219 "data/maps/Route110/scripts.pory"

# 220 "data/maps/Route110/scripts.pory"
Route110_EventScript_Dale::
# 221 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_DALE, Route110_Text_DaleIntro, Route110_Text_DaleDefeated
# 222 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_DalePostBattle, MSGBOX_AUTOCLOSE
# 223 "data/maps/Route110/scripts.pory"
	end
# 224 "data/maps/Route110/scripts.pory"

# 225 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jacob::
# 226 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JACOB, Route110_Text_JacobIntro, Route110_Text_JacobDefeated
# 227 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JacobPostBattle, MSGBOX_AUTOCLOSE
# 228 "data/maps/Route110/scripts.pory"
	end
# 229 "data/maps/Route110/scripts.pory"

# 230 "data/maps/Route110/scripts.pory"
Route110_EventScript_Anthony::
# 231 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ANTHONY, Route110_Text_AnthonyIntro, Route110_Text_AnthonyDefeated
# 232 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AnthonyPostBattle, MSGBOX_AUTOCLOSE
# 233 "data/maps/Route110/scripts.pory"
	end
# 234 "data/maps/Route110/scripts.pory"

# 235 "data/maps/Route110/scripts.pory"
Route110_EventScript_Benjamin::
# 236 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_BENJAMIN_1, Route110_Text_BenjaminIntro, Route110_Text_BenjaminDefeated
# 237 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminPostBattle, MSGBOX_AUTOCLOSE
# 238 "data/maps/Route110/scripts.pory"
	release
# 239 "data/maps/Route110/scripts.pory"
	end
# 240 "data/maps/Route110/scripts.pory"

# 241 "data/maps/Route110/scripts.pory"
Route110_EventScript_BenjaminRegisterMatchCallAfterBattle::
# 242 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 243 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 244 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminRegister, MSGBOX_DEFAULT
# 245 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_BENJAMIN_1
# 246 "data/maps/Route110/scripts.pory"
	release
# 247 "data/maps/Route110/scripts.pory"
	end
# 248 "data/maps/Route110/scripts.pory"

# 249 "data/maps/Route110/scripts.pory"
Route110_EventScript_BenjaminRematch::
# 250 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_BENJAMIN_1, Route110_Text_BenjaminRematchIntro, Route110_Text_BenjaminRematchDefeated
# 251 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminRematchPostBattle, MSGBOX_AUTOCLOSE
# 252 "data/maps/Route110/scripts.pory"
	end
# 253 "data/maps/Route110/scripts.pory"

# 254 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jasmine::
# 255 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JASMINE, Route110_Text_JasmineIntro, Route110_Text_JasmineDefeated
# 256 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JasminePostBattle, MSGBOX_AUTOCLOSE
# 257 "data/maps/Route110/scripts.pory"
	end
# 258 "data/maps/Route110/scripts.pory"

# 259 "data/maps/Route110/scripts.pory"
Route110_EventScript_Abigail::
# 260 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ABIGAIL_1, Route110_Text_AbigailIntro, Route110_Text_AbigailDefeated
# 261 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailPostBattle, MSGBOX_AUTOCLOSE
# 262 "data/maps/Route110/scripts.pory"
	release
# 263 "data/maps/Route110/scripts.pory"
	end
# 264 "data/maps/Route110/scripts.pory"

# 265 "data/maps/Route110/scripts.pory"
Route110_EventScript_AbigailRegisterMatchCallAfterBattle::
# 266 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 267 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 268 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailRegister, MSGBOX_DEFAULT
# 269 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_ABIGAIL_1
# 270 "data/maps/Route110/scripts.pory"
	release
# 271 "data/maps/Route110/scripts.pory"
	end
# 272 "data/maps/Route110/scripts.pory"

# 273 "data/maps/Route110/scripts.pory"
Route110_EventScript_AbigailRematch::
# 274 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_ABIGAIL_1, Route110_Text_AbigailRematchIntro, Route110_Text_AbigailRematchDefeated
# 275 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailRematchPostBattle, MSGBOX_AUTOCLOSE
# 276 "data/maps/Route110/scripts.pory"
	end
# 277 "data/maps/Route110/scripts.pory"

# 278 "data/maps/Route110/scripts.pory"
Route110_EventScript_Isabel::
# 279 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ISABEL_1, Route110_Text_IsabelIntro, Route110_Text_IsabelDefeated
# 280 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelPostBattle, MSGBOX_AUTOCLOSE
# 281 "data/maps/Route110/scripts.pory"
	release
# 282 "data/maps/Route110/scripts.pory"
	end
# 283 "data/maps/Route110/scripts.pory"

# 284 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelRegisterMatchCallAfterBattle::
# 285 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 286 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 287 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelRegister, MSGBOX_DEFAULT
# 288 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_ISABEL_1
# 289 "data/maps/Route110/scripts.pory"
	release
# 290 "data/maps/Route110/scripts.pory"
	end
# 291 "data/maps/Route110/scripts.pory"

# 292 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelRematch::
# 293 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_ISABEL_1, Route110_Text_IsabelRematchIntro, Route110_Text_IsabelRematchDefeated
# 294 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelRematchPostBattle, MSGBOX_AUTOCLOSE
# 295 "data/maps/Route110/scripts.pory"
	end
# 296 "data/maps/Route110/scripts.pory"

# 297 "data/maps/Route110/scripts.pory"
Route110_EventScript_Timmy::
# 298 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_TIMMY, Route110_Text_TimmyIntro, Route110_Text_TimmyDefeated
# 299 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TimmyPostBattle, MSGBOX_AUTOCLOSE
# 300 "data/maps/Route110/scripts.pory"
	end
# 301 "data/maps/Route110/scripts.pory"

# 302 "data/maps/Route110/scripts.pory"
Route110_EventScript_Unused::
# 303 "data/maps/Route110/scripts.pory"
	end
# 304 "data/maps/Route110/scripts.pory"

# 305 "data/maps/Route110/scripts.pory"
Route110_EventScript_Kaleb::
# 306 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_KALEB, Route110_Text_KalebIntro, Route110_Text_KalebDefeated
# 307 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KalebPostBattle, MSGBOX_AUTOCLOSE
# 308 "data/maps/Route110/scripts.pory"
	end
# 309 "data/maps/Route110/scripts.pory"

# 310 "data/maps/Route110/scripts.pory"
Route110_EventScript_Joseph::
# 311 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JOSEPH, Route110_Text_JosephIntro, Route110_Text_JosephDefeated
# 312 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JosephPostBattle, MSGBOX_AUTOCLOSE
# 313 "data/maps/Route110/scripts.pory"
	end
# 314 "data/maps/Route110/scripts.pory"

# 315 "data/maps/Route110/scripts.pory"
Route110_EventScript_Alyssa::
# 316 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ALYSSA, Route110_Text_AlyssaIntro, Route110_Text_AlyssaDefeated
# 317 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AlyssaPostBattle, MSGBOX_AUTOCLOSE
# 318 "data/maps/Route110/scripts.pory"
	end
# 319 "data/maps/Route110/scripts.pory"

# 320 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeEnd::
# 321 "data/maps/Route110/scripts.pory"
	lockall
# 322 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 323 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_CyclingChallengeResults
# 324 "data/maps/Route110/scripts.pory"
	releaseall
# 325 "data/maps/Route110/scripts.pory"
	end
# 326 "data/maps/Route110/scripts.pory"

# 327 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeResults::
# 328 "data/maps/Route110/scripts.pory"
	special FinishCyclingRoadChallenge
# 329 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_CyclingChallengeResultSummary, MSGBOX_DEFAULT
# 330 "data/maps/Route110/scripts.pory"
	switch VAR_RESULT
# 331 "data/maps/Route110/scripts.pory"
	case 10, Route110_EventScript_ChallengeReactionBest
# 332 "data/maps/Route110/scripts.pory"
	case 9, Route110_EventScript_ChallengeReactionGood
# 333 "data/maps/Route110/scripts.pory"
	case 8, Route110_EventScript_ChallengeReactionGood
# 334 "data/maps/Route110/scripts.pory"
	case 7, Route110_EventScript_ChallengeReactionGood
# 335 "data/maps/Route110/scripts.pory"
	case 6, Route110_EventScript_ChallengeReactionOk
# 336 "data/maps/Route110/scripts.pory"
	case 5, Route110_EventScript_ChallengeReactionOk
# 337 "data/maps/Route110/scripts.pory"
	case 4, Route110_EventScript_ChallengeReactionOk
# 338 "data/maps/Route110/scripts.pory"
	case 3, Route110_EventScript_ChallengeReactionBad
# 339 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_ChallengeReactionBad
# 340 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_ChallengeReactionBad
# 341 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_ChallengeReactionWorst
# 342 "data/maps/Route110/scripts.pory"
	end
# 343 "data/maps/Route110/scripts.pory"

# 344 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionBest::
# 345 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBest, MSGBOX_DEFAULT
# 346 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 347 "data/maps/Route110/scripts.pory"
	end
# 348 "data/maps/Route110/scripts.pory"

# 349 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionGood::
# 350 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionGood, MSGBOX_DEFAULT
# 351 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 352 "data/maps/Route110/scripts.pory"
	end
# 353 "data/maps/Route110/scripts.pory"

# 354 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionOk::
# 355 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionOk, MSGBOX_DEFAULT
# 356 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 357 "data/maps/Route110/scripts.pory"
	end
# 358 "data/maps/Route110/scripts.pory"

# 359 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionBad::
# 360 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBad, MSGBOX_DEFAULT
# 361 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 362 "data/maps/Route110/scripts.pory"
	end
# 363 "data/maps/Route110/scripts.pory"

# 364 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionWorst::
# 365 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionWorst, MSGBOX_DEFAULT
# 366 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 367 "data/maps/Route110/scripts.pory"
	end
# 368 "data/maps/Route110/scripts.pory"

# 369 "data/maps/Route110/scripts.pory"
Route110_EventScript_EndChallenge::
# 370 "data/maps/Route110/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 3
# 371 "data/maps/Route110/scripts.pory"
	savebgm MUS_DUMMY
# 372 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
# 373 "data/maps/Route110/scripts.pory"
	return
# 374 "data/maps/Route110/scripts.pory"

# 375 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger1::
# 376 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 377 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 378 "data/maps/Route110/scripts.pory"
	end
# 379 "data/maps/Route110/scripts.pory"

# 380 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger2::
# 381 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 382 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 383 "data/maps/Route110/scripts.pory"
	end
# 384 "data/maps/Route110/scripts.pory"

# 385 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger3::
# 386 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 387 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 388 "data/maps/Route110/scripts.pory"
	end
# 389 "data/maps/Route110/scripts.pory"

# 390 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalScene::
# 391 "data/maps/Route110/scripts.pory"
	lockall
# 392 "data/maps/Route110/scripts.pory"
	checkplayergender
# 393 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route110_EventScript_PlayMayMusic
# 394 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route110_EventScript_PlayBrendanMusic
# 395 "data/maps/Route110/scripts.pory"
	@applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 396 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 397 "data/maps/Route110/scripts.pory"
	@applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 398 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 399 "data/maps/Route110/scripts.pory"
	@applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 400 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 401 "data/maps/Route110/scripts.pory"
	delay 30
# 402 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_RivalApproachPlayer1
# 403 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_RivalApproachPlayer2
# 404 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_RivalApproachPlayer3
# 405 "data/maps/Route110/scripts.pory"
	checkplayergender
# 406 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route110_EventScript_MayBattle
# 407 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route110_EventScript_BrendanBattle
# 408 "data/maps/Route110/scripts.pory"
	releaseall
# 409 "data/maps/Route110/scripts.pory"
	end
# 410 "data/maps/Route110/scripts.pory"

# 411 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayMayMusic::
# 412 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 413 "data/maps/Route110/scripts.pory"
	return
# 414 "data/maps/Route110/scripts.pory"

# 415 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayBrendanMusic::
# 416 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 417 "data/maps/Route110/scripts.pory"
	return
# 418 "data/maps/Route110/scripts.pory"

# 419 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattle::
# 420 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayLetsBattle, MSGBOX_DEFAULT
# 421 "data/maps/Route110/scripts.pory"
	switch VAR_STARTER_MON
# 422 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_MayBattleTreecko
# 423 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_MayBattleTorchic
# 424 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_MayBattleMudkip
# 425 "data/maps/Route110/scripts.pory"
	end
# 426 "data/maps/Route110/scripts.pory"

# 427 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleTreecko::
# 428 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TREECKO, Route110_Text_MayDefeated
# 429 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 430 "data/maps/Route110/scripts.pory"
	end
# 431 "data/maps/Route110/scripts.pory"

# 432 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleTorchic::
# 433 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TORCHIC, Route110_Text_MayDefeated
# 434 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 435 "data/maps/Route110/scripts.pory"
	end
# 436 "data/maps/Route110/scripts.pory"

# 437 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleMudkip::
# 438 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_MUDKIP, Route110_Text_MayDefeated
# 439 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 440 "data/maps/Route110/scripts.pory"
	end
# 441 "data/maps/Route110/scripts.pory"

# 442 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayDefeated::
# 443 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayTakeThis, MSGBOX_DEFAULT
# 444 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_GiveItemfinder
# 445 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayExplainItemfinder, MSGBOX_DEFAULT
# 446 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalExit
# 447 "data/maps/Route110/scripts.pory"
	end
# 448 "data/maps/Route110/scripts.pory"

# 449 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattle::
# 450 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanLetsBattle, MSGBOX_DEFAULT
# 451 "data/maps/Route110/scripts.pory"
	switch VAR_STARTER_MON
# 452 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_BrendanBattleTreecko
# 453 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_BrendanBattleTorchic
# 454 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_BrendanBattleMudkip
# 455 "data/maps/Route110/scripts.pory"
	end
# 456 "data/maps/Route110/scripts.pory"

# 457 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleTreecko::
# 458 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TREECKO, Route110_Text_BrendanDefeated
# 459 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 460 "data/maps/Route110/scripts.pory"
	end
# 461 "data/maps/Route110/scripts.pory"

# 462 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleTorchic::
# 463 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TORCHIC, Route110_Text_BrendanDefeated
# 464 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 465 "data/maps/Route110/scripts.pory"
	end
# 466 "data/maps/Route110/scripts.pory"

# 467 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleMudkip::
# 468 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_MUDKIP, Route110_Text_BrendanDefeated
# 469 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 470 "data/maps/Route110/scripts.pory"
	end
# 471 "data/maps/Route110/scripts.pory"

# 472 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanDefeated::
# 473 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanTakeThis, MSGBOX_DEFAULT
# 474 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_GiveItemfinder
# 475 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanExplainItemfinder, MSGBOX_DEFAULT
# 476 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalExit
# 477 "data/maps/Route110/scripts.pory"
	end
# 478 "data/maps/Route110/scripts.pory"

# 479 "data/maps/Route110/scripts.pory"
Route110_EventScript_GiveItemfinder::
# 480 "data/maps/Route110/scripts.pory"
	giveitem ITEM_DOWSING_MACHINE
# 481 "data/maps/Route110/scripts.pory"
	return
# 482 "data/maps/Route110/scripts.pory"

# 483 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit::
# 484 "data/maps/Route110/scripts.pory"
	closemessage
# 485 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_MoveRival1
# 486 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_MoveRival2
# 487 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_MoveRival3
# 488 "data/maps/Route110/scripts.pory"
	@setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_FACE_RIGHT
# 489 "data/maps/Route110/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL_ON_BIKE, MOVEMENT_TYPE_FACE_RIGHT
# 490 "data/maps/Route110/scripts.pory"
	@removeobject LOCALID_RIVAL
# 491 "data/maps/Route110/scripts.pory"
	addobject LOCALID_RIVAL_ON_BIKE
# 492 "data/maps/Route110/scripts.pory"
	delay 45
# 493 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_RivalExit1
# 494 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_RivalExit2
# 495 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_RivalExit3
# 496 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_RIVAL_ON_BIKE
# 497 "data/maps/Route110/scripts.pory"
	setvar VAR_ROUTE110_STATE, 1
# 498 "data/maps/Route110/scripts.pory"
	savebgm MUS_DUMMY
# 499 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
# 500 "data/maps/Route110/scripts.pory"
	releaseall
# 501 "data/maps/Route110/scripts.pory"
	end
# 502 "data/maps/Route110/scripts.pory"

# 503 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer1::
# 504 "data/maps/Route110/scripts.pory"
	@applymovement LOCALID_RIVAL, Route110_Movement_RivalApproachPlayer1
# 505 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 506 "data/maps/Route110/scripts.pory"
	return
# 507 "data/maps/Route110/scripts.pory"

# 508 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer2::
# 509 "data/maps/Route110/scripts.pory"
	@applymovement LOCALID_RIVAL, Route110_Movement_RivalApproachPlayer2
# 510 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 511 "data/maps/Route110/scripts.pory"
	return
# 512 "data/maps/Route110/scripts.pory"

# 513 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer3::
# 514 "data/maps/Route110/scripts.pory"
	@applymovement LOCALID_RIVAL, Route110_Movement_RivalApproachPlayer3
# 515 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 516 "data/maps/Route110/scripts.pory"
	return
# 517 "data/maps/Route110/scripts.pory"

# 518 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit1::
# 519 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route110_Movement_RivalExit1
# 520 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 521 "data/maps/Route110/scripts.pory"
	return
# 522 "data/maps/Route110/scripts.pory"

# 523 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit2::
# 524 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route110_Movement_RivalExit2
# 525 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 526 "data/maps/Route110/scripts.pory"
	return
# 527 "data/maps/Route110/scripts.pory"

# 528 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit3::
# 529 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route110_Movement_RivalExit3
# 530 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 531 "data/maps/Route110/scripts.pory"
	return
# 532 "data/maps/Route110/scripts.pory"

# 533 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival1::
# 534 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 33, 55
# 535 "data/maps/Route110/scripts.pory"
	return
# 536 "data/maps/Route110/scripts.pory"

# 537 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival2::
# 538 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 34, 55
# 539 "data/maps/Route110/scripts.pory"
	return
# 540 "data/maps/Route110/scripts.pory"

# 541 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival3::
# 542 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 35, 55
# 543 "data/maps/Route110/scripts.pory"
	return
# 544 "data/maps/Route110/scripts.pory"

# 545 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer1:
# 546 "data/maps/Route110/scripts.pory"
	walk_down
# 547 "data/maps/Route110/scripts.pory"
	walk_left
# 548 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_down
# 549 "data/maps/Route110/scripts.pory"
	step_end
# 550 "data/maps/Route110/scripts.pory"

# 551 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer2:
# 552 "data/maps/Route110/scripts.pory"
	walk_down
# 553 "data/maps/Route110/scripts.pory"
	step_end
# 554 "data/maps/Route110/scripts.pory"

# 555 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer3:
# 556 "data/maps/Route110/scripts.pory"
	walk_down
# 557 "data/maps/Route110/scripts.pory"
	walk_right
# 558 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_down
# 559 "data/maps/Route110/scripts.pory"
	step_end
# 560 "data/maps/Route110/scripts.pory"

# 561 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit1:
# 562 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 563 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 564 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 565 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 566 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 567 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 568 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 569 "data/maps/Route110/scripts.pory"
	step_end
# 570 "data/maps/Route110/scripts.pory"

# 571 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit2:
# 572 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 573 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 574 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 575 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 576 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 577 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 578 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 579 "data/maps/Route110/scripts.pory"
	walk_fast_down
# 580 "data/maps/Route110/scripts.pory"
	step_end
# 581 "data/maps/Route110/scripts.pory"

# 582 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit3:
# 583 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 584 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 585 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 586 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 587 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 588 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 589 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 590 "data/maps/Route110/scripts.pory"
	step_end
# 591 "data/maps/Route110/scripts.pory"

# 592 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene1::
# 593 "data/maps/Route110/scripts.pory"
	lockall
# 594 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 595 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 596 "data/maps/Route110/scripts.pory"

# 597 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene2::
# 598 "data/maps/Route110/scripts.pory"
	lockall
# 599 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 600 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 601 "data/maps/Route110/scripts.pory"

# 602 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene3::
# 603 "data/maps/Route110/scripts.pory"
	lockall
# 604 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 605 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 606 "data/maps/Route110/scripts.pory"

# 607 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene4::
# 608 "data/maps/Route110/scripts.pory"
	lockall
# 609 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 4
# 610 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 611 "data/maps/Route110/scripts.pory"

# 612 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene::
# 613 "data/maps/Route110/scripts.pory"
	addobject LOCALID_BIRCH
# 614 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchEntrance
# 615 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 616 "data/maps/Route110/scripts.pory"
	playse SE_PIN
# 617 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 618 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 619 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_Delay48
# 620 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 621 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_BirchApproachPlayer1
# 622 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_BirchApproachPlayer2
# 623 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_BirchApproachPlayer3
# 624 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_BirchApproachPlayer4
# 625 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ImagineSeeingYouHere, MSGBOX_DEFAULT
# 626 "data/maps/Route110/scripts.pory"
	closemessage
# 627 "data/maps/Route110/scripts.pory"
	delay 20
# 628 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterLeft
# 629 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 630 "data/maps/Route110/scripts.pory"
	delay 10
# 631 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 632 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 633 "data/maps/Route110/scripts.pory"
	delay 20
# 634 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterDown
# 635 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 636 "data/maps/Route110/scripts.pory"
	delay 30
# 637 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_HeardYouInstallMatchCall, MSGBOX_DEFAULT
# 638 "data/maps/Route110/scripts.pory"
	closemessage
# 639 "data/maps/Route110/scripts.pory"
	delay 30
# 640 "data/maps/Route110/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 641 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RegisteredBirchInPokenav, MSGBOX_DEFAULT
# 642 "data/maps/Route110/scripts.pory"
	waitfanfare
# 643 "data/maps/Route110/scripts.pory"
	closemessage
# 644 "data/maps/Route110/scripts.pory"
	delay 30
# 645 "data/maps/Route110/scripts.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 646 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KeepAnEyeOutForRival, MSGBOX_DEFAULT
# 647 "data/maps/Route110/scripts.pory"
	closemessage
# 648 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_BirchExit1
# 649 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_BirchExit2
# 650 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_BirchExit3
# 651 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_BirchExit4
# 652 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_BIRCH
# 653 "data/maps/Route110/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 2
# 654 "data/maps/Route110/scripts.pory"
	releaseall
# 655 "data/maps/Route110/scripts.pory"
	end
# 656 "data/maps/Route110/scripts.pory"

# 657 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer1::
# 658 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer1
# 659 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 660 "data/maps/Route110/scripts.pory"
	return
# 661 "data/maps/Route110/scripts.pory"

# 662 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer2::
# 663 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer2
# 664 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 665 "data/maps/Route110/scripts.pory"
	return
# 666 "data/maps/Route110/scripts.pory"

# 667 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer3::
# 668 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer3
# 669 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 670 "data/maps/Route110/scripts.pory"
	return
# 671 "data/maps/Route110/scripts.pory"

# 672 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer4::
# 673 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer4
# 674 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 675 "data/maps/Route110/scripts.pory"
	return
# 676 "data/maps/Route110/scripts.pory"

# 677 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit1::
# 678 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit1
# 679 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 680 "data/maps/Route110/scripts.pory"
	return
# 681 "data/maps/Route110/scripts.pory"

# 682 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit2::
# 683 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit2
# 684 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 685 "data/maps/Route110/scripts.pory"
	return
# 686 "data/maps/Route110/scripts.pory"

# 687 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit3::
# 688 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit3
# 689 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 690 "data/maps/Route110/scripts.pory"
	return
# 691 "data/maps/Route110/scripts.pory"

# 692 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit4::
# 693 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit4
# 694 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 695 "data/maps/Route110/scripts.pory"
	return
# 696 "data/maps/Route110/scripts.pory"

# 697 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchEntrance:
# 698 "data/maps/Route110/scripts.pory"
	walk_down
# 699 "data/maps/Route110/scripts.pory"
	walk_down
# 700 "data/maps/Route110/scripts.pory"
	walk_down
# 701 "data/maps/Route110/scripts.pory"
	step_end
# 702 "data/maps/Route110/scripts.pory"

# 703 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer1:
# 704 "data/maps/Route110/scripts.pory"
	walk_down
# 705 "data/maps/Route110/scripts.pory"
	walk_left
# 706 "data/maps/Route110/scripts.pory"
	walk_left
# 707 "data/maps/Route110/scripts.pory"
	walk_down
# 708 "data/maps/Route110/scripts.pory"
	step_end
# 709 "data/maps/Route110/scripts.pory"

# 710 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer2:
# 711 "data/maps/Route110/scripts.pory"
	walk_down
# 712 "data/maps/Route110/scripts.pory"
	walk_left
# 713 "data/maps/Route110/scripts.pory"
	walk_down
# 714 "data/maps/Route110/scripts.pory"
	step_end
# 715 "data/maps/Route110/scripts.pory"

# 716 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer3:
# 717 "data/maps/Route110/scripts.pory"
	walk_down
# 718 "data/maps/Route110/scripts.pory"
	walk_down
# 719 "data/maps/Route110/scripts.pory"
	step_end
# 720 "data/maps/Route110/scripts.pory"

# 721 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer4:
# 722 "data/maps/Route110/scripts.pory"
	walk_down
# 723 "data/maps/Route110/scripts.pory"
	walk_right
# 724 "data/maps/Route110/scripts.pory"
	walk_down
# 725 "data/maps/Route110/scripts.pory"
	step_end
# 726 "data/maps/Route110/scripts.pory"

# 727 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit1:
# 728 "data/maps/Route110/scripts.pory"
	walk_up
# 729 "data/maps/Route110/scripts.pory"
	walk_up
# 730 "data/maps/Route110/scripts.pory"
	walk_right
# 731 "data/maps/Route110/scripts.pory"
	walk_up
# 732 "data/maps/Route110/scripts.pory"
	walk_up
# 733 "data/maps/Route110/scripts.pory"
	walk_up
# 734 "data/maps/Route110/scripts.pory"
	step_end
# 735 "data/maps/Route110/scripts.pory"

# 736 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit2:
# 737 "data/maps/Route110/scripts.pory"
	walk_up
# 738 "data/maps/Route110/scripts.pory"
	walk_up
# 739 "data/maps/Route110/scripts.pory"
	walk_up
# 740 "data/maps/Route110/scripts.pory"
	walk_up
# 741 "data/maps/Route110/scripts.pory"
	walk_up
# 742 "data/maps/Route110/scripts.pory"
	step_end
# 743 "data/maps/Route110/scripts.pory"

# 744 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit3:
# 745 "data/maps/Route110/scripts.pory"
	walk_up
# 746 "data/maps/Route110/scripts.pory"
	walk_up
# 747 "data/maps/Route110/scripts.pory"
	walk_up
# 748 "data/maps/Route110/scripts.pory"
	walk_up
# 749 "data/maps/Route110/scripts.pory"
	walk_up
# 750 "data/maps/Route110/scripts.pory"
	step_end
# 751 "data/maps/Route110/scripts.pory"

# 752 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit4:
# 753 "data/maps/Route110/scripts.pory"
	walk_up
# 754 "data/maps/Route110/scripts.pory"
	walk_up
# 755 "data/maps/Route110/scripts.pory"
	walk_up
# 756 "data/maps/Route110/scripts.pory"
	walk_up
# 757 "data/maps/Route110/scripts.pory"
	walk_up
# 758 "data/maps/Route110/scripts.pory"
	step_end
# 759 "data/maps/Route110/scripts.pory"

# 760 "data/maps/Route110/scripts.pory"
Route110_Text_WeCantTalkAboutAquaActivities:
# 761 "data/maps/Route110/scripts.pory"
	.string "Team Aqua's activities…\n"
# 762 "data/maps/Route110/scripts.pory"
	.string "We can't talk about them yet.$"
# 763 "data/maps/Route110/scripts.pory"

# 764 "data/maps/Route110/scripts.pory"
Route110_Text_KickUpARuckus:
# 765 "data/maps/Route110/scripts.pory"
	.string "I want to get going to Slateport and\n"
# 766 "data/maps/Route110/scripts.pory"
	.string "kick up a ruckus!$"
# 767 "data/maps/Route110/scripts.pory"

# 768 "data/maps/Route110/scripts.pory"
Route110_Text_MyFirstJobInAqua:
# 769 "data/maps/Route110/scripts.pory"
	.string "This is my first job after joining\n"
# 770 "data/maps/Route110/scripts.pory"
	.string "Team Aqua. It's a little scary.$"
# 771 "data/maps/Route110/scripts.pory"

# 772 "data/maps/Route110/scripts.pory"
Route110_Text_AquaActionsBringSmiles:
# 773 "data/maps/Route110/scripts.pory"
	.string "Team Aqua's actions should bring\n"
# 774 "data/maps/Route110/scripts.pory"
	.string "smiles to people's faces!$"
# 775 "data/maps/Route110/scripts.pory"

# 776 "data/maps/Route110/scripts.pory"
Route110_Text_MayLetsBattle:
# 777 "data/maps/Route110/scripts.pory"
	.string "MAY: Hi, {PLAYER}{KUN}, long time no see!\p"
# 778 "data/maps/Route110/scripts.pory"
	.string "While I was searching for other\n"
# 779 "data/maps/Route110/scripts.pory"
	.string "Pokémon, my Pokémon grew stronger.\p"
# 780 "data/maps/Route110/scripts.pory"
	.string "So…\n"
# 781 "data/maps/Route110/scripts.pory"
	.string "How about a little battle?$"
# 782 "data/maps/Route110/scripts.pory"

# 783 "data/maps/Route110/scripts.pory"
Route110_Text_MayDefeated:
# 784 "data/maps/Route110/scripts.pory"
	.string "Yikes!\n"
# 785 "data/maps/Route110/scripts.pory"
	.string "You're better than I expected!$"
# 786 "data/maps/Route110/scripts.pory"

# 787 "data/maps/Route110/scripts.pory"
Route110_Text_MayTakeThis:
# 788 "data/maps/Route110/scripts.pory"
	.string "MAY: {PLAYER}{KUN}, you've been busy\n"
# 789 "data/maps/Route110/scripts.pory"
	.string "training, too, haven't you?\p"
# 790 "data/maps/Route110/scripts.pory"
	.string "I think you deserve a reward!\n"
# 791 "data/maps/Route110/scripts.pory"
	.string "This is from me!$"
# 792 "data/maps/Route110/scripts.pory"

# 793 "data/maps/Route110/scripts.pory"
Route110_Text_MayExplainItemfinder:
# 794 "data/maps/Route110/scripts.pory"
	.string "MAY: That's an ITEMFINDER.\p"
# 795 "data/maps/Route110/scripts.pory"
	.string "Try it out. If there is an item that's\n"
# 796 "data/maps/Route110/scripts.pory"
	.string "not visible, it emits a sound.\p"
# 797 "data/maps/Route110/scripts.pory"
	.string "Okay, {PLAYER}{KUN}, let's meet again!\p"
# 798 "data/maps/Route110/scripts.pory"
	.string "I know it's a little silly coming from\n"
# 799 "data/maps/Route110/scripts.pory"
	.string "me, but I think you should train a lot\l"
# 800 "data/maps/Route110/scripts.pory"
	.string "harder for the next time.$"
# 801 "data/maps/Route110/scripts.pory"

# 802 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanLetsBattle:
# 803 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: Hey, {PLAYER}.\n"
# 804 "data/maps/Route110/scripts.pory"
	.string "So this is where you were.\l"
# 805 "data/maps/Route110/scripts.pory"
	.string "How's it going?\p"
# 806 "data/maps/Route110/scripts.pory"
	.string "Have you been raising your Pokémon?\n"
# 807 "data/maps/Route110/scripts.pory"
	.string "I'll check for you.$"
# 808 "data/maps/Route110/scripts.pory"

# 809 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanDefeated:
# 810 "data/maps/Route110/scripts.pory"
	.string "Hmm…\n"
# 811 "data/maps/Route110/scripts.pory"
	.string "You're pretty good.$"
# 812 "data/maps/Route110/scripts.pory"

# 813 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanTakeThis:
# 814 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: {PLAYER}, you've trained\n"
# 815 "data/maps/Route110/scripts.pory"
	.string "without me noticing…\p"
# 816 "data/maps/Route110/scripts.pory"
	.string "Good enough!\n"
# 817 "data/maps/Route110/scripts.pory"
	.string "Here, take this.$"
# 818 "data/maps/Route110/scripts.pory"

# 819 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanExplainItemfinder:
# 820 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: That's an ITEMFINDER.\p"
# 821 "data/maps/Route110/scripts.pory"
	.string "Use it to root around for items that\n"
# 822 "data/maps/Route110/scripts.pory"
	.string "aren't visible.\p"
# 823 "data/maps/Route110/scripts.pory"
	.string "If it senses something, it emits\n"
# 824 "data/maps/Route110/scripts.pory"
	.string "a sound.\p"
# 825 "data/maps/Route110/scripts.pory"
	.string "Anyway, I'm off to look for new\n"
# 826 "data/maps/Route110/scripts.pory"
	.string "Pokémon.$"
# 827 "data/maps/Route110/scripts.pory"

# 828 "data/maps/Route110/scripts.pory"
Route110_Text_RideBikeAtFullSpeed:
# 829 "data/maps/Route110/scripts.pory"
	.string "Wouldn't it be great to ride a BIKE\n"
# 830 "data/maps/Route110/scripts.pory"
	.string "at full speed on CYCLING ROAD?$"
# 831 "data/maps/Route110/scripts.pory"

# 832 "data/maps/Route110/scripts.pory"
Route110_Text_HairStreamsBehindMe:
# 833 "data/maps/Route110/scripts.pory"
	.string "How do you like the way my raven-\n"
# 834 "data/maps/Route110/scripts.pory"
	.string "colored hair streams behind me?\p"
# 835 "data/maps/Route110/scripts.pory"
	.string "I grew my hair out just for that.$"
# 836 "data/maps/Route110/scripts.pory"

# 837 "data/maps/Route110/scripts.pory"
Route110_Text_YouGotBikeFromRydel:
# 838 "data/maps/Route110/scripts.pory"
	.string "Oh, hey, you got that BIKE from RYDEL!\p"
# 839 "data/maps/Route110/scripts.pory"
	.string "Oh, it's glaringly obvious.\n"
# 840 "data/maps/Route110/scripts.pory"
	.string "It says right on your bike…\p"
# 841 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 842 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 843 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 844 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 845 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 846 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 847 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 848 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 849 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL…\n"
# 850 "data/maps/Route110/scripts.pory"
	.string "That name's everywhere.\p"
# 851 "data/maps/Route110/scripts.pory"
	.string "You should ride it around all over\n"
# 852 "data/maps/Route110/scripts.pory"
	.string "the place--it's good advertising!$"
# 853 "data/maps/Route110/scripts.pory"

# 854 "data/maps/Route110/scripts.pory"
Route110_Text_TwoRoads:
# 855 "data/maps/Route110/scripts.pory"
	.string "The two roads, one above, one below…\p"
# 856 "data/maps/Route110/scripts.pory"
	.string "A road each for people and Pokémon.\n"
# 857 "data/maps/Route110/scripts.pory"
	.string "Perhaps that is right and fair.$"
# 858 "data/maps/Route110/scripts.pory"

# 859 "data/maps/Route110/scripts.pory"
Route110_Text_WalkOnTheLowRoad:
# 860 "data/maps/Route110/scripts.pory"
	.string "Behind me is the Trick House.\p"
# 861 "data/maps/Route110/scripts.pory"
	.string "The trainers inside don't fight\n"
# 862 "data/maps/Route110/scripts.pory"
	.string "fair…\p"
# 863 "data/maps/Route110/scripts.pory"
	.string "But if you can defeat them, you'll\n"
# 864 "data/maps/Route110/scripts.pory"
	.string "recieve some great rewards!$"
# 865 "data/maps/Route110/scripts.pory"

# 866 "data/maps/Route110/scripts.pory"
Route110_Text_BikeTechniques:
# 867 "data/maps/Route110/scripts.pory"
	.string "Learning techniques will make BIKE\n"
# 868 "data/maps/Route110/scripts.pory"
	.string "riding even more fun.\p"
# 869 "data/maps/Route110/scripts.pory"
	.string "There are some places that you can\n"
# 870 "data/maps/Route110/scripts.pory"
	.string "reach only by using a BIKE technique.$"
# 871 "data/maps/Route110/scripts.pory"

# 872 "data/maps/Route110/scripts.pory"
Route110_Text_WhichShouldIChoose:
# 873 "data/maps/Route110/scripts.pory"
	.string "Which should I choose?\p"
# 874 "data/maps/Route110/scripts.pory"
	.string "Make a beeline for Mauville on\n"
# 875 "data/maps/Route110/scripts.pory"
	.string "Cycling Road, or take the low road\l"
# 876 "data/maps/Route110/scripts.pory"
	.string "and look for Pokémon?\p"
# 877 "data/maps/Route110/scripts.pory"
	.string "Just kidding!\n"
# 878 "data/maps/Route110/scripts.pory"
	.string "There's no way to get to Mauville\l"
# 879 "data/maps/Route110/scripts.pory"
	.string "from here.\p"
# 880 "data/maps/Route110/scripts.pory"
	.string "The only way to access Cycling Road\n"
# 881 "data/maps/Route110/scripts.pory"
	.string "is to Surf in from Route 134.$"
# 882 "data/maps/Route110/scripts.pory"

# 883 "data/maps/Route110/scripts.pory"
Route110_Text_CyclingChallengeResultSummary:
# 884 "data/maps/Route110/scripts.pory"
	.string "Number of collisions:\n"
# 885 "data/maps/Route110/scripts.pory"
	.string "… … {STR_VAR_1}!\p"
# 886 "data/maps/Route110/scripts.pory"
	.string "Total time:\n"
# 887 "data/maps/Route110/scripts.pory"
	.string "… … {STR_VAR_2}!$"
# 888 "data/maps/Route110/scripts.pory"

# 889 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionBest:
# 890 "data/maps/Route110/scripts.pory"
	.string "Bravo! Splendid showing!\p"
# 891 "data/maps/Route110/scripts.pory"
	.string "Your love of cycling comes from deep\n"
# 892 "data/maps/Route110/scripts.pory"
	.string "within your heart.\l"
# 893 "data/maps/Route110/scripts.pory"
	.string "You've shaken me to my very soul!$"
# 894 "data/maps/Route110/scripts.pory"

# 895 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionGood:
# 896 "data/maps/Route110/scripts.pory"
	.string "Your technique is remarkable.\p"
# 897 "data/maps/Route110/scripts.pory"
	.string "I suggest you speed up a bit while\n"
# 898 "data/maps/Route110/scripts.pory"
	.string "still avoiding collisions.$"
# 899 "data/maps/Route110/scripts.pory"

# 900 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionOk:
# 901 "data/maps/Route110/scripts.pory"
	.string "I would consider you a work in\n"
# 902 "data/maps/Route110/scripts.pory"
	.string "progress.\p"
# 903 "data/maps/Route110/scripts.pory"
	.string "Still, I hope you don't forget the\n"
# 904 "data/maps/Route110/scripts.pory"
	.string "sheer pleasure of cycling.$"
# 905 "data/maps/Route110/scripts.pory"

# 906 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionBad:
# 907 "data/maps/Route110/scripts.pory"
	.string "My word… Your cycling skills border\n"
# 908 "data/maps/Route110/scripts.pory"
	.string "on terrifying.\p"
# 909 "data/maps/Route110/scripts.pory"
	.string "Most certainly, you need much more\n"
# 910 "data/maps/Route110/scripts.pory"
	.string "practice riding.$"
# 911 "data/maps/Route110/scripts.pory"

# 912 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionWorst:
# 913 "data/maps/Route110/scripts.pory"
	.string "…I am aghast…\p"
# 914 "data/maps/Route110/scripts.pory"
	.string "You're perhaps not cut out for this\n"
# 915 "data/maps/Route110/scripts.pory"
	.string "unfortunate cycling business.\p"
# 916 "data/maps/Route110/scripts.pory"
	.string "You ought to give serious thought to\n"
# 917 "data/maps/Route110/scripts.pory"
	.string "returning that BIKE to RYDEL.$"
# 918 "data/maps/Route110/scripts.pory"

# 919 "data/maps/Route110/scripts.pory"
Route110_Text_RatedForNumberOfCollisions:
# 920 "data/maps/Route110/scripts.pory"
	.string "This is CYCLING ROAD.\p"
# 921 "data/maps/Route110/scripts.pory"
	.string "If you were to ride from MAUVILLE to\n"
# 922 "data/maps/Route110/scripts.pory"
	.string "SLATEPORT on a MACH BIKE, you would\l"
# 923 "data/maps/Route110/scripts.pory"
	.string "be rated for the number of collisions\l"
# 924 "data/maps/Route110/scripts.pory"
	.string "and your total time.$"
# 925 "data/maps/Route110/scripts.pory"

# 926 "data/maps/Route110/scripts.pory"
Route110_Text_AlwaysAimHigher:
# 927 "data/maps/Route110/scripts.pory"
	.string "Regardless of the results, I count on\n"
# 928 "data/maps/Route110/scripts.pory"
	.string "seeing more challenges from you.\l"
# 929 "data/maps/Route110/scripts.pory"
	.string "Always aim higher!$"
# 930 "data/maps/Route110/scripts.pory"

# 931 "data/maps/Route110/scripts.pory"
Route110_Text_AcroBikesDoNotQualify:
# 932 "data/maps/Route110/scripts.pory"
	.string "On this CYCLING ROAD, those riding\n"
# 933 "data/maps/Route110/scripts.pory"
	.string "MACH BIKES are rated for their number\l"
# 934 "data/maps/Route110/scripts.pory"
	.string "of collisions and their total times.\p"
# 935 "data/maps/Route110/scripts.pory"
	.string "ACRO BIKES do not qualify for rating.\n"
# 936 "data/maps/Route110/scripts.pory"
	.string "They are easy to turn, so it's not fair.$"
# 937 "data/maps/Route110/scripts.pory"

# 938 "data/maps/Route110/scripts.pory"
Route110_Text_SlateportCitySign:
# 939 "data/maps/Route110/scripts.pory"
	.string "Route 110\n"
# 940 "data/maps/Route110/scripts.pory"
	.string "{DOWN_ARROW} Slateport City$"
# 941 "data/maps/Route110/scripts.pory"

# 942 "data/maps/Route110/scripts.pory"
Route110_Text_CyclingRoadSign:
# 943 "data/maps/Route110/scripts.pory"
	.string "Seaside Cycling Road$"
# 944 "data/maps/Route110/scripts.pory"

# 945 "data/maps/Route110/scripts.pory"
Route110_Text_AquaWasHere:
# 946 "data/maps/Route110/scripts.pory"
	.string "“Team Aqua was here!”\p"
# 947 "data/maps/Route110/scripts.pory"
	.string "Someone painted that onto this sign,\n"
# 948 "data/maps/Route110/scripts.pory"
	.string "but then someone else painted over it.\p"
# 949 "data/maps/Route110/scripts.pory"
	.string "“Team Magma rules!” is what it\n"
# 950 "data/maps/Route110/scripts.pory"
	.string "says now.$"
# 951 "data/maps/Route110/scripts.pory"

# 952 "data/maps/Route110/scripts.pory"
Route110_Text_Route103Sign:
# 953 "data/maps/Route110/scripts.pory"
	.string "Route 110\n"
# 954 "data/maps/Route110/scripts.pory"
	.string "{LEFT_ARROW} Route 103$"
# 955 "data/maps/Route110/scripts.pory"

# 956 "data/maps/Route110/scripts.pory"
Route110_Text_SeasideParkingSign:
# 957 "data/maps/Route110/scripts.pory"
	.string "Seaside Parking$"
# 958 "data/maps/Route110/scripts.pory"

# 959 "data/maps/Route110/scripts.pory"
Route110_Text_MauvilleCitySign:
# 960 "data/maps/Route110/scripts.pory"
	.string "Route 110\n"
# 961 "data/maps/Route110/scripts.pory"
	.string "{UP_ARROW} Mauville City$"
# 962 "data/maps/Route110/scripts.pory"

# 963 "data/maps/Route110/scripts.pory"
Route110_Text_TrainerTipsPrlzSleep:
# 964 "data/maps/Route110/scripts.pory"
	.string "Trainer Tips\p"
# 965 "data/maps/Route110/scripts.pory"
	.string "The foe can be made helpless by\n"
# 966 "data/maps/Route110/scripts.pory"
	.string "paralyzing it or causing it to sleep.\p"
# 967 "data/maps/Route110/scripts.pory"
	.string "It is an important technique for\n"
# 968 "data/maps/Route110/scripts.pory"
	.string "Pokémon battles.$"
# 969 "data/maps/Route110/scripts.pory"

# 970 "data/maps/Route110/scripts.pory"
Route110_Text_TrainerTipsRegisterItems:
# 971 "data/maps/Route110/scripts.pory"
	.string "Trainer Tips\p"
# 972 "data/maps/Route110/scripts.pory"
	.string "The items in the BAG can be reorganized\n"
# 973 "data/maps/Route110/scripts.pory"
	.string "by pressing SELECT.$"
# 974 "data/maps/Route110/scripts.pory"

# 975 "data/maps/Route110/scripts.pory"
Route110_Text_TrickHouseSign:
# 976 "data/maps/Route110/scripts.pory"
	.string "“Three steps {RIGHT_ARROW} and two steps {UP_ARROW}\n"
# 977 "data/maps/Route110/scripts.pory"
	.string "to reach the wondrous Trick House.”$"
# 978 "data/maps/Route110/scripts.pory"

# 979 "data/maps/Route110/scripts.pory"
Route110_Text_BestRecord:
# 980 "data/maps/Route110/scripts.pory"
	.string "THE BEST RECORD TO DATE…\p"
# 981 "data/maps/Route110/scripts.pory"
	.string "No. of collisions: {STR_VAR_1}\p"
# 982 "data/maps/Route110/scripts.pory"
	.string "Elapsed time: {STR_VAR_2}$"
# 983 "data/maps/Route110/scripts.pory"

# 984 "data/maps/Route110/scripts.pory"
Route110_Text_ThereIsNoRecord:
# 985 "data/maps/Route110/scripts.pory"
	.string "THE BEST RECORD TO DATE…\p"
# 986 "data/maps/Route110/scripts.pory"
	.string "No one seems to have taken the\n"
# 987 "data/maps/Route110/scripts.pory"
	.string "challenge. There is no record…$"
# 988 "data/maps/Route110/scripts.pory"

# 989 "data/maps/Route110/scripts.pory"
Route110_Text_ImagineSeeingYouHere:
# 990 "data/maps/Route110/scripts.pory"
	.string "PROF. BIRCH: Oh, {PLAYER}{KUN}!\n"
# 991 "data/maps/Route110/scripts.pory"
	.string "Imagine seeing you here!\p"
# 992 "data/maps/Route110/scripts.pory"
	.string "And where might my {RIVAL} be?$"
# 993 "data/maps/Route110/scripts.pory"

# 994 "data/maps/Route110/scripts.pory"
Route110_Text_HeardYouInstallMatchCall:
# 995 "data/maps/Route110/scripts.pory"
	.string "Oh, I see!\n"
# 996 "data/maps/Route110/scripts.pory"
	.string "You two are running separately.\l"
# 997 "data/maps/Route110/scripts.pory"
	.string "Well, that's fine.\p"
# 998 "data/maps/Route110/scripts.pory"
	.string "Oh, yes, I heard that your Pokénav\n"
# 999 "data/maps/Route110/scripts.pory"
	.string "had the MATCH CALL system installed.\p"
# 1000 "data/maps/Route110/scripts.pory"
	.string "Well, then, I should register you in\n"
# 1001 "data/maps/Route110/scripts.pory"
	.string "my Pokénav as well.\p"
# 1002 "data/maps/Route110/scripts.pory"
	.string "That way, even when we're apart,\n"
# 1003 "data/maps/Route110/scripts.pory"
	.string "I can rate your Pokédex anytime.\p"
# 1004 "data/maps/Route110/scripts.pory"
	.string "… … … … … …$"
# 1005 "data/maps/Route110/scripts.pory"

# 1006 "data/maps/Route110/scripts.pory"
Route110_Text_RegisteredBirchInPokenav:
# 1007 "data/maps/Route110/scripts.pory"
	.string "Registered PROF. BIRCH\n"
# 1008 "data/maps/Route110/scripts.pory"
	.string "in the Pokénav.$"
# 1009 "data/maps/Route110/scripts.pory"

# 1010 "data/maps/Route110/scripts.pory"
Route110_Text_KeepAnEyeOutForRival:
# 1011 "data/maps/Route110/scripts.pory"
	.string "PROF. BIRCH: {PLAYER}{KUN}…\p"
# 1012 "data/maps/Route110/scripts.pory"
	.string "Please keep an eye out for my {RIVAL}.\n"
# 1013 "data/maps/Route110/scripts.pory"
	.string "… … … … … …\p"
# 1014 "data/maps/Route110/scripts.pory"
	.string "Well, I had better get going.\n"
# 1015 "data/maps/Route110/scripts.pory"
	.string "See you again, {PLAYER}{KUN}!$"

Route110_EventScript_OldWoman_Text_0:
# 5 "data/maps/Route110/scripts.pory"
	.string "Behind me is the Trick House.\p"
	.string "The trainers inside don't fight\n"
	.string "fair…\p"
	.string "But if you can defeat them, you'll\n"
	.string "recieve some great rewards!\p"
	.string "I believe you should wait a\n"
	.string "little while before entering.$"

Route110_EventScript_OldWoman_Text_1:
# 13 "data/maps/Route110/scripts.pory"
	.string "Behind me is the Trick House.\p"
	.string "The trainers inside don't fight\n"
	.string "fair…\p"
	.string "But if you can defeat them, you'll\n"
	.string "recieve some great rewards!$"
