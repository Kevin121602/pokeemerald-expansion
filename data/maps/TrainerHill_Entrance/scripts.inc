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
	.byte 0
# 9 "data/maps/TrainerHill_Entrance/scripts.pory"

# 10 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnTransition:
# 11 "data/maps/TrainerHill_Entrance/scripts.pory"
	setflag FLAG_LANDMARK_TRAINER_HILL
# 12 "data/maps/TrainerHill_Entrance/scripts.pory"
	getplayerxy VAR_TEMP_D, VAR_RESULT
# 13 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 14 "data/maps/TrainerHill_Entrance/scripts.pory"

# 15 "data/maps/TrainerHill_Entrance/scripts.pory"
@ Unused
# 16 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnWarp:
# 17 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 18 "data/maps/TrainerHill_Entrance/scripts.pory"

# 19 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnResume:
# 20 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_resumetimer
# 21 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_0, 0
# 22 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_getusingereader
# 23 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, TrainerHill_Entrance_EventScript_TryFaceAttendant  @ VAR_RESULT always FALSE here
# 24 "data/maps/TrainerHill_Entrance/scripts.pory"
	setobjectxy OBJ_EVENT_ID_PLAYER, 9, 6
# 25 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 26 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 27 "data/maps/TrainerHill_Entrance/scripts.pory"

# 28 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_TryFaceAttendant::
# 29 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_getwon
# 30 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, TrainerHill_Entrance_EventScript_PlayerDontFaceAttendant
# 31 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 32 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 33 "data/maps/TrainerHill_Entrance/scripts.pory"

# 34 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_PlayerDontFaceAttendant::
# 35 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 36 "data/maps/TrainerHill_Entrance/scripts.pory"

# 37 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnReturn:
# 38 "data/maps/TrainerHill_Entrance/scripts.pory"
	addobject LOCALID_NURSE
# 39 "data/maps/TrainerHill_Entrance/scripts.pory"
	addobject LOCALID_ATTENDANT
# 40 "data/maps/TrainerHill_Entrance/scripts.pory"
	addobject LOCALID_MAN
# 41 "data/maps/TrainerHill_Entrance/scripts.pory"
	addobject LOCALID_GIRL
# 42 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 43 "data/maps/TrainerHill_Entrance/scripts.pory"

# 44 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnLoad:
# 45 "data/maps/TrainerHill_Entrance/scripts.pory"
	call_if_eq VAR_TEMP_D, 17, TrainerHill_Entrance_EventScript_OpenCounterDoor
# 46 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 47 "data/maps/TrainerHill_Entrance/scripts.pory"

# 48 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_OpenCounterDoor::
# 49 "data/maps/TrainerHill_Entrance/scripts.pory"
	setmetatile 17, 10, METATILE_TrainerHill_GreenFloorTile, FALSE
# 50 "data/maps/TrainerHill_Entrance/scripts.pory"
	return
# 51 "data/maps/TrainerHill_Entrance/scripts.pory"

# 52 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_OnFrame:
# 53 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte 0
# 54 "data/maps/TrainerHill_Entrance/scripts.pory"

# 55 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExitElevator::
# 56 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 57 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerExitElevator
# 58 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 59 "data/maps/TrainerHill_Entrance/scripts.pory"
	setmetatile 17, 10, METATILE_TrainerHill_CounterDoor, TRUE
# 60 "data/maps/TrainerHill_Entrance/scripts.pory"
	special DrawWholeMapView
# 61 "data/maps/TrainerHill_Entrance/scripts.pory"
	playse SE_CLICK
# 62 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitse
# 63 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_D, 0
# 64 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 65 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 66 "data/maps/TrainerHill_Entrance/scripts.pory"

# 67 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExitChallenge::
# 68 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_0, 1
# 69 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_getstatus
# 70 "data/maps/TrainerHill_Entrance/scripts.pory"
	switch VAR_RESULT
# 71 "data/maps/TrainerHill_Entrance/scripts.pory"
	case TRAINER_HILL_PLAYER_STATUS_LOST, TrainerHill_Entrance_EventScript_ExitChallengeLost
# 72 "data/maps/TrainerHill_Entrance/scripts.pory"
	case TRAINER_HILL_PLAYER_STATUS_ECARD_SCANNED, TrainerHill_Entrance_EventScript_ExitChallengeECard
# 73 "data/maps/TrainerHill_Entrance/scripts.pory"
	case TRAINER_HILL_PLAYER_STATUS_NORMAL, TrainerHill_Entrance_EventScript_EndExitChallenge
# 74 "data/maps/TrainerHill_Entrance/scripts.pory"

# 75 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExitChallengeLost::
# 76 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 77 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 78 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_TooBadTremendousEffort, MSGBOX_DEFAULT
# 79 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_PlayerExitChallenge
# 80 "data/maps/TrainerHill_Entrance/scripts.pory"

# 81 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExitChallengeECard::
# 82 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 83 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 84 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_MovedReceptionHereForSwitch, MSGBOX_DEFAULT
# 85 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_PlayerExitChallenge::
# 86 "data/maps/TrainerHill_Entrance/scripts.pory"
	closemessage
# 87 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PushPlayerBackFromCounter
# 88 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 89 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 0
# 90 "data/maps/TrainerHill_Entrance/scripts.pory"
	special HealPlayerParty
# 91 "data/maps/TrainerHill_Entrance/scripts.pory"
	callnative UpdateFollowingPokemon
# 92 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 93 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_EndExitChallenge::
# 94 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 95 "data/maps/TrainerHill_Entrance/scripts.pory"

# 96 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Nurse::
# 97 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 98 "data/maps/TrainerHill_Entrance/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 99 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 100 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitbuttonpress
# 101 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 102 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 103 "data/maps/TrainerHill_Entrance/scripts.pory"

# 104 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Attendant::
# 105 "data/maps/TrainerHill_Entrance/scripts.pory"
	lock
# 106 "data/maps/TrainerHill_Entrance/scripts.pory"
	faceplayer
# 107 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_inchallenge
# 108 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, TrainerHill_Entrance_EventScript_ThanksForPlaying
# 109 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_HopeYouGiveItYourBest, MSGBOX_DEFAULT
# 110 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_AttendantEnd
# 111 "data/maps/TrainerHill_Entrance/scripts.pory"

# 112 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ThanksForPlaying::
# 113 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_ThankYouForPlaying, MSGBOX_DEFAULT
# 114 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_AttendantEnd::
# 115 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 116 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 117 "data/maps/TrainerHill_Entrance/scripts.pory"

# 118 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_EntryTrigger::
# 119 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 120 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 121 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_Closed
# 122 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_WelcomeToTrainerHill, MSGBOX_DEFAULT
# 123 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_getsaved
# 124 "data/maps/TrainerHill_Entrance/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, TrainerHill_Entrance_EventScript_SaveGame
# 125 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_allfloorsused
# 126 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, TrainerHill_Entrance_EventScript_AllFloorsUsed
# 127 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_TrainersUpToFloorX, MSGBOX_DEFAULT
# 128 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_AskChallengeTrainers
# 129 "data/maps/TrainerHill_Entrance/scripts.pory"

# 130 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_AllFloorsUsed::
# 131 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_TrainersInEveryRoom, MSGBOX_DEFAULT
# 132 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_AskChallengeTrainers::
# 133 "data/maps/TrainerHill_Entrance/scripts.pory"
	message TrainerHill_Entrance_Text_LikeToChallengeTrainers
# 134 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 135 "data/maps/TrainerHill_Entrance/scripts.pory"
	multichoice 15, 6, MULTI_YESNOINFO, FALSE
# 136 "data/maps/TrainerHill_Entrance/scripts.pory"
	switch VAR_RESULT
# 137 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 0, TrainerHill_Entrance_EventScript_ChooseChallenge
# 138 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 1, TrainerHill_Entrance_EventScript_CancelEntry
# 139 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 2, TrainerHill_Entrance_EventScript_Info
# 140 "data/maps/TrainerHill_Entrance/scripts.pory"
	case MULTI_B_PRESSED, TrainerHill_Entrance_EventScript_CancelEntry
# 141 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 142 "data/maps/TrainerHill_Entrance/scripts.pory"

# 143 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Info::
# 144 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_ExplainTrainerHill, MSGBOX_DEFAULT
# 145 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_AskChallengeTrainers
# 146 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 147 "data/maps/TrainerHill_Entrance/scripts.pory"

# 148 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ChooseChallenge::
# 149 "data/maps/TrainerHill_Entrance/scripts.pory"
	multichoice 13, 2, MULTI_TAG_MATCH_TYPE, FALSE
# 150 "data/maps/TrainerHill_Entrance/scripts.pory"
	switch VAR_RESULT
# 151 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 4, TrainerHill_Entrance_EventScript_CancelEntry
# 152 "data/maps/TrainerHill_Entrance/scripts.pory"
	case MULTI_B_PRESSED, TrainerHill_Entrance_EventScript_CancelEntry
# 153 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_setmode VAR_RESULT
# 154 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 1
# 155 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_5, 0
# 156 "data/maps/TrainerHill_Entrance/scripts.pory"
	special HealPlayerParty
# 157 "data/maps/TrainerHill_Entrance/scripts.pory"
	callnative UpdateFollowingPokemon
# 158 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_TimeProgessGetSetGo, MSGBOX_DEFAULT
# 159 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_start
# 160 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 161 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 162 "data/maps/TrainerHill_Entrance/scripts.pory"

# 163 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_CancelEntry::
# 164 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_5, 0
# 165 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_PleaseVisitUsAgain, MSGBOX_DEFAULT
# 166 "data/maps/TrainerHill_Entrance/scripts.pory"
	closemessage
# 167 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PushPlayerBackFromCounter
# 168 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 169 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 170 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 171 "data/maps/TrainerHill_Entrance/scripts.pory"

# 172 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_SaveGame::
# 173 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_SaveGameBeforeEnter, MSGBOX_DEFAULT
# 174 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_setsaved
# 175 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_5, 1
# 176 "data/maps/TrainerHill_Entrance/scripts.pory"
	call Common_EventScript_SaveGame
# 177 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, TrainerHill_Entrance_EventScript_SaveFailed
# 178 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_setsaved
# 179 "data/maps/TrainerHill_Entrance/scripts.pory"
	return
# 180 "data/maps/TrainerHill_Entrance/scripts.pory"

# 181 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_SaveFailed::
# 182 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_clearsaved
# 183 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_CancelEntry
# 184 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 185 "data/maps/TrainerHill_Entrance/scripts.pory"

# 186 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Closed::
# 187 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_StillGettingReady, MSGBOX_DEFAULT
# 188 "data/maps/TrainerHill_Entrance/scripts.pory"
	closemessage
# 189 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PushPlayerBackFromCounter
# 190 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 191 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 192 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 193 "data/maps/TrainerHill_Entrance/scripts.pory"

# 194 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_PlayerFaceAttendant:
# 195 "data/maps/TrainerHill_Entrance/scripts.pory"
	face_right
# 196 "data/maps/TrainerHill_Entrance/scripts.pory"
	step_end
# 197 "data/maps/TrainerHill_Entrance/scripts.pory"

# 198 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_PushPlayerBackFromCounter:
# 199 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_down
# 200 "data/maps/TrainerHill_Entrance/scripts.pory"
	step_end
# 201 "data/maps/TrainerHill_Entrance/scripts.pory"

# 202 "data/maps/TrainerHill_Entrance/scripts.pory"
@ Unused
# 203 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_FaceUp:
# 204 "data/maps/TrainerHill_Entrance/scripts.pory"
	face_up
# 205 "data/maps/TrainerHill_Entrance/scripts.pory"
	step_end
# 206 "data/maps/TrainerHill_Entrance/scripts.pory"

# 207 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_PlayerExitElevator:
# 208 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_down
# 209 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_down
# 210 "data/maps/TrainerHill_Entrance/scripts.pory"
	step_end
# 211 "data/maps/TrainerHill_Entrance/scripts.pory"

# 212 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Records::
# 213 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 214 "data/maps/TrainerHill_Entrance/scripts.pory"
	fadescreen FADE_TO_BLACK
# 215 "data/maps/TrainerHill_Entrance/scripts.pory"
	special ShowTrainerHillRecords
# 216 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitstate
# 217 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 218 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 219 "data/maps/TrainerHill_Entrance/scripts.pory"

# 220 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Man::
# 221 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_ManTrainerHillClosed
# 222 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_WhatSortOfTrainersAreAhead, MSGBOX_NPC
# 223 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 224 "data/maps/TrainerHill_Entrance/scripts.pory"

# 225 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ManTrainerHillClosed::
# 226 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_CantWaitToTestTheWaters, MSGBOX_NPC
# 227 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 228 "data/maps/TrainerHill_Entrance/scripts.pory"

# 229 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Girl::
# 230 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_GirlTrainerHillClosed
# 231 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_FriendsTryingToReachTimeBoardTop, MSGBOX_NPC
# 232 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 233 "data/maps/TrainerHill_Entrance/scripts.pory"

# 234 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_GirlTrainerHillClosed::
# 235 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_DoYouKnowWhenTheyOpen, MSGBOX_NPC
# 236 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 237 "data/maps/TrainerHill_Entrance/scripts.pory"

# 238 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Clerk::
# 239 "data/maps/TrainerHill_Entrance/scripts.pory"
	lock
# 240 "data/maps/TrainerHill_Entrance/scripts.pory"
	faceplayer
# 241 "data/maps/TrainerHill_Entrance/scripts.pory"
	message gText_HowMayIServeYou
# 242 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 243 "data/maps/TrainerHill_Entrance/scripts.pory"
	pokemartdecoration TrainerHill_Entrance_Pokemart_Basic
# 244 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 245 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 246 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 247 "data/maps/TrainerHill_Entrance/scripts.pory"

# 248 "data/maps/TrainerHill_Entrance/scripts.pory"
	.align 2
# 249 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Pokemart_Basic:
# 250 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte DECOR_PICHU_DOLL
# 251 "data/maps/TrainerHill_Entrance/scripts.pory"
    .2byte DECOR_PIKACHU_DOLL
# 252 "data/maps/TrainerHill_Entrance/scripts.pory"
    .2byte DECOR_MARILL_DOLL
# 253 "data/maps/TrainerHill_Entrance/scripts.pory"
    .2byte DECOR_TOGEPI_DOLL
# 254 "data/maps/TrainerHill_Entrance/scripts.pory"
    .2byte DECOR_CYNDAQUIL_DOLL
# 255 "data/maps/TrainerHill_Entrance/scripts.pory"
    .2byte DECOR_CHIKORITA_DOLL
# 256 "data/maps/TrainerHill_Entrance/scripts.pory"
    .2byte DECOR_TOTODILE_DOLL
# 257 "data/maps/TrainerHill_Entrance/scripts.pory"
    .2byte DECOR_JIGGLYPUFF_DOLL
# 258 "data/maps/TrainerHill_Entrance/scripts.pory"
    .2byte DECOR_MEOWTH_DOLL
# 259 "data/maps/TrainerHill_Entrance/scripts.pory"
    .2byte DECOR_CLEFAIRY_DOLL
# 260 "data/maps/TrainerHill_Entrance/scripts.pory"
    .2byte DECOR_DITTO_DOLL
# 261 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte DECOR_NONE
# 262 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 263 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 264 "data/maps/TrainerHill_Entrance/scripts.pory"

# 265 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExpandedPokemart::
# 266 "data/maps/TrainerHill_Entrance/scripts.pory"
	pokemart TrainerHill_Entrance_Pokemart_Expanded
# 267 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 268 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 269 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 270 "data/maps/TrainerHill_Entrance/scripts.pory"

# 271 "data/maps/TrainerHill_Entrance/scripts.pory"
	.align 2
# 272 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Pokemart_Expanded:
# 273 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 274 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_MAX_POTION
# 275 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 276 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 277 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_REVIVE
# 278 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_SPEED
# 279 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_SP_ATK
# 280 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_ATTACK
# 281 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 282 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 283 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 284 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_ACCURACY
# 285 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_NONE
# 286 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 287 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 288 "data/maps/TrainerHill_Entrance/scripts.pory"

# 289 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_StillGettingReady:
# 290 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "This is the Trainer Hill where\n"
# 291 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "you may enjoy tag battles with many\l"
# 292 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Trainers.\p"
# 293 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Unfortunately, we're still getting\n"
# 294 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "things ready. Please come back later!$"
# 295 "data/maps/TrainerHill_Entrance/scripts.pory"

# 296 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_WelcomeToTrainerHill:
# 297 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Welcome!\p"
# 298 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "This is the Trainer Hill where\n"
# 299 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "you may enjoy tag battles with many\l"
# 300 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Trainers!$"
# 301 "data/maps/TrainerHill_Entrance/scripts.pory"

# 302 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_SaveGameBeforeEnter:
# 303 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Is this your first visit here?\p"
# 304 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Before you enter, please save\n"
# 305 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "your game.$"
# 306 "data/maps/TrainerHill_Entrance/scripts.pory"

# 307 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_TrainersUpToFloorX:
# 308 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Let's see…\n"
# 309 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "The Trainers here now are…\p"
# 310 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Up to floor no. {STR_VAR_1}.$"
# 311 "data/maps/TrainerHill_Entrance/scripts.pory"

# 312 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_TrainersInEveryRoom:
# 313 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Let's see…\n"
# 314 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "The Trainers here now are…\p"
# 315 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "There appear to be Trainers gathered\n"
# 316 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "in every room.$"
# 317 "data/maps/TrainerHill_Entrance/scripts.pory"

# 318 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_LikeToChallengeTrainers:
# 319 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Would you like to challenge the\n"
# 320 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "waiting Trainers?$"
# 321 "data/maps/TrainerHill_Entrance/scripts.pory"

# 322 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_TimeProgessGetSetGo:
# 323 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I will time your progress.\n"
# 324 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Best of luck!\p"
# 325 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "On your marks…\p"
# 326 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Get set…\p"
# 327 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Go!$"
# 328 "data/maps/TrainerHill_Entrance/scripts.pory"

# 329 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_PleaseVisitUsAgain:
# 330 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Please do visit us again!$"
# 331 "data/maps/TrainerHill_Entrance/scripts.pory"

# 332 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_TooBadTremendousEffort:
# 333 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "That was too bad.\p"
# 334 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I think you put in a tremendous\n"
# 335 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "effort in your battling.\p"
# 336 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Please come back and try again!$"
# 337 "data/maps/TrainerHill_Entrance/scripts.pory"

# 338 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_HopeYouGiveItYourBest:
# 339 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I hope you give it your best.$"
# 340 "data/maps/TrainerHill_Entrance/scripts.pory"

# 341 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_MovedReceptionHereForSwitch:
# 342 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "When the Trainers switch places,\n"
# 343 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "the movement can be hectic.\p"
# 344 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "To avoid the stampede, we moved\n"
# 345 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "the reception counter here.\p"
# 346 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I'm sorry for the inconvenience.$"
# 347 "data/maps/TrainerHill_Entrance/scripts.pory"

# 348 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_ThankYouForPlaying:
# 349 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Thank you for playing!$"
# 350 "data/maps/TrainerHill_Entrance/scripts.pory"

# 351 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_ExplainTrainerHill:
# 352 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Here at the Trainer Hill, we conduct\n"
# 353 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "an event called the Time Attack.\p"
# 354 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "It is a race that measures how long\n"
# 355 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "you take to reach our owner on\l"
# 356 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "the rooftop from this counter.\p"
# 357 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "The fastest times are posted on\n"
# 358 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "the Time Board--try competing with\l"
# 359 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "your friends.\p"
# 360 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "In Trainer battles along the way,\n"
# 361 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "neither Exp. Points nor money will\l"
# 362 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "be awarded.$"
# 363 "data/maps/TrainerHill_Entrance/scripts.pory"

# 364 "data/maps/TrainerHill_Entrance/scripts.pory"
@ Unused
# 365 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_NeedAtLeastTwoPokemon:
# 366 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Oh, I'm sorry, but you appear to have\n"
# 367 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "only one Pokémon with you.\p"
# 368 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You will need at least two Pokémon\n"
# 369 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "to enter this event.$"
# 370 "data/maps/TrainerHill_Entrance/scripts.pory"

# 371 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_YouFinallyCameBravo:
# 372 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Hm! Hm!\p"
# 373 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You finally came!\n"
# 374 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Yes, you have arrived!\p"
# 375 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Wait! Don't say it!\n"
# 376 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I know why you came all the way\l"
# 377 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "here by yourself!\p"
# 378 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You wanted to see me, the owner\n"
# 379 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "of the Trainer Hill, because…\p"
# 380 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You want to form a tag team with me!\n"
# 381 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Wa-hoo!\p"
# 382 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "…Uh?\n"
# 383 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "That's not it?\p"
# 384 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Anyway, I watched you on your way up.\n"
# 385 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Marvelous battling! Bravo, indeed!$"
# 386 "data/maps/TrainerHill_Entrance/scripts.pory"

# 387 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_HaveTheMostMarvelousGift:
# 388 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "For a marvelous someone like you,\n"
# 389 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I have the most marvelous gift!$"
# 390 "data/maps/TrainerHill_Entrance/scripts.pory"

# 391 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_FullUpBeBackLaterForThis:
# 392 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Oh, no, full up with things!\n"
# 393 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You'll be back later for this!$"
# 394 "data/maps/TrainerHill_Entrance/scripts.pory"

# 395 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_GotHereMarvelouslyQuickly:
# 396 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Oh, hold on here! Did you possibly get\n"
# 397 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "here marvelously quickly?\p"
# 398 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "How splendid! You needn't have\n"
# 399 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "hurried so to see me!\p"
# 400 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "That is so delightful. I'll have the Time\n"
# 401 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Board at the reception updated!$"
# 402 "data/maps/TrainerHill_Entrance/scripts.pory"

# 403 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_YouWerentVeryQuick:
# 404 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "But, oh…\n"
# 405 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You weren't very quick getting here.$"
# 406 "data/maps/TrainerHill_Entrance/scripts.pory"

# 407 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_ArriveZippierNextTime:
# 408 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Perhaps it would please me more if you\n"
# 409 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "arrived zippier next time.\p"
# 410 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Then, I should be pleased to form\n"
# 411 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "a tag team with you!\p"
# 412 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Until we meet again, amigo!$"
# 413 "data/maps/TrainerHill_Entrance/scripts.pory"

# 414 "data/maps/TrainerHill_Entrance/scripts.pory"
@ Unused
# 415 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_BuiltTrainerHillToFindPartner:
# 416 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I had the Trainer Hill built for but\n"
# 417 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "one reason and one only!\p"
# 418 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "To find the most suitable partner\n"
# 419 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "with whom I may form a tag team!$"
# 420 "data/maps/TrainerHill_Entrance/scripts.pory"

# 421 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_ChallengeTime:
# 422 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "{STR_VAR_1} min. {STR_VAR_2}.{STR_VAR_3} sec.$"
# 423 "data/maps/TrainerHill_Entrance/scripts.pory"

# 424 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_WhatSortOfTrainersAreAhead:
# 425 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Who knows what sort of Trainers\n"
# 426 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "and Pokémon combos are ahead?\p"
# 427 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "All I know is that I'll knock aside\n"
# 428 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "anyone that stands in my way!$"
# 429 "data/maps/TrainerHill_Entrance/scripts.pory"

# 430 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_CantWaitToTestTheWaters:
# 431 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I heard tough Trainers come to this\n"
# 432 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Trainer Hill from all over.\p"
# 433 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I can't wait to test the waters!\p"
# 434 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I'll knock aside anyone that stands\n"
# 435 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "in my way!$"
# 436 "data/maps/TrainerHill_Entrance/scripts.pory"

# 437 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_FriendsTryingToReachTimeBoardTop:
# 438 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Do you see the Time Board over there?\p"
# 439 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "My friends and I are trying to see who\n"
# 440 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "can reach the top in the least time.$"
# 441 "data/maps/TrainerHill_Entrance/scripts.pory"

# 442 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_DoYouKnowWhenTheyOpen:
# 443 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Do you know when they're opening\n"
# 444 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "this place up?\p"
# 445 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I'm waiting here to be the first\n"
# 446 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "challenger ever!$"
# 447 "data/maps/TrainerHill_Entrance/scripts.pory"

# 448 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Elevator_Text_ReturnToReception:
# 449 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Would you like to return to\n"
# 450 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "the reception counter?$"
