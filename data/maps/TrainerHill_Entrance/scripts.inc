# 1 "data/maps/TrainerHill_Entrance/scripts.pory"

# 2 "data/maps/TrainerHill_Entrance/scripts.pory"
.set LOCALID_ATTENDANT, 1
# 3 "data/maps/TrainerHill_Entrance/scripts.pory"
.set LOCALID_NURSE, 2
# 4 "data/maps/TrainerHill_Entrance/scripts.pory"
.set LOCALID_GIRL, 4
# 5 "data/maps/TrainerHill_Entrance/scripts.pory"
.set LOCALID_MAN, 5
# 6 "data/maps/TrainerHill_Entrance/scripts.pory"

# 7 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_MapScripts::
# 8 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, TrainerHill_Entrance_OnResume
# 9 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_RETURN_TO_FIELD, TrainerHill_Entrance_OnReturn
# 10 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, TrainerHill_Entrance_OnTransition
# 11 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, TrainerHill_Entrance_OnLoad
# 12 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, TrainerHill_Entrance_OnFrame
# 13 "data/maps/TrainerHill_Entrance/scripts.pory"
	.byte 0
# 14 "data/maps/TrainerHill_Entrance/scripts.pory"

# 15 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnTransition:
# 16 "data/maps/TrainerHill_Entrance/scripts.pory"
	setflag FLAG_LANDMARK_TRAINER_HILL
# 17 "data/maps/TrainerHill_Entrance/scripts.pory"
	getplayerxy VAR_TEMP_D, VAR_RESULT
# 18 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 19 "data/maps/TrainerHill_Entrance/scripts.pory"

# 20 "data/maps/TrainerHill_Entrance/scripts.pory"
@ Unused
# 21 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnWarp:
# 22 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 23 "data/maps/TrainerHill_Entrance/scripts.pory"

# 24 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnResume:
# 25 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_resumetimer
# 26 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_0, 0
# 27 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_getusingereader
# 28 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, TrainerHill_Entrance_EventScript_TryFaceAttendant  @ VAR_RESULT always FALSE here
# 29 "data/maps/TrainerHill_Entrance/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 9, 6
# 30 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 31 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 32 "data/maps/TrainerHill_Entrance/scripts.pory"

# 33 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_TryFaceAttendant::
# 34 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_getwon
# 35 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, TrainerHill_Entrance_EventScript_PlayerDontFaceAttendant
# 36 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 37 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 38 "data/maps/TrainerHill_Entrance/scripts.pory"

# 39 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_PlayerDontFaceAttendant::
# 40 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 41 "data/maps/TrainerHill_Entrance/scripts.pory"

# 42 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnReturn:
# 43 "data/maps/TrainerHill_Entrance/scripts.pory"
	addobject LOCALID_NURSE
# 44 "data/maps/TrainerHill_Entrance/scripts.pory"
	addobject LOCALID_ATTENDANT
# 45 "data/maps/TrainerHill_Entrance/scripts.pory"
	addobject LOCALID_MAN
# 46 "data/maps/TrainerHill_Entrance/scripts.pory"
	addobject LOCALID_GIRL
# 47 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 48 "data/maps/TrainerHill_Entrance/scripts.pory"

# 49 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnLoad:
# 50 "data/maps/TrainerHill_Entrance/scripts.pory"
	call_if_eq VAR_TEMP_D, 17, TrainerHill_Entrance_EventScript_OpenCounterDoor
# 51 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 52 "data/maps/TrainerHill_Entrance/scripts.pory"

# 53 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_OpenCounterDoor::
# 54 "data/maps/TrainerHill_Entrance/scripts.pory"
	setmetatile 17, 10, METATILE_TrainerHill_GreenFloorTile, FALSE
# 55 "data/maps/TrainerHill_Entrance/scripts.pory"
	return
# 56 "data/maps/TrainerHill_Entrance/scripts.pory"

# 57 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnFrame:
# 58 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte 0
# 59 "data/maps/TrainerHill_Entrance/scripts.pory"

# 60 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExitElevator::
# 61 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 62 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerExitElevator
# 63 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 64 "data/maps/TrainerHill_Entrance/scripts.pory"
	setmetatile 17, 10, METATILE_TrainerHill_CounterDoor, TRUE
# 65 "data/maps/TrainerHill_Entrance/scripts.pory"
	special DrawWholeMapView
# 66 "data/maps/TrainerHill_Entrance/scripts.pory"
	playse SE_CLICK
# 67 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitse
# 68 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_D, 0
# 69 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 70 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 71 "data/maps/TrainerHill_Entrance/scripts.pory"

# 72 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExitChallenge::
# 73 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_0, 1
# 74 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_getstatus
# 75 "data/maps/TrainerHill_Entrance/scripts.pory"
	switch VAR_RESULT
# 76 "data/maps/TrainerHill_Entrance/scripts.pory"
	case TRAINER_HILL_PLAYER_STATUS_LOST, TrainerHill_Entrance_EventScript_ExitChallengeLost
# 77 "data/maps/TrainerHill_Entrance/scripts.pory"
	case TRAINER_HILL_PLAYER_STATUS_ECARD_SCANNED, TrainerHill_Entrance_EventScript_ExitChallengeECard
# 78 "data/maps/TrainerHill_Entrance/scripts.pory"
	case TRAINER_HILL_PLAYER_STATUS_NORMAL, TrainerHill_Entrance_EventScript_EndExitChallenge
# 79 "data/maps/TrainerHill_Entrance/scripts.pory"

# 80 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExitChallengeLost::
# 81 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 82 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 83 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_TooBadTremendousEffort, MSGBOX_DEFAULT
# 84 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_PlayerExitChallenge
# 85 "data/maps/TrainerHill_Entrance/scripts.pory"

# 86 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExitChallengeECard::
# 87 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 88 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 89 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_MovedReceptionHereForSwitch, MSGBOX_DEFAULT
# 90 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_PlayerExitChallenge::
# 91 "data/maps/TrainerHill_Entrance/scripts.pory"
	closemessage
# 92 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PushPlayerBackFromCounter
# 93 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 94 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 0
# 95 "data/maps/TrainerHill_Entrance/scripts.pory"
	special HealPlayerParty
# 96 "data/maps/TrainerHill_Entrance/scripts.pory"
	callnative UpdateFollowingPokemon
# 97 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 98 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_EndExitChallenge::
# 99 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 100 "data/maps/TrainerHill_Entrance/scripts.pory"

# 101 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Nurse::
# 102 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 103 "data/maps/TrainerHill_Entrance/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 104 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 105 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitbuttonpress
# 106 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 107 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 108 "data/maps/TrainerHill_Entrance/scripts.pory"

# 109 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Attendant::
# 110 "data/maps/TrainerHill_Entrance/scripts.pory"
	lock
# 111 "data/maps/TrainerHill_Entrance/scripts.pory"
	faceplayer
# 112 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_inchallenge
# 113 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, TrainerHill_Entrance_EventScript_ThanksForPlaying
# 114 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_HopeYouGiveItYourBest, MSGBOX_DEFAULT
# 115 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_AttendantEnd
# 116 "data/maps/TrainerHill_Entrance/scripts.pory"

# 117 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ThanksForPlaying::
# 118 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_ThankYouForPlaying, MSGBOX_DEFAULT
# 119 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_AttendantEnd::
# 120 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 121 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 122 "data/maps/TrainerHill_Entrance/scripts.pory"

# 123 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_EntryTrigger::
# 124 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 125 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 126 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_Closed
# 127 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_WelcomeToTrainerHill, MSGBOX_DEFAULT
# 128 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_getsaved
# 129 "data/maps/TrainerHill_Entrance/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, TrainerHill_Entrance_EventScript_SaveGame
# 130 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_allfloorsused
# 131 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, TrainerHill_Entrance_EventScript_AllFloorsUsed
# 132 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_TrainersUpToFloorX, MSGBOX_DEFAULT
# 133 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_AskChallengeTrainers
# 134 "data/maps/TrainerHill_Entrance/scripts.pory"

# 135 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_AllFloorsUsed::
# 136 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_TrainersInEveryRoom, MSGBOX_DEFAULT
# 137 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_AskChallengeTrainers::
# 138 "data/maps/TrainerHill_Entrance/scripts.pory"
	message TrainerHill_Entrance_Text_LikeToChallengeTrainers
# 139 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 140 "data/maps/TrainerHill_Entrance/scripts.pory"
	multichoice 15, 6, MULTI_YESNOINFO, FALSE
# 141 "data/maps/TrainerHill_Entrance/scripts.pory"
	switch VAR_RESULT
# 142 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 0, TrainerHill_Entrance_EventScript_ChooseChallenge
# 143 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 1, TrainerHill_Entrance_EventScript_CancelEntry
# 144 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 2, TrainerHill_Entrance_EventScript_Info
# 145 "data/maps/TrainerHill_Entrance/scripts.pory"
	case MULTI_B_PRESSED, TrainerHill_Entrance_EventScript_CancelEntry
# 146 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 147 "data/maps/TrainerHill_Entrance/scripts.pory"

# 148 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Info::
# 149 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_ExplainTrainerHill, MSGBOX_DEFAULT
# 150 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_AskChallengeTrainers
# 151 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 152 "data/maps/TrainerHill_Entrance/scripts.pory"

# 153 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ChooseChallenge::
# 154 "data/maps/TrainerHill_Entrance/scripts.pory"
	multichoice 13, 2, MULTI_TAG_MATCH_TYPE, FALSE
# 155 "data/maps/TrainerHill_Entrance/scripts.pory"
	switch VAR_RESULT
# 156 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 4, TrainerHill_Entrance_EventScript_CancelEntry
# 157 "data/maps/TrainerHill_Entrance/scripts.pory"
	case MULTI_B_PRESSED, TrainerHill_Entrance_EventScript_CancelEntry
# 158 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_setmode VAR_RESULT
# 159 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 1
# 160 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_5, 0
# 161 "data/maps/TrainerHill_Entrance/scripts.pory"
	special HealPlayerParty
# 162 "data/maps/TrainerHill_Entrance/scripts.pory"
	callnative UpdateFollowingPokemon
# 163 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_TimeProgessGetSetGo, MSGBOX_DEFAULT
# 164 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_start
# 165 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 166 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 167 "data/maps/TrainerHill_Entrance/scripts.pory"

# 168 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_CancelEntry::
# 169 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_5, 0
# 170 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_PleaseVisitUsAgain, MSGBOX_DEFAULT
# 171 "data/maps/TrainerHill_Entrance/scripts.pory"
	closemessage
# 172 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PushPlayerBackFromCounter
# 173 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 174 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 175 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 176 "data/maps/TrainerHill_Entrance/scripts.pory"

# 177 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_SaveGame::
# 178 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_SaveGameBeforeEnter, MSGBOX_DEFAULT
# 179 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_setsaved
# 180 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_5, 1
# 181 "data/maps/TrainerHill_Entrance/scripts.pory"
	call Common_EventScript_SaveGame
# 182 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, TrainerHill_Entrance_EventScript_SaveFailed
# 183 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_setsaved
# 184 "data/maps/TrainerHill_Entrance/scripts.pory"
	return
# 185 "data/maps/TrainerHill_Entrance/scripts.pory"

# 186 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_SaveFailed::
# 187 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_clearsaved
# 188 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_CancelEntry
# 189 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 190 "data/maps/TrainerHill_Entrance/scripts.pory"

# 191 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Closed::
# 192 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_StillGettingReady, MSGBOX_DEFAULT
# 193 "data/maps/TrainerHill_Entrance/scripts.pory"
	closemessage
# 194 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PushPlayerBackFromCounter
# 195 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 196 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 197 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 198 "data/maps/TrainerHill_Entrance/scripts.pory"

# 199 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_PlayerFaceAttendant:
# 200 "data/maps/TrainerHill_Entrance/scripts.pory"
	face_right
# 201 "data/maps/TrainerHill_Entrance/scripts.pory"
	step_end
# 202 "data/maps/TrainerHill_Entrance/scripts.pory"

# 203 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_PushPlayerBackFromCounter:
# 204 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_down
# 205 "data/maps/TrainerHill_Entrance/scripts.pory"
	step_end
# 206 "data/maps/TrainerHill_Entrance/scripts.pory"

# 207 "data/maps/TrainerHill_Entrance/scripts.pory"
@ Unused
# 208 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_FaceUp:
# 209 "data/maps/TrainerHill_Entrance/scripts.pory"
	face_up
# 210 "data/maps/TrainerHill_Entrance/scripts.pory"
	step_end
# 211 "data/maps/TrainerHill_Entrance/scripts.pory"

# 212 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_PlayerExitElevator:
# 213 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_down
# 214 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_down
# 215 "data/maps/TrainerHill_Entrance/scripts.pory"
	step_end
# 216 "data/maps/TrainerHill_Entrance/scripts.pory"

# 217 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Records::
# 218 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 219 "data/maps/TrainerHill_Entrance/scripts.pory"
	fadescreen FADE_TO_BLACK
# 220 "data/maps/TrainerHill_Entrance/scripts.pory"
	special ShowTrainerHillRecords
# 221 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitstate
# 222 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 223 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 224 "data/maps/TrainerHill_Entrance/scripts.pory"

# 225 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Man::
# 226 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_ManTrainerHillClosed
# 227 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_WhatSortOfTrainersAreAhead, MSGBOX_NPC
# 228 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 229 "data/maps/TrainerHill_Entrance/scripts.pory"

# 230 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ManTrainerHillClosed::
# 231 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_CantWaitToTestTheWaters, MSGBOX_NPC
# 232 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 233 "data/maps/TrainerHill_Entrance/scripts.pory"

# 234 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Girl::
# 235 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_GirlTrainerHillClosed
# 236 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_FriendsTryingToReachTimeBoardTop, MSGBOX_NPC
# 237 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 238 "data/maps/TrainerHill_Entrance/scripts.pory"

# 239 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_GirlTrainerHillClosed::
# 240 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_DoYouKnowWhenTheyOpen, MSGBOX_NPC
# 241 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 242 "data/maps/TrainerHill_Entrance/scripts.pory"

# 243 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Clerk::
# 244 "data/maps/TrainerHill_Entrance/scripts.pory"
	lock
# 245 "data/maps/TrainerHill_Entrance/scripts.pory"
	faceplayer
# 246 "data/maps/TrainerHill_Entrance/scripts.pory"
	message gText_HowMayIServeYou
# 247 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 248 "data/maps/TrainerHill_Entrance/scripts.pory"
	pokemartdecoration TrainerHill_Entrance_Pokemart_Basic
# 249 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 250 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 251 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 252 "data/maps/TrainerHill_Entrance/scripts.pory"

# 253 "data/maps/TrainerHill_Entrance/scripts.pory"
	.align 2
# 254 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Pokemart_Basic:
# 255 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte DECOR_PICHU_DOLL
# 256 "data/maps/TrainerHill_Entrance/scripts.pory"
    .2byte DECOR_PIKACHU_DOLL
# 257 "data/maps/TrainerHill_Entrance/scripts.pory"
    .2byte DECOR_MARILL_DOLL
# 258 "data/maps/TrainerHill_Entrance/scripts.pory"
    .2byte DECOR_TOGEPI_DOLL
# 259 "data/maps/TrainerHill_Entrance/scripts.pory"
    .2byte DECOR_CYNDAQUIL_DOLL
# 260 "data/maps/TrainerHill_Entrance/scripts.pory"
    .2byte DECOR_CHIKORITA_DOLL
# 261 "data/maps/TrainerHill_Entrance/scripts.pory"
    .2byte DECOR_TOTODILE_DOLL
# 262 "data/maps/TrainerHill_Entrance/scripts.pory"
    .2byte DECOR_JIGGLYPUFF_DOLL
# 263 "data/maps/TrainerHill_Entrance/scripts.pory"
    .2byte DECOR_MEOWTH_DOLL
# 264 "data/maps/TrainerHill_Entrance/scripts.pory"
    .2byte DECOR_CLEFAIRY_DOLL
# 265 "data/maps/TrainerHill_Entrance/scripts.pory"
    .2byte DECOR_DITTO_DOLL
# 266 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte DECOR_NONE
# 267 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 268 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 269 "data/maps/TrainerHill_Entrance/scripts.pory"

# 270 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExpandedPokemart::
# 271 "data/maps/TrainerHill_Entrance/scripts.pory"
	pokemart TrainerHill_Entrance_Pokemart_Expanded
# 272 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 273 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 274 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 275 "data/maps/TrainerHill_Entrance/scripts.pory"

# 276 "data/maps/TrainerHill_Entrance/scripts.pory"
	.align 2
# 277 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Pokemart_Expanded:
# 278 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 279 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_MAX_POTION
# 280 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 281 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 282 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_REVIVE
# 283 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_SPEED
# 284 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_SP_ATK
# 285 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_ATTACK
# 286 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 287 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 288 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 289 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_ACCURACY
# 290 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_NONE
# 291 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 292 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 293 "data/maps/TrainerHill_Entrance/scripts.pory"

# 294 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_StillGettingReady:
# 295 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "This is the Trainer Hill where\n"
# 296 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "you may enjoy tag battles with many\l"
# 297 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Trainers.\p"
# 298 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Unfortunately, we're still getting\n"
# 299 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "things ready. Please come back later!$"
# 300 "data/maps/TrainerHill_Entrance/scripts.pory"

# 301 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_WelcomeToTrainerHill:
# 302 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Welcome!\p"
# 303 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "This is the Trainer Hill where\n"
# 304 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "you may enjoy tag battles with many\l"
# 305 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Trainers!$"
# 306 "data/maps/TrainerHill_Entrance/scripts.pory"

# 307 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_SaveGameBeforeEnter:
# 308 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Is this your first visit here?\p"
# 309 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Before you enter, please save\n"
# 310 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "your game.$"
# 311 "data/maps/TrainerHill_Entrance/scripts.pory"

# 312 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_TrainersUpToFloorX:
# 313 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Let's see…\n"
# 314 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "The Trainers here now are…\p"
# 315 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Up to floor no. {STR_VAR_1}.$"
# 316 "data/maps/TrainerHill_Entrance/scripts.pory"

# 317 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_TrainersInEveryRoom:
# 318 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Let's see…\n"
# 319 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "The Trainers here now are…\p"
# 320 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "There appear to be Trainers gathered\n"
# 321 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "in every room.$"
# 322 "data/maps/TrainerHill_Entrance/scripts.pory"

# 323 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_LikeToChallengeTrainers:
# 324 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Would you like to challenge the\n"
# 325 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "waiting Trainers?$"
# 326 "data/maps/TrainerHill_Entrance/scripts.pory"

# 327 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_TimeProgessGetSetGo:
# 328 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I will time your progress.\n"
# 329 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Best of luck!\p"
# 330 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "On your marks…\p"
# 331 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Get set…\p"
# 332 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Go!$"
# 333 "data/maps/TrainerHill_Entrance/scripts.pory"

# 334 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_PleaseVisitUsAgain:
# 335 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Please do visit us again!$"
# 336 "data/maps/TrainerHill_Entrance/scripts.pory"

# 337 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_TooBadTremendousEffort:
# 338 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "That was too bad.\p"
# 339 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I think you put in a tremendous\n"
# 340 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "effort in your battling.\p"
# 341 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Please come back and try again!$"
# 342 "data/maps/TrainerHill_Entrance/scripts.pory"

# 343 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_HopeYouGiveItYourBest:
# 344 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I hope you give it your best.$"
# 345 "data/maps/TrainerHill_Entrance/scripts.pory"

# 346 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_MovedReceptionHereForSwitch:
# 347 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "When the Trainers switch places,\n"
# 348 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "the movement can be hectic.\p"
# 349 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "To avoid the stampede, we moved\n"
# 350 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "the reception counter here.\p"
# 351 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I'm sorry for the inconvenience.$"
# 352 "data/maps/TrainerHill_Entrance/scripts.pory"

# 353 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_ThankYouForPlaying:
# 354 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Thank you for playing!$"
# 355 "data/maps/TrainerHill_Entrance/scripts.pory"

# 356 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_ExplainTrainerHill:
# 357 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Here at the Trainer Hill, we conduct\n"
# 358 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "an event called the Time Attack.\p"
# 359 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "It is a race that measures how long\n"
# 360 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "you take to reach our owner on\l"
# 361 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "the rooftop from this counter.\p"
# 362 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "The fastest times are posted on\n"
# 363 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "the Time Board--try competing with\l"
# 364 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "your friends.\p"
# 365 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "In Trainer battles along the way,\n"
# 366 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "neither Exp. Points nor money will\l"
# 367 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "be awarded.$"
# 368 "data/maps/TrainerHill_Entrance/scripts.pory"

# 369 "data/maps/TrainerHill_Entrance/scripts.pory"
@ Unused
# 370 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_NeedAtLeastTwoPokemon:
# 371 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Oh, I'm sorry, but you appear to have\n"
# 372 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "only one Pokémon with you.\p"
# 373 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You will need at least two Pokémon\n"
# 374 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "to enter this event.$"
# 375 "data/maps/TrainerHill_Entrance/scripts.pory"

# 376 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_YouFinallyCameBravo:
# 377 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Hm! Hm!\p"
# 378 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You finally came!\n"
# 379 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Yes, you have arrived!\p"
# 380 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Wait! Don't say it!\n"
# 381 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I know why you came all the way\l"
# 382 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "here by yourself!\p"
# 383 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You wanted to see me, the owner\n"
# 384 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "of the Trainer Hill, because…\p"
# 385 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You want to form a tag team with me!\n"
# 386 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Wa-hoo!\p"
# 387 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "…Uh?\n"
# 388 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "That's not it?\p"
# 389 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Anyway, I watched you on your way up.\n"
# 390 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Marvelous battling! Bravo, indeed!$"
# 391 "data/maps/TrainerHill_Entrance/scripts.pory"

# 392 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_HaveTheMostMarvelousGift:
# 393 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "For a marvelous someone like you,\n"
# 394 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I have the most marvelous gift!$"
# 395 "data/maps/TrainerHill_Entrance/scripts.pory"

# 396 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_FullUpBeBackLaterForThis:
# 397 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Oh, no, full up with things!\n"
# 398 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You'll be back later for this!$"
# 399 "data/maps/TrainerHill_Entrance/scripts.pory"

# 400 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_GotHereMarvelouslyQuickly:
# 401 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Oh, hold on here! Did you possibly get\n"
# 402 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "here marvelously quickly?\p"
# 403 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "How splendid! You needn't have\n"
# 404 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "hurried so to see me!\p"
# 405 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "That is so delightful. I'll have the Time\n"
# 406 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Board at the reception updated!$"
# 407 "data/maps/TrainerHill_Entrance/scripts.pory"

# 408 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_YouWerentVeryQuick:
# 409 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "But, oh…\n"
# 410 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You weren't very quick getting here.$"
# 411 "data/maps/TrainerHill_Entrance/scripts.pory"

# 412 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_ArriveZippierNextTime:
# 413 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Perhaps it would please me more if you\n"
# 414 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "arrived zippier next time.\p"
# 415 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Then, I should be pleased to form\n"
# 416 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "a tag team with you!\p"
# 417 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Until we meet again, amigo!$"
# 418 "data/maps/TrainerHill_Entrance/scripts.pory"

# 419 "data/maps/TrainerHill_Entrance/scripts.pory"
@ Unused
# 420 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_BuiltTrainerHillToFindPartner:
# 421 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I had the Trainer Hill built for but\n"
# 422 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "one reason and one only!\p"
# 423 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "To find the most suitable partner\n"
# 424 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "with whom I may form a tag team!$"
# 425 "data/maps/TrainerHill_Entrance/scripts.pory"

# 426 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_ChallengeTime:
# 427 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "{STR_VAR_1} min. {STR_VAR_2}.{STR_VAR_3} sec.$"
# 428 "data/maps/TrainerHill_Entrance/scripts.pory"

# 429 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_WhatSortOfTrainersAreAhead:
# 430 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Who knows what sort of Trainers\n"
# 431 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "and Pokémon combos are ahead?\p"
# 432 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "All I know is that I'll knock aside\n"
# 433 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "anyone that stands in my way!$"
# 434 "data/maps/TrainerHill_Entrance/scripts.pory"

# 435 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_CantWaitToTestTheWaters:
# 436 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I heard tough Trainers come to this\n"
# 437 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Trainer Hill from all over.\p"
# 438 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I can't wait to test the waters!\p"
# 439 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I'll knock aside anyone that stands\n"
# 440 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "in my way!$"
# 441 "data/maps/TrainerHill_Entrance/scripts.pory"

# 442 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_FriendsTryingToReachTimeBoardTop:
# 443 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Do you see the Time Board over there?\p"
# 444 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "My friends and I are trying to see who\n"
# 445 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "can reach the top in the least time.$"
# 446 "data/maps/TrainerHill_Entrance/scripts.pory"

# 447 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_DoYouKnowWhenTheyOpen:
# 448 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Do you know when they're opening\n"
# 449 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "this place up?\p"
# 450 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I'm waiting here to be the first\n"
# 451 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "challenger ever!$"
# 452 "data/maps/TrainerHill_Entrance/scripts.pory"

# 453 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Elevator_Text_ReturnToReception:
# 454 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Would you like to return to\n"
# 455 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "the reception counter?$"
