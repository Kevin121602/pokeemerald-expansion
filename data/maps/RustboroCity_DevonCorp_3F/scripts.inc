# 1 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 2 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
.set LOCALID_DEVON_EMPLOYEE, 2
# 3 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 4 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_MapScripts::
# 5 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RustboroCity_DevonCorp_3F_OnTransition
# 6 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, RustboroCity_DevonCorp_3F_OnWarp
# 7 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RustboroCity_DevonCorp_3F_OnFrame
# 8 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.byte 0
# 9 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 10 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_OnTransition:
# 11 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	call_if_eq VAR_DEVON_CORP_3F_STATE, 0, RustboroCity_DevonCorp_3F_EventScript_SetEmployeePos
# 12 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 13 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 14 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_SetEmployeePos::
# 15 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setobjectxyperm LOCALID_DEVON_EMPLOYEE, 3, 2
# 16 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setobjectmovementtype LOCALID_DEVON_EMPLOYEE, MOVEMENT_TYPE_FACE_LEFT
# 17 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	return
# 18 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 19 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_OnWarp:
# 20 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script_2 VAR_DEVON_CORP_3F_STATE, 0, RustboroCity_DevonCorp_3F_EventScript_PlayerFaceEast
# 21 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.2byte 0
# 22 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 23 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_PlayerFaceEast::
# 24 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_EAST
# 25 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 26 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 27 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_OnFrame:
# 28 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	map_script_2 VAR_DEVON_CORP_3F_STATE, 0, RustboroCity_DevonCorp_3F_EventScript_MeetPresident
# 29 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.2byte 0
# 30 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 31 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_MeetPresident::
# 32 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	lockall
# 33 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_ThisIs3rdFloorWaitHere, MSGBOX_DEFAULT
# 34 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 35 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_DevonCorp_3F_Movement_EmployeeWalkOffscreen
# 36 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 37 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay 80
# 38 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_DevonCorp_3F_Movement_EmployeeReturnToPlayer
# 39 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 40 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_WordWithPresidentComeWithMe, MSGBOX_DEFAULT
# 41 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 42 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 43 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_DevonCorp_3F_Movement_LeadPlayerToPresident
# 44 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_DevonCorp_3F_Movement_PlayerFollowToPresident
# 45 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 46 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_PleaseGoAhead, MSGBOX_DEFAULT
# 47 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 48 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	fadedefaultbgm
# 49 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, RustboroCity_DevonCorp_3F_Movement_EmployeeFaceDesk
# 50 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RustboroCity_DevonCorp_3F_Movement_PlayerApproachDesk
# 51 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 52 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneIHaveFavor, MSGBOX_DEFAULT
# 53 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	giveitem ITEM_LETTER
# 54 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_POKEMON_SCHOOL_SCOTT
# 55 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_MrStoneExplainPokenavRestUp, MSGBOX_DEFAULT
# 56 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_BLOCK_TRICK_HOUSE
# 57 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setflag FLAG_HIDE_ROUTE_116_WANDAS_BOYFRIEND
# 58 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_WANDAS_BOYFRIEND
# 59 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_WANDA
# 60 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
# 61 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
# 62 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setvar VAR_BRINEY_LOCATION, 1
# 63 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
# 64 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setvar VAR_DEVON_CORP_3F_STATE, 1
# 65 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 6
# 66 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	releaseall
# 67 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 68 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 69 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_Unused:
# 70 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 71 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 72 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 73 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_in_place_faster_left
# 74 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 75 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 76 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_LeadPlayerToPresident:
# 77 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 78 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 79 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 80 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 81 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 82 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 83 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 84 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 85 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 86 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 87 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 88 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 89 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 90 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_in_place_faster_left
# 91 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 92 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 93 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_EmployeeFaceDesk:
# 94 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay_16
# 95 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_in_place_faster_down
# 96 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 97 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 98 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_EmployeeWalkOffscreen:
# 99 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 100 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 101 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 102 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 103 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 104 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 105 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 106 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 107 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 108 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 109 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_EmployeeReturnToPlayer:
# 110 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 111 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 112 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 113 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 114 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_up
# 115 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 116 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 117 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_left
# 118 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 119 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 120 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_PlayerFollowToPresident:
# 121 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 122 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 123 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 124 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 125 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 126 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 127 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 128 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 129 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 130 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 131 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 132 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 133 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_right
# 134 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 135 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 136 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Movement_PlayerApproachDesk:
# 137 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay_16
# 138 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	delay_16
# 139 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 140 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_down
# 141 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	walk_in_place_faster_right
# 142 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	step_end
# 143 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 144 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_MrStone::
# 145 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	lock
# 146 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	faceplayer
# 147 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_set FLAG_RECEIVED_EXP_SHARE, RustboroCity_DevonCorp_3F_EventScript_MrStoneAfterFavor
# 148 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_set FLAG_DELIVERED_STEVEN_LETTER, RustboroCity_DevonCorp_3F_EventScript_GiveExpShare
# 149 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_CountingOnYou, MSGBOX_DEFAULT
# 150 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 151 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 152 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 153 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
# 154 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 155 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 156 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_GiveExpShare::
# 157 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_ThankYouForDeliveringLetter, MSGBOX_DEFAULT
# 158 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
# 159 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 160 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 161 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_MrStoneAfterFavor::
# 162 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_NotFamiliarWithTrends, MSGBOX_DEFAULT
# 163 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	closemessage
# 164 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 165 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	waitmovement 0
# 166 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
# 167 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 168 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 169 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_Employee::
# 170 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	lock
# 171 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	faceplayer
# 172 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	goto_if_set FLAG_RECEIVED_REPEAT_BALL, RustboroCity_DevonCorp_3F_EventScript_EmployeeBalls
# 173 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_VisitCaptSternShipyard, MSGBOX_DEFAULT
# 174 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
# 175 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 176 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 177 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_EmployeeBalls::
# 178 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_RepeatAndTimerHugelyPopular, MSGBOX_DEFAULT
# 179 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	release
# 180 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 181 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 182 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_EventScript_RareRocksDisplay::
# 183 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	msgbox RustboroCity_DevonCorp_3F_Text_RareRocksDisplay, MSGBOX_SIGN
# 184 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	end
# 185 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 186 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_MrStoneIHaveFavor:
# 187 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I'm Mr. Stone, the President of\n"
# 188 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "the Devon Corporation.\p"
# 189 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I'd just got word about you!\p"
# 190 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "You saved our staff not just once,\n"
# 191 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "but twice!\p"
# 192 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I have a favor to ask of an amazing\n"
# 193 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "person like you.\p"
# 194 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I understand that you're delivering\n"
# 195 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "a package to Slateport's Shipyard.\p"
# 196 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Well, on the way, could you stop off in\n"
# 197 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Dewford Town?\p"
# 198 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I was hoping that you'd deliver a\n"
# 199 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Letter to Steven in Dewford.\p"
# 200 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "However, there are more Team Aqua thugs\n"
# 201 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "blocking the bridge to Dewford Town.\p"
# 202 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Maybe it would be better to head north\n"
# 203 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "after getting the Stone Badge and seek\l"
# 204 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "out their leader.$"
# 205 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 206 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_MrStoneWantYouToHaveThis:
# 207 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Mr. Stone: Now, you should know that\n"
# 208 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I am a great President.\p"
# 209 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "So, I'd never be so cheap as to ask\n"
# 210 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "a favor for nothing in return.\p"
# 211 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "That's why one of our scientists has\n"
# 212 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "a gift for you on the second floor!\p"
# 213 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 214 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_ReceivedPokenav:
# 215 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "{PLAYER} received a Pokénav.$"
# 216 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 217 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_MrStoneExplainPokenavRestUp:
# 218 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Mr. Stone: Now, you should know that\n"
# 219 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I am a great President.\p"
# 220 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "So, I'd never be so cheap as to ask\n"
# 221 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "a favor for nothing in return.\p"
# 222 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "That's why one of our scientists has\n"
# 223 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "a gift for you on the second floor!\p"
# 224 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "By the way, I've heard that the Trick\n"
# 225 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "House on Route 110 is open now.\p"
# 226 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Well, then, {PLAYER}{KUN}, go with caution\n"
# 227 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "and care!$"
# 228 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 229 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_MrStoneGoWithCautionAndCare:
# 230 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Mr. Stone: Well, then, {PLAYER}{KUN},\n"
# 231 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "go with caution and care!$"
# 232 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 233 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 234 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_CountingOnYou:
# 235 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Mr. Stone: I'm counting on you!$"
# 236 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 237 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_ThankYouForDeliveringLetter:
# 238 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Mr. Stone: You delivered my Letter?\n"
# 239 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Thank you kindly!\p"
# 240 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "This is my way of thanking you.\n"
# 241 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It should help you, a Trainer.$"
# 242 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 243 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_ExplainExpShare:
# 244 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Mr. Stone: A Pokémon holding that\n"
# 245 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Exp. Share will be given some of the\l"
# 246 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Exp Points from battle.\p"
# 247 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It will get Exp Points even if it didn't\n"
# 248 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "actually battle.\p"
# 249 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "I would say Exp. Share is quite useful\n"
# 250 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "for raising weak Pokémon.$"
# 251 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 252 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_NotFamiliarWithTrends:
# 253 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Mr. Stone: Since my youth, I've immersed\n"
# 254 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "myself in work.\p"
# 255 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Consequently, I'm not familiar with\n"
# 256 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "trends and that sort of thing.\p"
# 257 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "But do young people all want to be\n"
# 258 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Trainers in the Pokémon League?$"
# 259 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 260 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_ThisIs3rdFloorWaitHere:
# 261 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "This is the Devon Corporation's\n"
# 262 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "third floor.\p"
# 263 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Our President's Office is on\n"
# 264 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "this floor.\p"
# 265 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Anyway, I can't tell you how much I'm\n"
# 266 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "grateful for what you've done.\p"
# 267 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Um… By the way, that parcel\n"
# 268 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "you got back for us…\p"
# 269 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Could I get you to deliver that to\n"
# 270 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "the Shipyard in Slateport?\p"
# 271 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It would be awful if those robbers\n"
# 272 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "tried to take it again.\p"
# 273 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Uh… Hehehe, so, uh, could I count\n"
# 274 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "on you to do that for me?\p"
# 275 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Oh, that's right.\n"
# 276 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Could you wait here a second?$"
# 277 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 278 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_WordWithPresidentComeWithMe:
# 279 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Our President would like to have\n"
# 280 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "a word with you.\p"
# 281 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Please come with me.$"
# 282 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 283 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_PleaseGoAhead:
# 284 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Please, go ahead.$"
# 285 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 286 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_VisitCaptSternShipyard:
# 287 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "If you visit the Shipyard in Slateport,\n"
# 288 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "you should go see Capt. Stern.$"
# 289 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 290 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_RepeatAndTimerHugelyPopular:
# 291 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "Devon's new products, the Repeat Ball\n"
# 292 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "and Timer Ball, have become hugely\l"
# 293 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "popular among Trainers.$"
# 294 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"

# 295 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
RustboroCity_DevonCorp_3F_Text_RareRocksDisplay:
# 296 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "It's a collection of rare rocks and\n"
# 297 "data/maps/RustboroCity_DevonCorp_3F/scripts.pory"
	.string "stones assembled by the President.$"
