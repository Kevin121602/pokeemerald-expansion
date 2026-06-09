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
	map_script_2 VAR_TEMP_0, 0, TrainerHill_Entrance_EventScript_ExitChallenge
# 59 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script_2 VAR_TEMP_D, 17, TrainerHill_Entrance_EventScript_ExitElevator
# 60 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script_2 VAR_TEMP_5, 1, TrainerHill_Entrance_EventScript_EntryTrigger
# 61 "data/maps/TrainerHill_Entrance/scripts.pory"
	map_script_2 VAR_TEMP_1, 1, TrainerHill_EventScript_WarpToEntranceCounter
# 62 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte 0
# 63 "data/maps/TrainerHill_Entrance/scripts.pory"

# 64 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExitElevator::
# 65 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 66 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerExitElevator
# 67 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 68 "data/maps/TrainerHill_Entrance/scripts.pory"
	setmetatile 17, 10, METATILE_TrainerHill_CounterDoor, TRUE
# 69 "data/maps/TrainerHill_Entrance/scripts.pory"
	special DrawWholeMapView
# 70 "data/maps/TrainerHill_Entrance/scripts.pory"
	playse SE_CLICK
# 71 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitse
# 72 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_D, 0
# 73 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 74 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 75 "data/maps/TrainerHill_Entrance/scripts.pory"

# 76 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExitChallenge::
# 77 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_0, 1
# 78 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_getstatus
# 79 "data/maps/TrainerHill_Entrance/scripts.pory"
	switch VAR_RESULT
# 80 "data/maps/TrainerHill_Entrance/scripts.pory"
	case TRAINER_HILL_PLAYER_STATUS_LOST, TrainerHill_Entrance_EventScript_ExitChallengeLost
# 81 "data/maps/TrainerHill_Entrance/scripts.pory"
	case TRAINER_HILL_PLAYER_STATUS_ECARD_SCANNED, TrainerHill_Entrance_EventScript_ExitChallengeECard
# 82 "data/maps/TrainerHill_Entrance/scripts.pory"
	case TRAINER_HILL_PLAYER_STATUS_NORMAL, TrainerHill_Entrance_EventScript_EndExitChallenge
# 83 "data/maps/TrainerHill_Entrance/scripts.pory"

# 84 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExitChallengeLost::
# 85 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 86 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 87 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_TooBadTremendousEffort, MSGBOX_DEFAULT
# 88 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_PlayerExitChallenge
# 89 "data/maps/TrainerHill_Entrance/scripts.pory"

# 90 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExitChallengeECard::
# 91 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 92 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 93 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_MovedReceptionHereForSwitch, MSGBOX_DEFAULT
# 94 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_PlayerExitChallenge::
# 95 "data/maps/TrainerHill_Entrance/scripts.pory"
	closemessage
# 96 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PushPlayerBackFromCounter
# 97 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 98 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 0
# 99 "data/maps/TrainerHill_Entrance/scripts.pory"
	special HealPlayerParty
# 100 "data/maps/TrainerHill_Entrance/scripts.pory"
	callnative UpdateFollowingPokemon
# 101 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 102 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_EndExitChallenge::
# 103 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 104 "data/maps/TrainerHill_Entrance/scripts.pory"

# 105 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Nurse::
# 106 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 107 "data/maps/TrainerHill_Entrance/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 108 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 109 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitbuttonpress
# 110 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 111 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 112 "data/maps/TrainerHill_Entrance/scripts.pory"

# 113 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Attendant::
# 114 "data/maps/TrainerHill_Entrance/scripts.pory"
	lock
# 115 "data/maps/TrainerHill_Entrance/scripts.pory"
	faceplayer
# 116 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_inchallenge
# 117 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, TrainerHill_Entrance_EventScript_ThanksForPlaying
# 118 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_HopeYouGiveItYourBest, MSGBOX_DEFAULT
# 119 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_AttendantEnd
# 120 "data/maps/TrainerHill_Entrance/scripts.pory"

# 121 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ThanksForPlaying::
# 122 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_ThankYouForPlaying, MSGBOX_DEFAULT
# 123 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_AttendantEnd::
# 124 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 125 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 126 "data/maps/TrainerHill_Entrance/scripts.pory"

# 127 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_EntryTrigger::
# 128 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 129 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PlayerFaceAttendant
# 130 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_Closed
# 131 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_WelcomeToTrainerHill, MSGBOX_DEFAULT
# 132 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_getsaved
# 133 "data/maps/TrainerHill_Entrance/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, TrainerHill_Entrance_EventScript_SaveGame
# 134 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_allfloorsused
# 135 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, TrainerHill_Entrance_EventScript_AllFloorsUsed
# 136 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_TrainersUpToFloorX, MSGBOX_DEFAULT
# 137 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_AskChallengeTrainers
# 138 "data/maps/TrainerHill_Entrance/scripts.pory"

# 139 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_AllFloorsUsed::
# 140 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_TrainersInEveryRoom, MSGBOX_DEFAULT
# 141 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_AskChallengeTrainers::
# 142 "data/maps/TrainerHill_Entrance/scripts.pory"
	message TrainerHill_Entrance_Text_LikeToChallengeTrainers
# 143 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 144 "data/maps/TrainerHill_Entrance/scripts.pory"
	multichoice 15, 6, MULTI_YESNOINFO, FALSE
# 145 "data/maps/TrainerHill_Entrance/scripts.pory"
	switch VAR_RESULT
# 146 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 0, TrainerHill_Entrance_EventScript_ChooseChallenge
# 147 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 1, TrainerHill_Entrance_EventScript_CancelEntry
# 148 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 2, TrainerHill_Entrance_EventScript_Info
# 149 "data/maps/TrainerHill_Entrance/scripts.pory"
	case MULTI_B_PRESSED, TrainerHill_Entrance_EventScript_CancelEntry
# 150 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 151 "data/maps/TrainerHill_Entrance/scripts.pory"

# 152 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Info::
# 153 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_ExplainTrainerHill, MSGBOX_DEFAULT
# 154 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_AskChallengeTrainers
# 155 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 156 "data/maps/TrainerHill_Entrance/scripts.pory"

# 157 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ChooseChallenge::
# 158 "data/maps/TrainerHill_Entrance/scripts.pory"
	multichoice 13, 2, MULTI_TAG_MATCH_TYPE, FALSE
# 159 "data/maps/TrainerHill_Entrance/scripts.pory"
	switch VAR_RESULT
# 160 "data/maps/TrainerHill_Entrance/scripts.pory"
	case 4, TrainerHill_Entrance_EventScript_CancelEntry
# 161 "data/maps/TrainerHill_Entrance/scripts.pory"
	case MULTI_B_PRESSED, TrainerHill_Entrance_EventScript_CancelEntry
# 162 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_setmode VAR_RESULT
# 163 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TRAINER_HILL_IS_ACTIVE, 1
# 164 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_5, 0
# 165 "data/maps/TrainerHill_Entrance/scripts.pory"
	special HealPlayerParty
# 166 "data/maps/TrainerHill_Entrance/scripts.pory"
	callnative UpdateFollowingPokemon
# 167 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_TimeProgessGetSetGo, MSGBOX_DEFAULT
# 168 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_start
# 169 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 170 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 171 "data/maps/TrainerHill_Entrance/scripts.pory"

# 172 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_CancelEntry::
# 173 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_5, 0
# 174 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_PleaseVisitUsAgain, MSGBOX_DEFAULT
# 175 "data/maps/TrainerHill_Entrance/scripts.pory"
	closemessage
# 176 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PushPlayerBackFromCounter
# 177 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 178 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 179 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 180 "data/maps/TrainerHill_Entrance/scripts.pory"

# 181 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_SaveGame::
# 182 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_SaveGameBeforeEnter, MSGBOX_DEFAULT
# 183 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_setsaved
# 184 "data/maps/TrainerHill_Entrance/scripts.pory"
	setvar VAR_TEMP_5, 1
# 185 "data/maps/TrainerHill_Entrance/scripts.pory"
	call Common_EventScript_SaveGame
# 186 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, TrainerHill_Entrance_EventScript_SaveFailed
# 187 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_setsaved
# 188 "data/maps/TrainerHill_Entrance/scripts.pory"
	return
# 189 "data/maps/TrainerHill_Entrance/scripts.pory"

# 190 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_SaveFailed::
# 191 "data/maps/TrainerHill_Entrance/scripts.pory"
	trainerhill_clearsaved
# 192 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_CancelEntry
# 193 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 194 "data/maps/TrainerHill_Entrance/scripts.pory"

# 195 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Closed::
# 196 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_StillGettingReady, MSGBOX_DEFAULT
# 197 "data/maps/TrainerHill_Entrance/scripts.pory"
	closemessage
# 198 "data/maps/TrainerHill_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, TrainerHill_Entrance_Movement_PushPlayerBackFromCounter
# 199 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmovement 0
# 200 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 201 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 202 "data/maps/TrainerHill_Entrance/scripts.pory"

# 203 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_PlayerFaceAttendant:
# 204 "data/maps/TrainerHill_Entrance/scripts.pory"
	face_right
# 205 "data/maps/TrainerHill_Entrance/scripts.pory"
	step_end
# 206 "data/maps/TrainerHill_Entrance/scripts.pory"

# 207 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_PushPlayerBackFromCounter:
# 208 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_down
# 209 "data/maps/TrainerHill_Entrance/scripts.pory"
	step_end
# 210 "data/maps/TrainerHill_Entrance/scripts.pory"

# 211 "data/maps/TrainerHill_Entrance/scripts.pory"
@ Unused
# 212 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_FaceUp:
# 213 "data/maps/TrainerHill_Entrance/scripts.pory"
	face_up
# 214 "data/maps/TrainerHill_Entrance/scripts.pory"
	step_end
# 215 "data/maps/TrainerHill_Entrance/scripts.pory"

# 216 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Movement_PlayerExitElevator:
# 217 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_down
# 218 "data/maps/TrainerHill_Entrance/scripts.pory"
	walk_down
# 219 "data/maps/TrainerHill_Entrance/scripts.pory"
	step_end
# 220 "data/maps/TrainerHill_Entrance/scripts.pory"

# 221 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Records::
# 222 "data/maps/TrainerHill_Entrance/scripts.pory"
	lockall
# 223 "data/maps/TrainerHill_Entrance/scripts.pory"
	fadescreen FADE_TO_BLACK
# 224 "data/maps/TrainerHill_Entrance/scripts.pory"
	special ShowTrainerHillRecords
# 225 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitstate
# 226 "data/maps/TrainerHill_Entrance/scripts.pory"
	releaseall
# 227 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 228 "data/maps/TrainerHill_Entrance/scripts.pory"

# 229 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Man::
# 230 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_ManTrainerHillClosed
# 231 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_WhatSortOfTrainersAreAhead, MSGBOX_NPC
# 232 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 233 "data/maps/TrainerHill_Entrance/scripts.pory"

# 234 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ManTrainerHillClosed::
# 235 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_CantWaitToTestTheWaters, MSGBOX_NPC
# 236 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 237 "data/maps/TrainerHill_Entrance/scripts.pory"

# 238 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Girl::
# 239 "data/maps/TrainerHill_Entrance/scripts.pory"
	goto TrainerHill_Entrance_EventScript_GirlTrainerHillClosed
# 240 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_FriendsTryingToReachTimeBoardTop, MSGBOX_NPC
# 241 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 242 "data/maps/TrainerHill_Entrance/scripts.pory"

# 243 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_GirlTrainerHillClosed::
# 244 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox TrainerHill_Entrance_Text_DoYouKnowWhenTheyOpen, MSGBOX_NPC
# 245 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 246 "data/maps/TrainerHill_Entrance/scripts.pory"

# 247 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_Clerk::
# 248 "data/maps/TrainerHill_Entrance/scripts.pory"
	lock
# 249 "data/maps/TrainerHill_Entrance/scripts.pory"
	faceplayer
# 250 "data/maps/TrainerHill_Entrance/scripts.pory"
	message gText_HowMayIServeYou
# 251 "data/maps/TrainerHill_Entrance/scripts.pory"
	waitmessage
# 252 "data/maps/TrainerHill_Entrance/scripts.pory"
	pokemart TrainerHill_Entrance_Pokemart_Basic
# 253 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 254 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 255 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 256 "data/maps/TrainerHill_Entrance/scripts.pory"

# 257 "data/maps/TrainerHill_Entrance/scripts.pory"
	.align 2
# 258 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Pokemart_Basic:
# 259 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte DECOR_PICHU_DOLL
# 260 "data/maps/TrainerHill_Entrance/scripts.pory"
    .2byte DECOR_PIKACHU_DOLL
# 261 "data/maps/TrainerHill_Entrance/scripts.pory"
    .2byte DECOR_MARILL_DOLL
# 262 "data/maps/TrainerHill_Entrance/scripts.pory"
    .2byte DECOR_TOGEPI_DOLL
# 263 "data/maps/TrainerHill_Entrance/scripts.pory"
    .2byte DECOR_CYNDAQUIL_DOLL
# 264 "data/maps/TrainerHill_Entrance/scripts.pory"
    .2byte DECOR_CHIKORITA_DOLL
# 265 "data/maps/TrainerHill_Entrance/scripts.pory"
    .2byte DECOR_TOTODILE_DOLL
# 266 "data/maps/TrainerHill_Entrance/scripts.pory"
    .2byte DECOR_JIGGLYPUFF_DOLL
# 267 "data/maps/TrainerHill_Entrance/scripts.pory"
    .2byte DECOR_MEOWTH_DOLL
# 268 "data/maps/TrainerHill_Entrance/scripts.pory"
    .2byte DECOR_CLEFAIRY_DOLL
# 269 "data/maps/TrainerHill_Entrance/scripts.pory"
    .2byte DECOR_DITTO_DOLL
# 270 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte DECOR_NONE
# 271 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 272 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 273 "data/maps/TrainerHill_Entrance/scripts.pory"

# 274 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_EventScript_ExpandedPokemart::
# 275 "data/maps/TrainerHill_Entrance/scripts.pory"
	pokemart TrainerHill_Entrance_Pokemart_Expanded
# 276 "data/maps/TrainerHill_Entrance/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 277 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 278 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 279 "data/maps/TrainerHill_Entrance/scripts.pory"

# 280 "data/maps/TrainerHill_Entrance/scripts.pory"
	.align 2
# 281 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Pokemart_Expanded:
# 282 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_HYPER_POTION
# 283 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_MAX_POTION
# 284 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_FULL_RESTORE
# 285 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 286 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_REVIVE
# 287 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_SPEED
# 288 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_SP_ATK
# 289 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_ATTACK
# 290 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_DEFENSE
# 291 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_DIRE_HIT
# 292 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_GUARD_SPEC
# 293 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_X_ACCURACY
# 294 "data/maps/TrainerHill_Entrance/scripts.pory"
	.2byte ITEM_NONE
# 295 "data/maps/TrainerHill_Entrance/scripts.pory"
	release
# 296 "data/maps/TrainerHill_Entrance/scripts.pory"
	end
# 297 "data/maps/TrainerHill_Entrance/scripts.pory"

# 298 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_StillGettingReady:
# 299 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "This is the Trainer Hill where\n"
# 300 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "you may enjoy tag battles with many\l"
# 301 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Trainers.\p"
# 302 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Unfortunately, we're still getting\n"
# 303 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "things ready. Please come back later!$"
# 304 "data/maps/TrainerHill_Entrance/scripts.pory"

# 305 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_WelcomeToTrainerHill:
# 306 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Welcome!\p"
# 307 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "This is the Trainer Hill where\n"
# 308 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "you may enjoy tag battles with many\l"
# 309 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Trainers!$"
# 310 "data/maps/TrainerHill_Entrance/scripts.pory"

# 311 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_SaveGameBeforeEnter:
# 312 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Is this your first visit here?\p"
# 313 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Before you enter, please save\n"
# 314 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "your game.$"
# 315 "data/maps/TrainerHill_Entrance/scripts.pory"

# 316 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_TrainersUpToFloorX:
# 317 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Let's see…\n"
# 318 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "The Trainers here now are…\p"
# 319 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Up to floor no. {STR_VAR_1}.$"
# 320 "data/maps/TrainerHill_Entrance/scripts.pory"

# 321 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_TrainersInEveryRoom:
# 322 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Let's see…\n"
# 323 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "The Trainers here now are…\p"
# 324 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "There appear to be Trainers gathered\n"
# 325 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "in every room.$"
# 326 "data/maps/TrainerHill_Entrance/scripts.pory"

# 327 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_LikeToChallengeTrainers:
# 328 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Would you like to challenge the\n"
# 329 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "waiting Trainers?$"
# 330 "data/maps/TrainerHill_Entrance/scripts.pory"

# 331 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_TimeProgessGetSetGo:
# 332 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I will time your progress.\n"
# 333 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Best of luck!\p"
# 334 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "On your marks…\p"
# 335 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Get set…\p"
# 336 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Go!$"
# 337 "data/maps/TrainerHill_Entrance/scripts.pory"

# 338 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_PleaseVisitUsAgain:
# 339 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Please do visit us again!$"
# 340 "data/maps/TrainerHill_Entrance/scripts.pory"

# 341 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_TooBadTremendousEffort:
# 342 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "That was too bad.\p"
# 343 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I think you put in a tremendous\n"
# 344 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "effort in your battling.\p"
# 345 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Please come back and try again!$"
# 346 "data/maps/TrainerHill_Entrance/scripts.pory"

# 347 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_HopeYouGiveItYourBest:
# 348 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I hope you give it your best.$"
# 349 "data/maps/TrainerHill_Entrance/scripts.pory"

# 350 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_MovedReceptionHereForSwitch:
# 351 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "When the Trainers switch places,\n"
# 352 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "the movement can be hectic.\p"
# 353 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "To avoid the stampede, we moved\n"
# 354 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "the reception counter here.\p"
# 355 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I'm sorry for the inconvenience.$"
# 356 "data/maps/TrainerHill_Entrance/scripts.pory"

# 357 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_ThankYouForPlaying:
# 358 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Thank you for playing!$"
# 359 "data/maps/TrainerHill_Entrance/scripts.pory"

# 360 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_ExplainTrainerHill:
# 361 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Here at the Trainer Hill, we conduct\n"
# 362 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "an event called the Time Attack.\p"
# 363 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "It is a race that measures how long\n"
# 364 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "you take to reach our owner on\l"
# 365 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "the rooftop from this counter.\p"
# 366 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "The fastest times are posted on\n"
# 367 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "the Time Board--try competing with\l"
# 368 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "your friends.\p"
# 369 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "In Trainer battles along the way,\n"
# 370 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "neither Exp. Points nor money will\l"
# 371 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "be awarded.$"
# 372 "data/maps/TrainerHill_Entrance/scripts.pory"

# 373 "data/maps/TrainerHill_Entrance/scripts.pory"
@ Unused
# 374 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_NeedAtLeastTwoPokemon:
# 375 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Oh, I'm sorry, but you appear to have\n"
# 376 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "only one Pokémon with you.\p"
# 377 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You will need at least two Pokémon\n"
# 378 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "to enter this event.$"
# 379 "data/maps/TrainerHill_Entrance/scripts.pory"

# 380 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_YouFinallyCameBravo:
# 381 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Hm! Hm!\p"
# 382 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You finally came!\n"
# 383 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Yes, you have arrived!\p"
# 384 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Wait! Don't say it!\n"
# 385 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I know why you came all the way\l"
# 386 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "here by yourself!\p"
# 387 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You wanted to see me, the owner\n"
# 388 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "of the Trainer Hill, because…\p"
# 389 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You want to form a tag team with me!\n"
# 390 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Wa-hoo!\p"
# 391 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "…Uh?\n"
# 392 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "That's not it?\p"
# 393 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Anyway, I watched you on your way up.\n"
# 394 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Marvelous battling! Bravo, indeed!$"
# 395 "data/maps/TrainerHill_Entrance/scripts.pory"

# 396 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_HaveTheMostMarvelousGift:
# 397 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "For a marvelous someone like you,\n"
# 398 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I have the most marvelous gift!$"
# 399 "data/maps/TrainerHill_Entrance/scripts.pory"

# 400 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_FullUpBeBackLaterForThis:
# 401 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Oh, no, full up with things!\n"
# 402 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You'll be back later for this!$"
# 403 "data/maps/TrainerHill_Entrance/scripts.pory"

# 404 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_GotHereMarvelouslyQuickly:
# 405 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Oh, hold on here! Did you possibly get\n"
# 406 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "here marvelously quickly?\p"
# 407 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "How splendid! You needn't have\n"
# 408 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "hurried so to see me!\p"
# 409 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "That is so delightful. I'll have the Time\n"
# 410 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Board at the reception updated!$"
# 411 "data/maps/TrainerHill_Entrance/scripts.pory"

# 412 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_YouWerentVeryQuick:
# 413 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "But, oh…\n"
# 414 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "You weren't very quick getting here.$"
# 415 "data/maps/TrainerHill_Entrance/scripts.pory"

# 416 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_ArriveZippierNextTime:
# 417 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Perhaps it would please me more if you\n"
# 418 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "arrived zippier next time.\p"
# 419 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Then, I should be pleased to form\n"
# 420 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "a tag team with you!\p"
# 421 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Until we meet again, amigo!$"
# 422 "data/maps/TrainerHill_Entrance/scripts.pory"

# 423 "data/maps/TrainerHill_Entrance/scripts.pory"
@ Unused
# 424 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Roof_Text_BuiltTrainerHillToFindPartner:
# 425 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I had the Trainer Hill built for but\n"
# 426 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "one reason and one only!\p"
# 427 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "To find the most suitable partner\n"
# 428 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "with whom I may form a tag team!$"
# 429 "data/maps/TrainerHill_Entrance/scripts.pory"

# 430 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_ChallengeTime:
# 431 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "{STR_VAR_1} min. {STR_VAR_2}.{STR_VAR_3} sec.$"
# 432 "data/maps/TrainerHill_Entrance/scripts.pory"

# 433 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_WhatSortOfTrainersAreAhead:
# 434 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Who knows what sort of Trainers\n"
# 435 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "and Pokémon combos are ahead?\p"
# 436 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "All I know is that I'll knock aside\n"
# 437 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "anyone that stands in my way!$"
# 438 "data/maps/TrainerHill_Entrance/scripts.pory"

# 439 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_CantWaitToTestTheWaters:
# 440 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I heard tough Trainers come to this\n"
# 441 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Trainer Hill from all over.\p"
# 442 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I can't wait to test the waters!\p"
# 443 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I'll knock aside anyone that stands\n"
# 444 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "in my way!$"
# 445 "data/maps/TrainerHill_Entrance/scripts.pory"

# 446 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_FriendsTryingToReachTimeBoardTop:
# 447 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Do you see the Time Board over there?\p"
# 448 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "My friends and I are trying to see who\n"
# 449 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "can reach the top in the least time.$"
# 450 "data/maps/TrainerHill_Entrance/scripts.pory"

# 451 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Entrance_Text_DoYouKnowWhenTheyOpen:
# 452 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Do you know when they're opening\n"
# 453 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "this place up?\p"
# 454 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "I'm waiting here to be the first\n"
# 455 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "challenger ever!$"
# 456 "data/maps/TrainerHill_Entrance/scripts.pory"

# 457 "data/maps/TrainerHill_Entrance/scripts.pory"
TrainerHill_Elevator_Text_ReturnToReception:
# 458 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "Would you like to return to\n"
# 459 "data/maps/TrainerHill_Entrance/scripts.pory"
	.string "the reception counter?$"
