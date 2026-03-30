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
	trainerbattle_single TRAINER_EDWIN_1, Route110_Text_EdwinIntro, Route110_Text_EdwinDefeated, Route110_EventScript_EdwinRegisterMatchCallAfterBattle
# 203 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 204 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_EdwinRematch
# 205 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinPostBattle, MSGBOX_DEFAULT
# 206 "data/maps/Route110/scripts.pory"
	release
# 207 "data/maps/Route110/scripts.pory"
	end
# 208 "data/maps/Route110/scripts.pory"

# 209 "data/maps/Route110/scripts.pory"
Route110_EventScript_EdwinRegisterMatchCallAfterBattle::
# 210 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 211 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 212 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinRegister, MSGBOX_DEFAULT
# 213 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_EDWIN_1
# 214 "data/maps/Route110/scripts.pory"
	release
# 215 "data/maps/Route110/scripts.pory"
	end
# 216 "data/maps/Route110/scripts.pory"

# 217 "data/maps/Route110/scripts.pory"
Route110_EventScript_EdwinRematch::
# 218 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_EDWIN_1, Route110_Text_EdwinRematchIntro, Route110_Text_EdwinRematchDefeated
# 219 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_EdwinRematchPostBattle, MSGBOX_AUTOCLOSE
# 220 "data/maps/Route110/scripts.pory"
	end
# 221 "data/maps/Route110/scripts.pory"

# 222 "data/maps/Route110/scripts.pory"
Route110_EventScript_Dale::
# 223 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_DALE, Route110_Text_DaleIntro, Route110_Text_DaleDefeated
# 224 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_DalePostBattle, MSGBOX_AUTOCLOSE
# 225 "data/maps/Route110/scripts.pory"
	end
# 226 "data/maps/Route110/scripts.pory"

# 227 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jacob::
# 228 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JACOB, Route110_Text_JacobIntro, Route110_Text_JacobDefeated
# 229 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JacobPostBattle, MSGBOX_AUTOCLOSE
# 230 "data/maps/Route110/scripts.pory"
	end
# 231 "data/maps/Route110/scripts.pory"

# 232 "data/maps/Route110/scripts.pory"
Route110_EventScript_Anthony::
# 233 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ANTHONY, Route110_Text_AnthonyIntro, Route110_Text_AnthonyDefeated
# 234 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AnthonyPostBattle, MSGBOX_AUTOCLOSE
# 235 "data/maps/Route110/scripts.pory"
	end
# 236 "data/maps/Route110/scripts.pory"

# 237 "data/maps/Route110/scripts.pory"
Route110_EventScript_Benjamin::
# 238 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_BENJAMIN_1, Route110_Text_BenjaminIntro, Route110_Text_BenjaminDefeated, Route110_EventScript_BenjaminRegisterMatchCallAfterBattle
# 239 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 240 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_BenjaminRematch
# 241 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminPostBattle, MSGBOX_DEFAULT
# 242 "data/maps/Route110/scripts.pory"
	release
# 243 "data/maps/Route110/scripts.pory"
	end
# 244 "data/maps/Route110/scripts.pory"

# 245 "data/maps/Route110/scripts.pory"
Route110_EventScript_BenjaminRegisterMatchCallAfterBattle::
# 246 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 247 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 248 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminRegister, MSGBOX_DEFAULT
# 249 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_BENJAMIN_1
# 250 "data/maps/Route110/scripts.pory"
	release
# 251 "data/maps/Route110/scripts.pory"
	end
# 252 "data/maps/Route110/scripts.pory"

# 253 "data/maps/Route110/scripts.pory"
Route110_EventScript_BenjaminRematch::
# 254 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_BENJAMIN_1, Route110_Text_BenjaminRematchIntro, Route110_Text_BenjaminRematchDefeated
# 255 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BenjaminRematchPostBattle, MSGBOX_AUTOCLOSE
# 256 "data/maps/Route110/scripts.pory"
	end
# 257 "data/maps/Route110/scripts.pory"

# 258 "data/maps/Route110/scripts.pory"
Route110_EventScript_Jasmine::
# 259 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JASMINE, Route110_Text_JasmineIntro, Route110_Text_JasmineDefeated
# 260 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JasminePostBattle, MSGBOX_AUTOCLOSE
# 261 "data/maps/Route110/scripts.pory"
	end
# 262 "data/maps/Route110/scripts.pory"

# 263 "data/maps/Route110/scripts.pory"
Route110_EventScript_Abigail::
# 264 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ABIGAIL_1, Route110_Text_AbigailIntro, Route110_Text_AbigailDefeated, Route110_EventScript_AbigailRegisterMatchCallAfterBattle
# 265 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 266 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_AbigailRematch
# 267 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailPostBattle, MSGBOX_DEFAULT
# 268 "data/maps/Route110/scripts.pory"
	release
# 269 "data/maps/Route110/scripts.pory"
	end
# 270 "data/maps/Route110/scripts.pory"

# 271 "data/maps/Route110/scripts.pory"
Route110_EventScript_AbigailRegisterMatchCallAfterBattle::
# 272 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 273 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 274 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailRegister, MSGBOX_DEFAULT
# 275 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_ABIGAIL_1
# 276 "data/maps/Route110/scripts.pory"
	release
# 277 "data/maps/Route110/scripts.pory"
	end
# 278 "data/maps/Route110/scripts.pory"

# 279 "data/maps/Route110/scripts.pory"
Route110_EventScript_AbigailRematch::
# 280 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_ABIGAIL_1, Route110_Text_AbigailRematchIntro, Route110_Text_AbigailRematchDefeated
# 281 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AbigailRematchPostBattle, MSGBOX_AUTOCLOSE
# 282 "data/maps/Route110/scripts.pory"
	end
# 283 "data/maps/Route110/scripts.pory"

# 284 "data/maps/Route110/scripts.pory"
Route110_EventScript_Isabel::
# 285 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ISABEL_1, Route110_Text_IsabelIntro, Route110_Text_IsabelDefeated, Route110_EventScript_IsabelRegisterMatchCallAfterBattle
# 286 "data/maps/Route110/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 287 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route110_EventScript_IsabelRematch
# 288 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelPostBattle, MSGBOX_DEFAULT
# 289 "data/maps/Route110/scripts.pory"
	release
# 290 "data/maps/Route110/scripts.pory"
	end
# 291 "data/maps/Route110/scripts.pory"

# 292 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelRegisterMatchCallAfterBattle::
# 293 "data/maps/Route110/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 294 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 295 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelRegister, MSGBOX_DEFAULT
# 296 "data/maps/Route110/scripts.pory"
	register_matchcall TRAINER_ISABEL_1
# 297 "data/maps/Route110/scripts.pory"
	release
# 298 "data/maps/Route110/scripts.pory"
	end
# 299 "data/maps/Route110/scripts.pory"

# 300 "data/maps/Route110/scripts.pory"
Route110_EventScript_IsabelRematch::
# 301 "data/maps/Route110/scripts.pory"
	trainerbattle_rematch TRAINER_ISABEL_1, Route110_Text_IsabelRematchIntro, Route110_Text_IsabelRematchDefeated
# 302 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_IsabelRematchPostBattle, MSGBOX_AUTOCLOSE
# 303 "data/maps/Route110/scripts.pory"
	end
# 304 "data/maps/Route110/scripts.pory"

# 305 "data/maps/Route110/scripts.pory"
Route110_EventScript_Timmy::
# 306 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_TIMMY, Route110_Text_TimmyIntro, Route110_Text_TimmyDefeated
# 307 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_TimmyPostBattle, MSGBOX_AUTOCLOSE
# 308 "data/maps/Route110/scripts.pory"
	end
# 309 "data/maps/Route110/scripts.pory"

# 310 "data/maps/Route110/scripts.pory"
Route110_EventScript_Unused::
# 311 "data/maps/Route110/scripts.pory"
	end
# 312 "data/maps/Route110/scripts.pory"

# 313 "data/maps/Route110/scripts.pory"
Route110_EventScript_Kaleb::
# 314 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_KALEB, Route110_Text_KalebIntro, Route110_Text_KalebDefeated
# 315 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KalebPostBattle, MSGBOX_AUTOCLOSE
# 316 "data/maps/Route110/scripts.pory"
	end
# 317 "data/maps/Route110/scripts.pory"

# 318 "data/maps/Route110/scripts.pory"
Route110_EventScript_Joseph::
# 319 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_JOSEPH, Route110_Text_JosephIntro, Route110_Text_JosephDefeated
# 320 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_JosephPostBattle, MSGBOX_AUTOCLOSE
# 321 "data/maps/Route110/scripts.pory"
	end
# 322 "data/maps/Route110/scripts.pory"

# 323 "data/maps/Route110/scripts.pory"
Route110_EventScript_Alyssa::
# 324 "data/maps/Route110/scripts.pory"
	trainerbattle_single TRAINER_ALYSSA, Route110_Text_AlyssaIntro, Route110_Text_AlyssaDefeated
# 325 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_AlyssaPostBattle, MSGBOX_AUTOCLOSE
# 326 "data/maps/Route110/scripts.pory"
	end
# 327 "data/maps/Route110/scripts.pory"

# 328 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeEnd::
# 329 "data/maps/Route110/scripts.pory"
	lockall
# 330 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 331 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_CyclingChallengeResults
# 332 "data/maps/Route110/scripts.pory"
	releaseall
# 333 "data/maps/Route110/scripts.pory"
	end
# 334 "data/maps/Route110/scripts.pory"

# 335 "data/maps/Route110/scripts.pory"
Route110_EventScript_CyclingChallengeResults::
# 336 "data/maps/Route110/scripts.pory"
	special FinishCyclingRoadChallenge
# 337 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_CyclingChallengeResultSummary, MSGBOX_DEFAULT
# 338 "data/maps/Route110/scripts.pory"
	switch VAR_RESULT
# 339 "data/maps/Route110/scripts.pory"
	case 10, Route110_EventScript_ChallengeReactionBest
# 340 "data/maps/Route110/scripts.pory"
	case 9, Route110_EventScript_ChallengeReactionGood
# 341 "data/maps/Route110/scripts.pory"
	case 8, Route110_EventScript_ChallengeReactionGood
# 342 "data/maps/Route110/scripts.pory"
	case 7, Route110_EventScript_ChallengeReactionGood
# 343 "data/maps/Route110/scripts.pory"
	case 6, Route110_EventScript_ChallengeReactionOk
# 344 "data/maps/Route110/scripts.pory"
	case 5, Route110_EventScript_ChallengeReactionOk
# 345 "data/maps/Route110/scripts.pory"
	case 4, Route110_EventScript_ChallengeReactionOk
# 346 "data/maps/Route110/scripts.pory"
	case 3, Route110_EventScript_ChallengeReactionBad
# 347 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_ChallengeReactionBad
# 348 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_ChallengeReactionBad
# 349 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_ChallengeReactionWorst
# 350 "data/maps/Route110/scripts.pory"
	end
# 351 "data/maps/Route110/scripts.pory"

# 352 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionBest::
# 353 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBest, MSGBOX_DEFAULT
# 354 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 355 "data/maps/Route110/scripts.pory"
	end
# 356 "data/maps/Route110/scripts.pory"

# 357 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionGood::
# 358 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionGood, MSGBOX_DEFAULT
# 359 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 360 "data/maps/Route110/scripts.pory"
	end
# 361 "data/maps/Route110/scripts.pory"

# 362 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionOk::
# 363 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionOk, MSGBOX_DEFAULT
# 364 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 365 "data/maps/Route110/scripts.pory"
	end
# 366 "data/maps/Route110/scripts.pory"

# 367 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionBad::
# 368 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionBad, MSGBOX_DEFAULT
# 369 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 370 "data/maps/Route110/scripts.pory"
	end
# 371 "data/maps/Route110/scripts.pory"

# 372 "data/maps/Route110/scripts.pory"
Route110_EventScript_ChallengeReactionWorst::
# 373 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ChallengeReactionWorst, MSGBOX_DEFAULT
# 374 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_EndChallenge
# 375 "data/maps/Route110/scripts.pory"
	end
# 376 "data/maps/Route110/scripts.pory"

# 377 "data/maps/Route110/scripts.pory"
Route110_EventScript_EndChallenge::
# 378 "data/maps/Route110/scripts.pory"
	setvar VAR_CYCLING_CHALLENGE_STATE, 3
# 379 "data/maps/Route110/scripts.pory"
	savebgm MUS_DUMMY
# 380 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
# 381 "data/maps/Route110/scripts.pory"
	return
# 382 "data/maps/Route110/scripts.pory"

# 383 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger1::
# 384 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 385 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 386 "data/maps/Route110/scripts.pory"
	end
# 387 "data/maps/Route110/scripts.pory"

# 388 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger2::
# 389 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 390 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 391 "data/maps/Route110/scripts.pory"
	end
# 392 "data/maps/Route110/scripts.pory"

# 393 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalTrigger3::
# 394 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 395 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalScene
# 396 "data/maps/Route110/scripts.pory"
	end
# 397 "data/maps/Route110/scripts.pory"

# 398 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalScene::
# 399 "data/maps/Route110/scripts.pory"
	lockall
# 400 "data/maps/Route110/scripts.pory"
	checkplayergender
# 401 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_RESULT, MALE, Route110_EventScript_PlayMayMusic
# 402 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_RESULT, FEMALE, Route110_EventScript_PlayBrendanMusic
# 403 "data/maps/Route110/scripts.pory"
	@applymovement LOCALID_RIVAL, Common_Movement_WalkInPlaceFasterDown
# 404 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 405 "data/maps/Route110/scripts.pory"
	@applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 406 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 407 "data/maps/Route110/scripts.pory"
	@applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 408 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 409 "data/maps/Route110/scripts.pory"
	delay 30
# 410 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_RivalApproachPlayer1
# 411 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_RivalApproachPlayer2
# 412 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_RivalApproachPlayer3
# 413 "data/maps/Route110/scripts.pory"
	checkplayergender
# 414 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, Route110_EventScript_MayBattle
# 415 "data/maps/Route110/scripts.pory"
	goto_if_eq VAR_RESULT, FEMALE, Route110_EventScript_BrendanBattle
# 416 "data/maps/Route110/scripts.pory"
	releaseall
# 417 "data/maps/Route110/scripts.pory"
	end
# 418 "data/maps/Route110/scripts.pory"

# 419 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayMayMusic::
# 420 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_MAY, TRUE
# 421 "data/maps/Route110/scripts.pory"
	return
# 422 "data/maps/Route110/scripts.pory"

# 423 "data/maps/Route110/scripts.pory"
Route110_EventScript_PlayBrendanMusic::
# 424 "data/maps/Route110/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 425 "data/maps/Route110/scripts.pory"
	return
# 426 "data/maps/Route110/scripts.pory"

# 427 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattle::
# 428 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayLetsBattle, MSGBOX_DEFAULT
# 429 "data/maps/Route110/scripts.pory"
	switch VAR_STARTER_MON
# 430 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_MayBattleTreecko
# 431 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_MayBattleTorchic
# 432 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_MayBattleMudkip
# 433 "data/maps/Route110/scripts.pory"
	end
# 434 "data/maps/Route110/scripts.pory"

# 435 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleTreecko::
# 436 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TREECKO, Route110_Text_MayDefeated
# 437 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 438 "data/maps/Route110/scripts.pory"
	end
# 439 "data/maps/Route110/scripts.pory"

# 440 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleTorchic::
# 441 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_TORCHIC, Route110_Text_MayDefeated
# 442 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 443 "data/maps/Route110/scripts.pory"
	end
# 444 "data/maps/Route110/scripts.pory"

# 445 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayBattleMudkip::
# 446 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_MAY_ROUTE_110_MUDKIP, Route110_Text_MayDefeated
# 447 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_MayDefeated
# 448 "data/maps/Route110/scripts.pory"
	end
# 449 "data/maps/Route110/scripts.pory"

# 450 "data/maps/Route110/scripts.pory"
Route110_EventScript_MayDefeated::
# 451 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayTakeThis, MSGBOX_DEFAULT
# 452 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_GiveItemfinder
# 453 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_MayExplainItemfinder, MSGBOX_DEFAULT
# 454 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalExit
# 455 "data/maps/Route110/scripts.pory"
	end
# 456 "data/maps/Route110/scripts.pory"

# 457 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattle::
# 458 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanLetsBattle, MSGBOX_DEFAULT
# 459 "data/maps/Route110/scripts.pory"
	switch VAR_STARTER_MON
# 460 "data/maps/Route110/scripts.pory"
	case 0, Route110_EventScript_BrendanBattleTreecko
# 461 "data/maps/Route110/scripts.pory"
	case 1, Route110_EventScript_BrendanBattleTorchic
# 462 "data/maps/Route110/scripts.pory"
	case 2, Route110_EventScript_BrendanBattleMudkip
# 463 "data/maps/Route110/scripts.pory"
	end
# 464 "data/maps/Route110/scripts.pory"

# 465 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleTreecko::
# 466 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TREECKO, Route110_Text_BrendanDefeated
# 467 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 468 "data/maps/Route110/scripts.pory"
	end
# 469 "data/maps/Route110/scripts.pory"

# 470 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleTorchic::
# 471 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_TORCHIC, Route110_Text_BrendanDefeated
# 472 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 473 "data/maps/Route110/scripts.pory"
	end
# 474 "data/maps/Route110/scripts.pory"

# 475 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanBattleMudkip::
# 476 "data/maps/Route110/scripts.pory"
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_110_MUDKIP, Route110_Text_BrendanDefeated
# 477 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BrendanDefeated
# 478 "data/maps/Route110/scripts.pory"
	end
# 479 "data/maps/Route110/scripts.pory"

# 480 "data/maps/Route110/scripts.pory"
Route110_EventScript_BrendanDefeated::
# 481 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanTakeThis, MSGBOX_DEFAULT
# 482 "data/maps/Route110/scripts.pory"
	call Route110_EventScript_GiveItemfinder
# 483 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_BrendanExplainItemfinder, MSGBOX_DEFAULT
# 484 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_RivalExit
# 485 "data/maps/Route110/scripts.pory"
	end
# 486 "data/maps/Route110/scripts.pory"

# 487 "data/maps/Route110/scripts.pory"
Route110_EventScript_GiveItemfinder::
# 488 "data/maps/Route110/scripts.pory"
	giveitem ITEM_DOWSING_MACHINE
# 489 "data/maps/Route110/scripts.pory"
	return
# 490 "data/maps/Route110/scripts.pory"

# 491 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit::
# 492 "data/maps/Route110/scripts.pory"
	closemessage
# 493 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_MoveRival1
# 494 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_MoveRival2
# 495 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_MoveRival3
# 496 "data/maps/Route110/scripts.pory"
	@setobjectmovementtype LOCALID_RIVAL, MOVEMENT_TYPE_FACE_RIGHT
# 497 "data/maps/Route110/scripts.pory"
	setobjectmovementtype LOCALID_RIVAL_ON_BIKE, MOVEMENT_TYPE_FACE_RIGHT
# 498 "data/maps/Route110/scripts.pory"
	@removeobject LOCALID_RIVAL
# 499 "data/maps/Route110/scripts.pory"
	addobject LOCALID_RIVAL_ON_BIKE
# 500 "data/maps/Route110/scripts.pory"
	delay 45
# 501 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_RivalExit1
# 502 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_RivalExit2
# 503 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_RivalExit3
# 504 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_RIVAL_ON_BIKE
# 505 "data/maps/Route110/scripts.pory"
	setvar VAR_ROUTE110_STATE, 1
# 506 "data/maps/Route110/scripts.pory"
	savebgm MUS_DUMMY
# 507 "data/maps/Route110/scripts.pory"
	fadedefaultbgm
# 508 "data/maps/Route110/scripts.pory"
	releaseall
# 509 "data/maps/Route110/scripts.pory"
	end
# 510 "data/maps/Route110/scripts.pory"

# 511 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer1::
# 512 "data/maps/Route110/scripts.pory"
	@applymovement LOCALID_RIVAL, Route110_Movement_RivalApproachPlayer1
# 513 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 514 "data/maps/Route110/scripts.pory"
	return
# 515 "data/maps/Route110/scripts.pory"

# 516 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer2::
# 517 "data/maps/Route110/scripts.pory"
	@applymovement LOCALID_RIVAL, Route110_Movement_RivalApproachPlayer2
# 518 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 519 "data/maps/Route110/scripts.pory"
	return
# 520 "data/maps/Route110/scripts.pory"

# 521 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalApproachPlayer3::
# 522 "data/maps/Route110/scripts.pory"
	@applymovement LOCALID_RIVAL, Route110_Movement_RivalApproachPlayer3
# 523 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 524 "data/maps/Route110/scripts.pory"
	return
# 525 "data/maps/Route110/scripts.pory"

# 526 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit1::
# 527 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route110_Movement_RivalExit1
# 528 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 529 "data/maps/Route110/scripts.pory"
	return
# 530 "data/maps/Route110/scripts.pory"

# 531 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit2::
# 532 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route110_Movement_RivalExit2
# 533 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 534 "data/maps/Route110/scripts.pory"
	return
# 535 "data/maps/Route110/scripts.pory"

# 536 "data/maps/Route110/scripts.pory"
Route110_EventScript_RivalExit3::
# 537 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_RIVAL_ON_BIKE, Route110_Movement_RivalExit3
# 538 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 539 "data/maps/Route110/scripts.pory"
	return
# 540 "data/maps/Route110/scripts.pory"

# 541 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival1::
# 542 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 33, 55
# 543 "data/maps/Route110/scripts.pory"
	return
# 544 "data/maps/Route110/scripts.pory"

# 545 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival2::
# 546 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 34, 55
# 547 "data/maps/Route110/scripts.pory"
	return
# 548 "data/maps/Route110/scripts.pory"

# 549 "data/maps/Route110/scripts.pory"
Route110_EventScript_MoveRival3::
# 550 "data/maps/Route110/scripts.pory"
	setobjectxyperm LOCALID_RIVAL_ON_BIKE, 35, 55
# 551 "data/maps/Route110/scripts.pory"
	return
# 552 "data/maps/Route110/scripts.pory"

# 553 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer1:
# 554 "data/maps/Route110/scripts.pory"
	walk_down
# 555 "data/maps/Route110/scripts.pory"
	walk_left
# 556 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_down
# 557 "data/maps/Route110/scripts.pory"
	step_end
# 558 "data/maps/Route110/scripts.pory"

# 559 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer2:
# 560 "data/maps/Route110/scripts.pory"
	walk_down
# 561 "data/maps/Route110/scripts.pory"
	step_end
# 562 "data/maps/Route110/scripts.pory"

# 563 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalApproachPlayer3:
# 564 "data/maps/Route110/scripts.pory"
	walk_down
# 565 "data/maps/Route110/scripts.pory"
	walk_right
# 566 "data/maps/Route110/scripts.pory"
	walk_in_place_faster_down
# 567 "data/maps/Route110/scripts.pory"
	step_end
# 568 "data/maps/Route110/scripts.pory"

# 569 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit1:
# 570 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 571 "data/maps/Route110/scripts.pory"
	walk_fast_up
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
	step_end
# 578 "data/maps/Route110/scripts.pory"

# 579 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit2:
# 580 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 581 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 582 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 583 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 584 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 585 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 586 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 587 "data/maps/Route110/scripts.pory"
	walk_fast_down
# 588 "data/maps/Route110/scripts.pory"
	step_end
# 589 "data/maps/Route110/scripts.pory"

# 590 "data/maps/Route110/scripts.pory"
Route110_Movement_RivalExit3:
# 591 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 592 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 593 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 594 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 595 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 596 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 597 "data/maps/Route110/scripts.pory"
	walk_fast_up
# 598 "data/maps/Route110/scripts.pory"
	step_end
# 599 "data/maps/Route110/scripts.pory"

# 600 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene1::
# 601 "data/maps/Route110/scripts.pory"
	lockall
# 602 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 1
# 603 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 604 "data/maps/Route110/scripts.pory"

# 605 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene2::
# 606 "data/maps/Route110/scripts.pory"
	lockall
# 607 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 2
# 608 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 609 "data/maps/Route110/scripts.pory"

# 610 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene3::
# 611 "data/maps/Route110/scripts.pory"
	lockall
# 612 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 3
# 613 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 614 "data/maps/Route110/scripts.pory"

# 615 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene4::
# 616 "data/maps/Route110/scripts.pory"
	lockall
# 617 "data/maps/Route110/scripts.pory"
	setvar VAR_0x8008, 4
# 618 "data/maps/Route110/scripts.pory"
	goto Route110_EventScript_BirchScene
# 619 "data/maps/Route110/scripts.pory"

# 620 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchScene::
# 621 "data/maps/Route110/scripts.pory"
	addobject LOCALID_BIRCH
# 622 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchEntrance
# 623 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 624 "data/maps/Route110/scripts.pory"
	playse SE_PIN
# 625 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_ExclamationMark
# 626 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 627 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_Delay48
# 628 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 629 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_BirchApproachPlayer1
# 630 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_BirchApproachPlayer2
# 631 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_BirchApproachPlayer3
# 632 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_BirchApproachPlayer4
# 633 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_ImagineSeeingYouHere, MSGBOX_DEFAULT
# 634 "data/maps/Route110/scripts.pory"
	closemessage
# 635 "data/maps/Route110/scripts.pory"
	delay 20
# 636 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterLeft
# 637 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 638 "data/maps/Route110/scripts.pory"
	delay 10
# 639 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterRight
# 640 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 641 "data/maps/Route110/scripts.pory"
	delay 20
# 642 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Common_Movement_WalkInPlaceFasterDown
# 643 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 644 "data/maps/Route110/scripts.pory"
	delay 30
# 645 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_HeardYouInstallMatchCall, MSGBOX_DEFAULT
# 646 "data/maps/Route110/scripts.pory"
	closemessage
# 647 "data/maps/Route110/scripts.pory"
	delay 30
# 648 "data/maps/Route110/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 649 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_RegisteredBirchInPokenav, MSGBOX_DEFAULT
# 650 "data/maps/Route110/scripts.pory"
	waitfanfare
# 651 "data/maps/Route110/scripts.pory"
	closemessage
# 652 "data/maps/Route110/scripts.pory"
	delay 30
# 653 "data/maps/Route110/scripts.pory"
	setflag FLAG_ENABLE_PROF_BIRCH_MATCH_CALL
# 654 "data/maps/Route110/scripts.pory"
	msgbox Route110_Text_KeepAnEyeOutForRival, MSGBOX_DEFAULT
# 655 "data/maps/Route110/scripts.pory"
	closemessage
# 656 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 1, Route110_EventScript_BirchExit1
# 657 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 2, Route110_EventScript_BirchExit2
# 658 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 3, Route110_EventScript_BirchExit3
# 659 "data/maps/Route110/scripts.pory"
	call_if_eq VAR_0x8008, 4, Route110_EventScript_BirchExit4
# 660 "data/maps/Route110/scripts.pory"
	removeobject LOCALID_BIRCH
# 661 "data/maps/Route110/scripts.pory"
	setvar VAR_REGISTER_BIRCH_STATE, 2
# 662 "data/maps/Route110/scripts.pory"
	releaseall
# 663 "data/maps/Route110/scripts.pory"
	end
# 664 "data/maps/Route110/scripts.pory"

# 665 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer1::
# 666 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer1
# 667 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 668 "data/maps/Route110/scripts.pory"
	return
# 669 "data/maps/Route110/scripts.pory"

# 670 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer2::
# 671 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer2
# 672 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 673 "data/maps/Route110/scripts.pory"
	return
# 674 "data/maps/Route110/scripts.pory"

# 675 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer3::
# 676 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer3
# 677 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 678 "data/maps/Route110/scripts.pory"
	return
# 679 "data/maps/Route110/scripts.pory"

# 680 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchApproachPlayer4::
# 681 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchApproachPlayer4
# 682 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 683 "data/maps/Route110/scripts.pory"
	return
# 684 "data/maps/Route110/scripts.pory"

# 685 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit1::
# 686 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit1
# 687 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 688 "data/maps/Route110/scripts.pory"
	return
# 689 "data/maps/Route110/scripts.pory"

# 690 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit2::
# 691 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit2
# 692 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 693 "data/maps/Route110/scripts.pory"
	return
# 694 "data/maps/Route110/scripts.pory"

# 695 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit3::
# 696 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit3
# 697 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 698 "data/maps/Route110/scripts.pory"
	return
# 699 "data/maps/Route110/scripts.pory"

# 700 "data/maps/Route110/scripts.pory"
Route110_EventScript_BirchExit4::
# 701 "data/maps/Route110/scripts.pory"
	applymovement LOCALID_BIRCH, Route110_Movement_BirchExit4
# 702 "data/maps/Route110/scripts.pory"
	waitmovement 0
# 703 "data/maps/Route110/scripts.pory"
	return
# 704 "data/maps/Route110/scripts.pory"

# 705 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchEntrance:
# 706 "data/maps/Route110/scripts.pory"
	walk_down
# 707 "data/maps/Route110/scripts.pory"
	walk_down
# 708 "data/maps/Route110/scripts.pory"
	walk_down
# 709 "data/maps/Route110/scripts.pory"
	step_end
# 710 "data/maps/Route110/scripts.pory"

# 711 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer1:
# 712 "data/maps/Route110/scripts.pory"
	walk_down
# 713 "data/maps/Route110/scripts.pory"
	walk_left
# 714 "data/maps/Route110/scripts.pory"
	walk_left
# 715 "data/maps/Route110/scripts.pory"
	walk_down
# 716 "data/maps/Route110/scripts.pory"
	step_end
# 717 "data/maps/Route110/scripts.pory"

# 718 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer2:
# 719 "data/maps/Route110/scripts.pory"
	walk_down
# 720 "data/maps/Route110/scripts.pory"
	walk_left
# 721 "data/maps/Route110/scripts.pory"
	walk_down
# 722 "data/maps/Route110/scripts.pory"
	step_end
# 723 "data/maps/Route110/scripts.pory"

# 724 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer3:
# 725 "data/maps/Route110/scripts.pory"
	walk_down
# 726 "data/maps/Route110/scripts.pory"
	walk_down
# 727 "data/maps/Route110/scripts.pory"
	step_end
# 728 "data/maps/Route110/scripts.pory"

# 729 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchApproachPlayer4:
# 730 "data/maps/Route110/scripts.pory"
	walk_down
# 731 "data/maps/Route110/scripts.pory"
	walk_right
# 732 "data/maps/Route110/scripts.pory"
	walk_down
# 733 "data/maps/Route110/scripts.pory"
	step_end
# 734 "data/maps/Route110/scripts.pory"

# 735 "data/maps/Route110/scripts.pory"
Route110_Movement_BirchExit1:
# 736 "data/maps/Route110/scripts.pory"
	walk_up
# 737 "data/maps/Route110/scripts.pory"
	walk_up
# 738 "data/maps/Route110/scripts.pory"
	walk_right
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
Route110_Movement_BirchExit2:
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
Route110_Movement_BirchExit3:
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
Route110_Movement_BirchExit4:
# 761 "data/maps/Route110/scripts.pory"
	walk_up
# 762 "data/maps/Route110/scripts.pory"
	walk_up
# 763 "data/maps/Route110/scripts.pory"
	walk_up
# 764 "data/maps/Route110/scripts.pory"
	walk_up
# 765 "data/maps/Route110/scripts.pory"
	walk_up
# 766 "data/maps/Route110/scripts.pory"
	step_end
# 767 "data/maps/Route110/scripts.pory"

# 768 "data/maps/Route110/scripts.pory"
Route110_Text_WeCantTalkAboutAquaActivities:
# 769 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA's activities…\n"
# 770 "data/maps/Route110/scripts.pory"
	.string "We can't talk about them yet.$"
# 771 "data/maps/Route110/scripts.pory"

# 772 "data/maps/Route110/scripts.pory"
Route110_Text_KickUpARuckus:
# 773 "data/maps/Route110/scripts.pory"
	.string "I want to get going to SLATEPORT and\n"
# 774 "data/maps/Route110/scripts.pory"
	.string "kick up a ruckus!$"
# 775 "data/maps/Route110/scripts.pory"

# 776 "data/maps/Route110/scripts.pory"
Route110_Text_MyFirstJobInAqua:
# 777 "data/maps/Route110/scripts.pory"
	.string "This is my first job after joining\n"
# 778 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA. It's a little scary.$"
# 779 "data/maps/Route110/scripts.pory"

# 780 "data/maps/Route110/scripts.pory"
Route110_Text_AquaActionsBringSmiles:
# 781 "data/maps/Route110/scripts.pory"
	.string "TEAM AQUA's actions should bring\n"
# 782 "data/maps/Route110/scripts.pory"
	.string "smiles to people's faces!$"
# 783 "data/maps/Route110/scripts.pory"

# 784 "data/maps/Route110/scripts.pory"
Route110_Text_MayLetsBattle:
# 785 "data/maps/Route110/scripts.pory"
	.string "MAY: Hi, {PLAYER}{KUN}, long time no see!\p"
# 786 "data/maps/Route110/scripts.pory"
	.string "While I was searching for other\n"
# 787 "data/maps/Route110/scripts.pory"
	.string "Pokémon, my Pokémon grew stronger.\p"
# 788 "data/maps/Route110/scripts.pory"
	.string "So…\n"
# 789 "data/maps/Route110/scripts.pory"
	.string "How about a little battle?$"
# 790 "data/maps/Route110/scripts.pory"

# 791 "data/maps/Route110/scripts.pory"
Route110_Text_MayDefeated:
# 792 "data/maps/Route110/scripts.pory"
	.string "Yikes!\n"
# 793 "data/maps/Route110/scripts.pory"
	.string "You're better than I expected!$"
# 794 "data/maps/Route110/scripts.pory"

# 795 "data/maps/Route110/scripts.pory"
Route110_Text_MayTakeThis:
# 796 "data/maps/Route110/scripts.pory"
	.string "MAY: {PLAYER}{KUN}, you've been busy\n"
# 797 "data/maps/Route110/scripts.pory"
	.string "training, too, haven't you?\p"
# 798 "data/maps/Route110/scripts.pory"
	.string "I think you deserve a reward!\n"
# 799 "data/maps/Route110/scripts.pory"
	.string "This is from me!$"
# 800 "data/maps/Route110/scripts.pory"

# 801 "data/maps/Route110/scripts.pory"
Route110_Text_MayExplainItemfinder:
# 802 "data/maps/Route110/scripts.pory"
	.string "MAY: That's an ITEMFINDER.\p"
# 803 "data/maps/Route110/scripts.pory"
	.string "Try it out. If there is an item that's\n"
# 804 "data/maps/Route110/scripts.pory"
	.string "not visible, it emits a sound.\p"
# 805 "data/maps/Route110/scripts.pory"
	.string "Okay, {PLAYER}{KUN}, let's meet again!\p"
# 806 "data/maps/Route110/scripts.pory"
	.string "I know it's a little silly coming from\n"
# 807 "data/maps/Route110/scripts.pory"
	.string "me, but I think you should train a lot\l"
# 808 "data/maps/Route110/scripts.pory"
	.string "harder for the next time.$"
# 809 "data/maps/Route110/scripts.pory"

# 810 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanLetsBattle:
# 811 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: Hey, {PLAYER}.\n"
# 812 "data/maps/Route110/scripts.pory"
	.string "So this is where you were.\l"
# 813 "data/maps/Route110/scripts.pory"
	.string "How's it going?\p"
# 814 "data/maps/Route110/scripts.pory"
	.string "Have you been raising your Pokémon?\n"
# 815 "data/maps/Route110/scripts.pory"
	.string "I'll check for you.$"
# 816 "data/maps/Route110/scripts.pory"

# 817 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanDefeated:
# 818 "data/maps/Route110/scripts.pory"
	.string "Hmm…\n"
# 819 "data/maps/Route110/scripts.pory"
	.string "You're pretty good.$"
# 820 "data/maps/Route110/scripts.pory"

# 821 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanTakeThis:
# 822 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: {PLAYER}, you've trained\n"
# 823 "data/maps/Route110/scripts.pory"
	.string "without me noticing…\p"
# 824 "data/maps/Route110/scripts.pory"
	.string "Good enough!\n"
# 825 "data/maps/Route110/scripts.pory"
	.string "Here, take this.$"
# 826 "data/maps/Route110/scripts.pory"

# 827 "data/maps/Route110/scripts.pory"
Route110_Text_BrendanExplainItemfinder:
# 828 "data/maps/Route110/scripts.pory"
	.string "BRENDAN: That's an ITEMFINDER.\p"
# 829 "data/maps/Route110/scripts.pory"
	.string "Use it to root around for items that\n"
# 830 "data/maps/Route110/scripts.pory"
	.string "aren't visible.\p"
# 831 "data/maps/Route110/scripts.pory"
	.string "If it senses something, it emits\n"
# 832 "data/maps/Route110/scripts.pory"
	.string "a sound.\p"
# 833 "data/maps/Route110/scripts.pory"
	.string "Anyway, I'm off to look for new\n"
# 834 "data/maps/Route110/scripts.pory"
	.string "Pokémon.$"
# 835 "data/maps/Route110/scripts.pory"

# 836 "data/maps/Route110/scripts.pory"
Route110_Text_RideBikeAtFullSpeed:
# 837 "data/maps/Route110/scripts.pory"
	.string "Wouldn't it be great to ride a BIKE\n"
# 838 "data/maps/Route110/scripts.pory"
	.string "at full speed on CYCLING ROAD?$"
# 839 "data/maps/Route110/scripts.pory"

# 840 "data/maps/Route110/scripts.pory"
Route110_Text_HairStreamsBehindMe:
# 841 "data/maps/Route110/scripts.pory"
	.string "How do you like the way my raven-\n"
# 842 "data/maps/Route110/scripts.pory"
	.string "colored hair streams behind me?\p"
# 843 "data/maps/Route110/scripts.pory"
	.string "I grew my hair out just for that.$"
# 844 "data/maps/Route110/scripts.pory"

# 845 "data/maps/Route110/scripts.pory"
Route110_Text_YouGotBikeFromRydel:
# 846 "data/maps/Route110/scripts.pory"
	.string "Oh, hey, you got that BIKE from RYDEL!\p"
# 847 "data/maps/Route110/scripts.pory"
	.string "Oh, it's glaringly obvious.\n"
# 848 "data/maps/Route110/scripts.pory"
	.string "It says right on your bike…\p"
# 849 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 850 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 851 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 852 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 853 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 854 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 855 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\n"
# 856 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL,\p"
# 857 "data/maps/Route110/scripts.pory"
	.string "RYDEL, RYDEL, RYDEL, RYDEL, RYDEL…\n"
# 858 "data/maps/Route110/scripts.pory"
	.string "That name's everywhere.\p"
# 859 "data/maps/Route110/scripts.pory"
	.string "You should ride it around all over\n"
# 860 "data/maps/Route110/scripts.pory"
	.string "the place--it's good advertising!$"
# 861 "data/maps/Route110/scripts.pory"

# 862 "data/maps/Route110/scripts.pory"
Route110_Text_TwoRoads:
# 863 "data/maps/Route110/scripts.pory"
	.string "The two roads, one above, one below…\p"
# 864 "data/maps/Route110/scripts.pory"
	.string "A road each for people and Pokémon.\n"
# 865 "data/maps/Route110/scripts.pory"
	.string "Perhaps that is right and fair.$"
# 866 "data/maps/Route110/scripts.pory"

# 867 "data/maps/Route110/scripts.pory"
Route110_Text_WalkOnTheLowRoad:
# 868 "data/maps/Route110/scripts.pory"
	.string "Behind me is the Trick House.\p"
# 869 "data/maps/Route110/scripts.pory"
	.string "The trainers inside don't fight\n"
# 870 "data/maps/Route110/scripts.pory"
	.string "fair…\p"
# 871 "data/maps/Route110/scripts.pory"
	.string "But if you can defeat them, you'll\n"
# 872 "data/maps/Route110/scripts.pory"
	.string "recieve some great rewards!$"
# 873 "data/maps/Route110/scripts.pory"

# 874 "data/maps/Route110/scripts.pory"
Route110_Text_BikeTechniques:
# 875 "data/maps/Route110/scripts.pory"
	.string "Learning techniques will make BIKE\n"
# 876 "data/maps/Route110/scripts.pory"
	.string "riding even more fun.\p"
# 877 "data/maps/Route110/scripts.pory"
	.string "There are some places that you can\n"
# 878 "data/maps/Route110/scripts.pory"
	.string "reach only by using a BIKE technique.$"
# 879 "data/maps/Route110/scripts.pory"

# 880 "data/maps/Route110/scripts.pory"
Route110_Text_WhichShouldIChoose:
# 881 "data/maps/Route110/scripts.pory"
	.string "Which should I choose?\p"
# 882 "data/maps/Route110/scripts.pory"
	.string "Make a beeline for MAUVILLE on\n"
# 883 "data/maps/Route110/scripts.pory"
	.string "CYCLING ROAD, or take the low road\l"
# 884 "data/maps/Route110/scripts.pory"
	.string "and look for Pokémon?$"
# 885 "data/maps/Route110/scripts.pory"

# 886 "data/maps/Route110/scripts.pory"
Route110_Text_CyclingChallengeResultSummary:
# 887 "data/maps/Route110/scripts.pory"
	.string "Number of collisions:\n"
# 888 "data/maps/Route110/scripts.pory"
	.string "… … {STR_VAR_1}!\p"
# 889 "data/maps/Route110/scripts.pory"
	.string "Total time:\n"
# 890 "data/maps/Route110/scripts.pory"
	.string "… … {STR_VAR_2}!$"
# 891 "data/maps/Route110/scripts.pory"

# 892 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionBest:
# 893 "data/maps/Route110/scripts.pory"
	.string "Bravo! Splendid showing!\p"
# 894 "data/maps/Route110/scripts.pory"
	.string "Your love of cycling comes from deep\n"
# 895 "data/maps/Route110/scripts.pory"
	.string "within your heart.\l"
# 896 "data/maps/Route110/scripts.pory"
	.string "You've shaken me to my very soul!$"
# 897 "data/maps/Route110/scripts.pory"

# 898 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionGood:
# 899 "data/maps/Route110/scripts.pory"
	.string "Your technique is remarkable.\p"
# 900 "data/maps/Route110/scripts.pory"
	.string "I suggest you speed up a bit while\n"
# 901 "data/maps/Route110/scripts.pory"
	.string "still avoiding collisions.$"
# 902 "data/maps/Route110/scripts.pory"

# 903 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionOk:
# 904 "data/maps/Route110/scripts.pory"
	.string "I would consider you a work in\n"
# 905 "data/maps/Route110/scripts.pory"
	.string "progress.\p"
# 906 "data/maps/Route110/scripts.pory"
	.string "Still, I hope you don't forget the\n"
# 907 "data/maps/Route110/scripts.pory"
	.string "sheer pleasure of cycling.$"
# 908 "data/maps/Route110/scripts.pory"

# 909 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionBad:
# 910 "data/maps/Route110/scripts.pory"
	.string "My word… Your cycling skills border\n"
# 911 "data/maps/Route110/scripts.pory"
	.string "on terrifying.\p"
# 912 "data/maps/Route110/scripts.pory"
	.string "Most certainly, you need much more\n"
# 913 "data/maps/Route110/scripts.pory"
	.string "practice riding.$"
# 914 "data/maps/Route110/scripts.pory"

# 915 "data/maps/Route110/scripts.pory"
Route110_Text_ChallengeReactionWorst:
# 916 "data/maps/Route110/scripts.pory"
	.string "…I am aghast…\p"
# 917 "data/maps/Route110/scripts.pory"
	.string "You're perhaps not cut out for this\n"
# 918 "data/maps/Route110/scripts.pory"
	.string "unfortunate cycling business.\p"
# 919 "data/maps/Route110/scripts.pory"
	.string "You ought to give serious thought to\n"
# 920 "data/maps/Route110/scripts.pory"
	.string "returning that BIKE to RYDEL.$"
# 921 "data/maps/Route110/scripts.pory"

# 922 "data/maps/Route110/scripts.pory"
Route110_Text_RatedForNumberOfCollisions:
# 923 "data/maps/Route110/scripts.pory"
	.string "This is CYCLING ROAD.\p"
# 924 "data/maps/Route110/scripts.pory"
	.string "If you were to ride from MAUVILLE to\n"
# 925 "data/maps/Route110/scripts.pory"
	.string "SLATEPORT on a MACH BIKE, you would\l"
# 926 "data/maps/Route110/scripts.pory"
	.string "be rated for the number of collisions\l"
# 927 "data/maps/Route110/scripts.pory"
	.string "and your total time.$"
# 928 "data/maps/Route110/scripts.pory"

# 929 "data/maps/Route110/scripts.pory"
Route110_Text_AlwaysAimHigher:
# 930 "data/maps/Route110/scripts.pory"
	.string "Regardless of the results, I count on\n"
# 931 "data/maps/Route110/scripts.pory"
	.string "seeing more challenges from you.\l"
# 932 "data/maps/Route110/scripts.pory"
	.string "Always aim higher!$"
# 933 "data/maps/Route110/scripts.pory"

# 934 "data/maps/Route110/scripts.pory"
Route110_Text_AcroBikesDoNotQualify:
# 935 "data/maps/Route110/scripts.pory"
	.string "On this CYCLING ROAD, those riding\n"
# 936 "data/maps/Route110/scripts.pory"
	.string "MACH BIKES are rated for their number\l"
# 937 "data/maps/Route110/scripts.pory"
	.string "of collisions and their total times.\p"
# 938 "data/maps/Route110/scripts.pory"
	.string "ACRO BIKES do not qualify for rating.\n"
# 939 "data/maps/Route110/scripts.pory"
	.string "They are easy to turn, so it's not fair.$"
# 940 "data/maps/Route110/scripts.pory"

# 941 "data/maps/Route110/scripts.pory"
Route110_Text_SlateportCitySign:
# 942 "data/maps/Route110/scripts.pory"
	.string "Route 110\n"
# 943 "data/maps/Route110/scripts.pory"
	.string "{DOWN_ARROW} SLATEPORT CITY$"
# 944 "data/maps/Route110/scripts.pory"

# 945 "data/maps/Route110/scripts.pory"
Route110_Text_CyclingRoadSign:
# 946 "data/maps/Route110/scripts.pory"
	.string "SEASIDE CYCLING ROAD$"
# 947 "data/maps/Route110/scripts.pory"

# 948 "data/maps/Route110/scripts.pory"
Route110_Text_AquaWasHere:
# 949 "data/maps/Route110/scripts.pory"
	.string "“TEAM AQUA was here!”\p"
# 950 "data/maps/Route110/scripts.pory"
	.string "Someone painted that onto this sign,\n"
# 951 "data/maps/Route110/scripts.pory"
	.string "but then someone else painted over it.\p"
# 952 "data/maps/Route110/scripts.pory"
	.string "“TEAM MAGMA rules!” is what it\n"
# 953 "data/maps/Route110/scripts.pory"
	.string "says now.$"
# 954 "data/maps/Route110/scripts.pory"

# 955 "data/maps/Route110/scripts.pory"
Route110_Text_Route103Sign:
# 956 "data/maps/Route110/scripts.pory"
	.string "Route 110\n"
# 957 "data/maps/Route110/scripts.pory"
	.string "{LEFT_ARROW} ROUTE 103$"
# 958 "data/maps/Route110/scripts.pory"

# 959 "data/maps/Route110/scripts.pory"
Route110_Text_SeasideParkingSign:
# 960 "data/maps/Route110/scripts.pory"
	.string "SEASIDE PARKING$"
# 961 "data/maps/Route110/scripts.pory"

# 962 "data/maps/Route110/scripts.pory"
Route110_Text_MauvilleCitySign:
# 963 "data/maps/Route110/scripts.pory"
	.string "Route 110\n"
# 964 "data/maps/Route110/scripts.pory"
	.string "{UP_ARROW} MAUVILLE CITY$"
# 965 "data/maps/Route110/scripts.pory"

# 966 "data/maps/Route110/scripts.pory"
Route110_Text_TrainerTipsPrlzSleep:
# 967 "data/maps/Route110/scripts.pory"
	.string "Trainer Tips\p"
# 968 "data/maps/Route110/scripts.pory"
	.string "The foe can be made helpless by\n"
# 969 "data/maps/Route110/scripts.pory"
	.string "paralyzing it or causing it to sleep.\p"
# 970 "data/maps/Route110/scripts.pory"
	.string "It is an important technique for\n"
# 971 "data/maps/Route110/scripts.pory"
	.string "Pokémon battles.$"
# 972 "data/maps/Route110/scripts.pory"

# 973 "data/maps/Route110/scripts.pory"
Route110_Text_TrainerTipsRegisterItems:
# 974 "data/maps/Route110/scripts.pory"
	.string "Trainer Tips\p"
# 975 "data/maps/Route110/scripts.pory"
	.string "The items in the BAG can be reorganized\n"
# 976 "data/maps/Route110/scripts.pory"
	.string "by pressing SELECT.$"
# 977 "data/maps/Route110/scripts.pory"

# 978 "data/maps/Route110/scripts.pory"
Route110_Text_TrickHouseSign:
# 979 "data/maps/Route110/scripts.pory"
	.string "“Three steps {RIGHT_ARROW} and two steps {UP_ARROW}\n"
# 980 "data/maps/Route110/scripts.pory"
	.string "to reach the wondrous Trick House.”$"
# 981 "data/maps/Route110/scripts.pory"

# 982 "data/maps/Route110/scripts.pory"
Route110_Text_BestRecord:
# 983 "data/maps/Route110/scripts.pory"
	.string "THE BEST RECORD TO DATE…\p"
# 984 "data/maps/Route110/scripts.pory"
	.string "No. of collisions: {STR_VAR_1}\p"
# 985 "data/maps/Route110/scripts.pory"
	.string "Elapsed time: {STR_VAR_2}$"
# 986 "data/maps/Route110/scripts.pory"

# 987 "data/maps/Route110/scripts.pory"
Route110_Text_ThereIsNoRecord:
# 988 "data/maps/Route110/scripts.pory"
	.string "THE BEST RECORD TO DATE…\p"
# 989 "data/maps/Route110/scripts.pory"
	.string "No one seems to have taken the\n"
# 990 "data/maps/Route110/scripts.pory"
	.string "challenge. There is no record…$"
# 991 "data/maps/Route110/scripts.pory"

# 992 "data/maps/Route110/scripts.pory"
Route110_Text_ImagineSeeingYouHere:
# 993 "data/maps/Route110/scripts.pory"
	.string "PROF. BIRCH: Oh, {PLAYER}{KUN}!\n"
# 994 "data/maps/Route110/scripts.pory"
	.string "Imagine seeing you here!\p"
# 995 "data/maps/Route110/scripts.pory"
	.string "And where might my {RIVAL} be?$"
# 996 "data/maps/Route110/scripts.pory"

# 997 "data/maps/Route110/scripts.pory"
Route110_Text_HeardYouInstallMatchCall:
# 998 "data/maps/Route110/scripts.pory"
	.string "Oh, I see!\n"
# 999 "data/maps/Route110/scripts.pory"
	.string "You two are running separately.\l"
# 1000 "data/maps/Route110/scripts.pory"
	.string "Well, that's fine.\p"
# 1001 "data/maps/Route110/scripts.pory"
	.string "Oh, yes, I heard that your Pokénav\n"
# 1002 "data/maps/Route110/scripts.pory"
	.string "had the MATCH CALL system installed.\p"
# 1003 "data/maps/Route110/scripts.pory"
	.string "Well, then, I should register you in\n"
# 1004 "data/maps/Route110/scripts.pory"
	.string "my Pokénav as well.\p"
# 1005 "data/maps/Route110/scripts.pory"
	.string "That way, even when we're apart,\n"
# 1006 "data/maps/Route110/scripts.pory"
	.string "I can rate your Pokédex anytime.\p"
# 1007 "data/maps/Route110/scripts.pory"
	.string "… … … … … …$"
# 1008 "data/maps/Route110/scripts.pory"

# 1009 "data/maps/Route110/scripts.pory"
Route110_Text_RegisteredBirchInPokenav:
# 1010 "data/maps/Route110/scripts.pory"
	.string "Registered PROF. BIRCH\n"
# 1011 "data/maps/Route110/scripts.pory"
	.string "in the Pokénav.$"
# 1012 "data/maps/Route110/scripts.pory"

# 1013 "data/maps/Route110/scripts.pory"
Route110_Text_KeepAnEyeOutForRival:
# 1014 "data/maps/Route110/scripts.pory"
	.string "PROF. BIRCH: {PLAYER}{KUN}…\p"
# 1015 "data/maps/Route110/scripts.pory"
	.string "Please keep an eye out for my {RIVAL}.\n"
# 1016 "data/maps/Route110/scripts.pory"
	.string "… … … … … …\p"
# 1017 "data/maps/Route110/scripts.pory"
	.string "Well, I had better get going.\n"
# 1018 "data/maps/Route110/scripts.pory"
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
