# 1 "data/maps/MtPyre_Summit/scripts.pory"

# 2 "data/maps/MtPyre_Summit/scripts.pory"
.set LOCALID_ARCHIE, 1
# 3 "data/maps/MtPyre_Summit/scripts.pory"
.set LOCALID_PHOEBE, 2
# 4 "data/maps/MtPyre_Summit/scripts.pory"
.set LOCALID_GRUNT_1, 5
# 5 "data/maps/MtPyre_Summit/scripts.pory"
.set LOCALID_GRUNT_2, 4
# 6 "data/maps/MtPyre_Summit/scripts.pory"
.set LOCALID_GRUNT_3, 5
# 7 "data/maps/MtPyre_Summit/scripts.pory"
.set LOCALID_GRUNT_4, 6
# 8 "data/maps/MtPyre_Summit/scripts.pory"
.set LOCALID_MAXIE, 8
# 9 "data/maps/MtPyre_Summit/scripts.pory"

# 10 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_MapScripts::
# 11 "data/maps/MtPyre_Summit/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MtPyre_Summit_OnTransition
# 12 "data/maps/MtPyre_Summit/scripts.pory"
	.byte 0
# 13 "data/maps/MtPyre_Summit/scripts.pory"

# 14 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_OnTransition:
# 15 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_MT_PYRE_STATE, 0, MtPyre_Summit_EventScript_SetTeamAquaPositions
# 16 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 17 "data/maps/MtPyre_Summit/scripts.pory"

# 18 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_SetTeamAquaPositions::
# 19 "data/maps/MtPyre_Summit/scripts.pory"
	clearflag FLAG_HIDE_MT_PYRE_SUMMIT_ARCHIE
# 20 "data/maps/MtPyre_Summit/scripts.pory"
	clearflag FLAG_HIDE_MT_PYRE_SUMMIT_TEAM_AQUA
# 21 "data/maps/MtPyre_Summit/scripts.pory"
	addobject LOCALID_ARCHIE
# 22 "data/maps/MtPyre_Summit/scripts.pory"
	addobject LOCALID_GRUNT_1
# 23 "data/maps/MtPyre_Summit/scripts.pory"
	addobject LOCALID_GRUNT_2
# 24 "data/maps/MtPyre_Summit/scripts.pory"
	addobject LOCALID_GRUNT_3
# 25 "data/maps/MtPyre_Summit/scripts.pory"
	addobject LOCALID_GRUNT_4
# 26 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 27 "data/maps/MtPyre_Summit/scripts.pory"

# 28 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaTrigger0::
# 29 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 30 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 0
# 31 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_TeamAquaExits
# 32 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 33 "data/maps/MtPyre_Summit/scripts.pory"

# 34 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaTrigger1::
# 35 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 36 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 1
# 37 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_TeamAquaExits
# 38 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 39 "data/maps/MtPyre_Summit/scripts.pory"

# 40 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaTrigger2::
# 41 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 42 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 2
# 43 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_TeamAquaExits
# 44 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 45 "data/maps/MtPyre_Summit/scripts.pory"

# 46 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaExits::
# 47 "data/maps/MtPyre_Summit/scripts.pory"
	playbgm MUS_DP_ENCOUNTER_GALACTIC, FALSE
# 48 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 49 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 50 "data/maps/MtPyre_Summit/scripts.pory"
	delay 50
# 51 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_ArchieDrat, MSGBOX_DEFAULT
# 52 "data/maps/MtPyre_Summit/scripts.pory"
	closemessage
# 53 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_ArchieFacePlayer0
# 54 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_ArchieFacePlayer1
# 55 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_ArchieFacePlayer2
# 56 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_ArchieMaxieGotAhead, MSGBOX_DEFAULT
# 57 "data/maps/MtPyre_Summit/scripts.pory"
	closemessage
# 58 "data/maps/MtPyre_Summit/scripts.pory"
	fadescreen FADE_TO_BLACK
# 59 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_ARCHIE
# 60 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_GRUNT_1
# 61 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_GRUNT_2
# 62 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_GRUNT_3
# 63 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_GRUNT_4
# 64 "data/maps/MtPyre_Summit/scripts.pory"
	fadedefaultbgm
# 65 "data/maps/MtPyre_Summit/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 66 "data/maps/MtPyre_Summit/scripts.pory"
	delay 50
# 67 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_PlayerApproachPhoebe0
# 68 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_PlayerApproachPhoebe1
# 69 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_PlayerApproachPhoebe2
# 70 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_YoureNotAfter, MSGBOX_DEFAULT
# 71 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_no_intro TRAINER_PHOEBE, MtPyre_Summit_Text_Defeat
# 72 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_DEFEATED_PHOEBE
# 73 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_HIDE_ROUTE_105_GRUNTS
# 74 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_HIDE_MT_PYRE_SUMMIT_ARCHIE
# 75 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_HIDE_MT_PYRE_SUMMIT_TEAM_AQUA
# 76 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_MT_PYRE_STATE, 1
# 77 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_WowYoureCapable, MSGBOX_DEFAULT
# 78 "data/maps/MtPyre_Summit/scripts.pory"
	giveitem ITEM_HEART_SCALE
# 79 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_PerhapsICould, MSGBOX_YESNO
# 80 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_eq VAR_RESULT, YES, MtPyre_Summit_EventScript_SealingTutor
# 81 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_GoodLuckAnd, MSGBOX_DEFAULT
# 82 "data/maps/MtPyre_Summit/scripts.pory"
	releaseall
# 83 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 84 "data/maps/MtPyre_Summit/scripts.pory"

# 85 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieFacePlayer0::
# 86 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieFacePlayer0
# 87 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 88 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 89 "data/maps/MtPyre_Summit/scripts.pory"

# 90 "data/maps/MtPyre_Summit/scripts.pory"
@ Archie is already facing player
# 91 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieFacePlayer1::
# 92 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieFacePlayer1
# 93 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 94 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 95 "data/maps/MtPyre_Summit/scripts.pory"

# 96 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieFacePlayer2::
# 97 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieFacePlayer2
# 98 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 99 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 100 "data/maps/MtPyre_Summit/scripts.pory"

# 101 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_PlayerApproachPhoebe0::
# 102 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerApproachPhoebe0
# 103 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 104 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 105 "data/maps/MtPyre_Summit/scripts.pory"

# 106 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_PlayerApproachPhoebe1::
# 107 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerApproachPhoebe1
# 108 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 109 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 110 "data/maps/MtPyre_Summit/scripts.pory"

# 111 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_PlayerApproachPhoebe2::
# 112 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerApproachPhoebe2
# 113 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 114 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 115 "data/maps/MtPyre_Summit/scripts.pory"

# 116 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyApproachPlayer0::
# 117 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PHOEBE, MtPyre_Summit_Movement_OldLadyApproachPlayer0
# 118 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 119 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 120 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 121 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 122 "data/maps/MtPyre_Summit/scripts.pory"

# 123 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyApproachPlayer1::
# 124 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PHOEBE, MtPyre_Summit_Movement_OldLadyApproachPlayer1
# 125 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 126 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 127 "data/maps/MtPyre_Summit/scripts.pory"

# 128 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyApproachPlayer2::
# 129 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PHOEBE, MtPyre_Summit_Movement_OldLadyApproachPlayer2
# 130 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 131 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 132 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 133 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 134 "data/maps/MtPyre_Summit/scripts.pory"

# 135 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerApproachPhoebe0:
# 136 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 137 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 138 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_up
# 139 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 140 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 141 "data/maps/MtPyre_Summit/scripts.pory"

# 142 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerApproachPhoebe1:
# 143 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 144 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 145 "data/maps/MtPyre_Summit/scripts.pory"

# 146 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerApproachPhoebe2:
# 147 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 148 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 149 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_up
# 150 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 151 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 152 "data/maps/MtPyre_Summit/scripts.pory"

# 153 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_OldLadyApproachPlayer0:
# 154 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 155 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 156 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 157 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 158 "data/maps/MtPyre_Summit/scripts.pory"

# 159 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_OldLadyApproachPlayer1:
# 160 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 161 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 162 "data/maps/MtPyre_Summit/scripts.pory"

# 163 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_OldLadyApproachPlayer2:
# 164 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 165 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 166 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 167 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 168 "data/maps/MtPyre_Summit/scripts.pory"

# 169 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieFacePlayer0:
# 170 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 171 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 172 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 173 "data/maps/MtPyre_Summit/scripts.pory"

# 174 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieFacePlayer1:
# 175 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 176 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 177 "data/maps/MtPyre_Summit/scripts.pory"

# 178 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieFacePlayer2:
# 179 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 180 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 181 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 182 "data/maps/MtPyre_Summit/scripts.pory"

# 183 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldMan::
# 184 "data/maps/MtPyre_Summit/scripts.pory"
	lock
# 185 "data/maps/MtPyre_Summit/scripts.pory"
	faceplayer
# 186 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, MtPyre_Summit_EventScript_OldManAfterRayquaza
# 187 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_WillYouHearOutMyTale, MSGBOX_YESNO
# 188 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, YES, MtPyre_Summit_EventScript_OldManTale
# 189 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, NO, MtPyre_Summit_EventScript_DeclineOldManTale
# 190 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 191 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 192 "data/maps/MtPyre_Summit/scripts.pory"

# 193 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldManAfterRayquaza::
# 194 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_HearTheNewLegendOfHoenn, MSGBOX_YESNO
# 195 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, YES, MtPyre_Summit_EventScript_OldManNewTale
# 196 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, NO, MtPyre_Summit_EventScript_DeclineOldManTale
# 197 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 198 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 199 "data/maps/MtPyre_Summit/scripts.pory"

# 200 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldManTale::
# 201 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_GroudonKyogreTale, MSGBOX_DEFAULT
# 202 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 203 "data/maps/MtPyre_Summit/scripts.pory"

# 204 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_DeclineOldManTale::
# 205 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_WellThatTooIsFine, MSGBOX_DEFAULT
# 206 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 207 "data/maps/MtPyre_Summit/scripts.pory"

# 208 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldManNewTale::
# 209 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_HoennTrioTale, MSGBOX_DEFAULT
# 210 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 211 "data/maps/MtPyre_Summit/scripts.pory"

# 212 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLady::
# 213 "data/maps/MtPyre_Summit/scripts.pory"
	lock
# 214 "data/maps/MtPyre_Summit/scripts.pory"
	faceplayer
# 215 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_set FLAG_RETURNED_RED_OR_BLUE_ORB, MtPyre_Summit_EventScript_OldLadyAfterOrbsReturned
# 216 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_ge VAR_MT_PYRE_STATE, 3, MtPyre_Summit_EventScript_OldLadyOrbsReturned
# 217 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_set FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, MtPyre_Summit_EventScript_OldLadyLegendariesAwake
# 218 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_OrbsHaveBeenTaken, MSGBOX_DEFAULT
# 219 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 220 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 221 "data/maps/MtPyre_Summit/scripts.pory"

# 222 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyOrbsReturned::
# 223 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_ThoseTwoMenReturnedOrbs, MSGBOX_DEFAULT
# 224 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_RETURNED_RED_OR_BLUE_ORB
# 225 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 226 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 227 "data/maps/MtPyre_Summit/scripts.pory"

# 228 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyLegendariesAwake::
# 229 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_GroudonKyogreAwakened, MSGBOX_DEFAULT
# 230 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 231 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 232 "data/maps/MtPyre_Summit/scripts.pory"

# 233 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyAfterOrbsReturned::
# 234 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_SuperAncientPokemonTaughtUs, MSGBOX_DEFAULT
# 235 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 236 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 237 "data/maps/MtPyre_Summit/scripts.pory"

# 238 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieTrigger0::
# 239 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 240 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 0
# 241 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
# 242 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 243 "data/maps/MtPyre_Summit/scripts.pory"

# 244 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieTrigger1::
# 245 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 246 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 1
# 247 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
# 248 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 249 "data/maps/MtPyre_Summit/scripts.pory"

# 250 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieTrigger2::
# 251 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 252 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 2
# 253 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
# 254 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 255 "data/maps/MtPyre_Summit/scripts.pory"

# 256 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs::
# 257 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 258 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 259 "data/maps/MtPyre_Summit/scripts.pory"
	delay 60
# 260 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_ArchieMaxieBeginExit0
# 261 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_ArchieMaxieBeginExit1
# 262 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_ArchieMaxieBeginExit2
# 263 "data/maps/MtPyre_Summit/scripts.pory"
	playse SE_PIN
# 264 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_ExclamationMark
# 265 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 266 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_Delay48
# 267 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 268 "data/maps/MtPyre_Summit/scripts.pory"
	delay 30
# 269 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_MaxieApproachPlayer0
# 270 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_MaxieApproachPlayer1
# 271 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_MaxieApproachPlayer2
# 272 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_MaxieSilence, MSGBOX_DEFAULT
# 273 "data/maps/MtPyre_Summit/scripts.pory"
	closemessage
# 274 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_MaxieApproachArchie0
# 275 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_MaxieApproachArchie1
# 276 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_MaxieApproachArchie2
# 277 "data/maps/MtPyre_Summit/scripts.pory"
	delay 30
# 278 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 279 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 280 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 281 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_ARCHIE
# 282 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MAXIE
# 283 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_MT_PYRE_STATE, 3
# 284 "data/maps/MtPyre_Summit/scripts.pory"
	releaseall
# 285 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 286 "data/maps/MtPyre_Summit/scripts.pory"

# 287 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieBeginExit0::
# 288 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit0
# 289 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 290 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 291 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 292 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 293 "data/maps/MtPyre_Summit/scripts.pory"

# 294 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieBeginExit1::
# 295 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit1
# 296 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 297 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 298 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 299 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 300 "data/maps/MtPyre_Summit/scripts.pory"

# 301 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieBeginExit2::
# 302 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit2
# 303 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 304 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 305 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 306 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 307 "data/maps/MtPyre_Summit/scripts.pory"

# 308 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachPlayer0::
# 309 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie0
# 310 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
# 311 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer0
# 312 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 313 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 314 "data/maps/MtPyre_Summit/scripts.pory"

# 315 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachPlayer1::
# 316 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie
# 317 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
# 318 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer1
# 319 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 320 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 321 "data/maps/MtPyre_Summit/scripts.pory"

# 322 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachPlayer2::
# 323 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie
# 324 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
# 325 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer2
# 326 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 327 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 328 "data/maps/MtPyre_Summit/scripts.pory"

# 329 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachArchie0::
# 330 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
# 331 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie0
# 332 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 333 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterRight
# 334 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 335 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 336 "data/maps/MtPyre_Summit/scripts.pory"

# 337 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachArchie1::
# 338 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
# 339 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie1
# 340 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 341 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterRight
# 342 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 343 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 344 "data/maps/MtPyre_Summit/scripts.pory"

# 345 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachArchie2::
# 346 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
# 347 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie2
# 348 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 349 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterRight
# 350 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 351 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 352 "data/maps/MtPyre_Summit/scripts.pory"

# 353 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerFaceMaxie0:
# 354 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 355 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 356 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 357 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 358 "data/maps/MtPyre_Summit/scripts.pory"

# 359 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerFaceMaxie:
# 360 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 361 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 362 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 363 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 364 "data/maps/MtPyre_Summit/scripts.pory"

# 365 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieExit:
# 366 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 367 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 368 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 369 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 370 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 371 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 372 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 373 "data/maps/MtPyre_Summit/scripts.pory"

# 374 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieExit:
# 375 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 376 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 377 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 378 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 379 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 380 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 381 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 382 "data/maps/MtPyre_Summit/scripts.pory"

# 383 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit0:
# 384 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 385 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 386 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 387 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 388 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 389 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 390 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 391 "data/maps/MtPyre_Summit/scripts.pory"

# 392 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit1:
# 393 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 394 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 395 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 396 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 397 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 398 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 399 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 400 "data/maps/MtPyre_Summit/scripts.pory"

# 401 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit2:
# 402 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 403 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 404 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 405 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 406 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 407 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 408 "data/maps/MtPyre_Summit/scripts.pory"

# 409 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachPlayer0:
# 410 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 411 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 412 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 413 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 414 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 415 "data/maps/MtPyre_Summit/scripts.pory"

# 416 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachPlayer1:
# 417 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 418 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 419 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 420 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 421 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 422 "data/maps/MtPyre_Summit/scripts.pory"

# 423 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachPlayer2:
# 424 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 425 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 426 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 427 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 428 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 429 "data/maps/MtPyre_Summit/scripts.pory"

# 430 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieWatchMaxie:
# 431 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 432 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_up
# 433 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 434 "data/maps/MtPyre_Summit/scripts.pory"

# 435 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchMaxie:
# 436 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 437 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 438 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 439 "data/maps/MtPyre_Summit/scripts.pory"

# 440 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachArchie0:
# 441 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 442 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 443 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 444 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 445 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 446 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 447 "data/maps/MtPyre_Summit/scripts.pory"

# 448 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachArchie1:
# 449 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 450 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 451 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 452 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 453 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 454 "data/maps/MtPyre_Summit/scripts.pory"

# 455 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachArchie2:
# 456 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 457 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 458 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 459 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 460 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 461 "data/maps/MtPyre_Summit/scripts.pory"

# 462 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_OldLadyLookAround:
# 463 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 464 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 465 "data/maps/MtPyre_Summit/scripts.pory"
	face_left
# 466 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 467 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 468 "data/maps/MtPyre_Summit/scripts.pory"
	face_down
# 469 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 470 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 471 "data/maps/MtPyre_Summit/scripts.pory"

# 472 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_Grunt1::
# 473 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_1, MtPyre_Summit_Text_Grunt1Intro, MtPyre_Summit_Text_Grunt1Defeat
# 474 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 475 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 476 "data/maps/MtPyre_Summit/scripts.pory"

# 477 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_Grunt2::
# 478 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_2, MtPyre_Summit_Text_Grunt2Intro, MtPyre_Summit_Text_Grunt2Defeat
# 479 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 480 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 481 "data/maps/MtPyre_Summit/scripts.pory"

# 482 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_Grunt3::
# 483 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_3, MtPyre_Summit_Text_Grunt3Intro, MtPyre_Summit_Text_Grunt3Defeat
# 484 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 485 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 486 "data/maps/MtPyre_Summit/scripts.pory"

# 487 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_Grunt4::
# 488 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_4, MtPyre_Summit_Text_Grunt4Intro, MtPyre_Summit_Text_Grunt4Defeat
# 489 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 490 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 491 "data/maps/MtPyre_Summit/scripts.pory"

# 492 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt1Intro:
# 493 "data/maps/MtPyre_Summit/scripts.pory"
	.string "No! Those Team Magma goons got\n"
# 494 "data/maps/MtPyre_Summit/scripts.pory"
	.string "here ahead of us!\p"
# 495 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We can't fall behind!$"
# 496 "data/maps/MtPyre_Summit/scripts.pory"

# 497 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt1Defeat:
# 498 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I thought you were one of the Magmas\n"
# 499 "data/maps/MtPyre_Summit/scripts.pory"
	.string "who happened to come back…$"
# 500 "data/maps/MtPyre_Summit/scripts.pory"

# 501 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt1PostBattle:
# 502 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Yeah, so you are strong…\n"
# 503 "data/maps/MtPyre_Summit/scripts.pory"
	.string "But there're a lot of us!$"
# 504 "data/maps/MtPyre_Summit/scripts.pory"

# 505 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt2Intro:
# 506 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Hah!\n"
# 507 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Too bad for you!\p"
# 508 "data/maps/MtPyre_Summit/scripts.pory"
	.string "If you came earlier, you only would've\n"
# 509 "data/maps/MtPyre_Summit/scripts.pory"
	.string "had to battle the wimpy Team Magma.\p"
# 510 "data/maps/MtPyre_Summit/scripts.pory"
	.string "But since you arrived now, you have\n"
# 511 "data/maps/MtPyre_Summit/scripts.pory"
	.string "to take on us toughies!$"
# 512 "data/maps/MtPyre_Summit/scripts.pory"

# 513 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt2Defeat:
# 514 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Urgh… I should've let you take on\n"
# 515 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Team Magma first…$"
# 516 "data/maps/MtPyre_Summit/scripts.pory"

# 517 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt2PostBattle:
# 518 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You don't know anything!\n"
# 519 "data/maps/MtPyre_Summit/scripts.pory"
	.string "So why are you messing with us?$"
# 520 "data/maps/MtPyre_Summit/scripts.pory"

# 521 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt3Intro:
# 522 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You…\n"
# 523 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We saw you at Rustboro.\p"
# 524 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You don't belong to either Team,\n"
# 525 "data/maps/MtPyre_Summit/scripts.pory"
	.string "so why would you be here?$"
# 526 "data/maps/MtPyre_Summit/scripts.pory"

# 527 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt3Defeat:
# 528 "data/maps/MtPyre_Summit/scripts.pory"
	.string "If you're going to mess with anyone,\n"
# 529 "data/maps/MtPyre_Summit/scripts.pory"
	.string "let it be Team Magma…$"
# 530 "data/maps/MtPyre_Summit/scripts.pory"

# 531 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt3PostBattle:
# 532 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Heh, it doesn't matter!\n"
# 533 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We bought ourselves some time!\p"
# 534 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Boss should have snatched what\n"
# 535 "data/maps/MtPyre_Summit/scripts.pory"
	.string "he was after!$"
# 536 "data/maps/MtPyre_Summit/scripts.pory"

# 537 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt4Intro:
# 538 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, I know!\n"
# 539 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You tried to join Team Magma,\l"
# 540 "data/maps/MtPyre_Summit/scripts.pory"
	.string "but they wouldn't have you!\p"
# 541 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Well, don't think that we'll let you\n"
# 542 "data/maps/MtPyre_Summit/scripts.pory"
	.string "join our Team Aqua!$"
# 543 "data/maps/MtPyre_Summit/scripts.pory"

# 544 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt4Defeat:
# 545 "data/maps/MtPyre_Summit/scripts.pory"
	.string "If you want to join Team Aqua that\n"
# 546 "data/maps/MtPyre_Summit/scripts.pory"
	.string "badly, we can consider it…$"
# 547 "data/maps/MtPyre_Summit/scripts.pory"

# 548 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt4PostBattle:
# 549 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We have a great combination going\n"
# 550 "data/maps/MtPyre_Summit/scripts.pory"
	.string "with us members and our leader.$"
# 551 "data/maps/MtPyre_Summit/scripts.pory"

# 552 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_ArchieDrat:
# 553 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Archie: Drat!\p"
# 554 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I thought it would be effortless to\n"
# 555 "data/maps/MtPyre_Summit/scripts.pory"
	.string "take the Red Orb.\p"
# 556 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I didn't expect that a former member of\n"
# 557 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the Elite Four would get in my way.$"
# 558 "data/maps/MtPyre_Summit/scripts.pory"

# 559 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_ArchieMaxieGotAhead:
# 560 "data/maps/MtPyre_Summit/scripts.pory"
	.string "What's a kid doing here?\n"
# 561 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Nevertheless…\p"
# 562 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Team Magma's Maxie got ahead of us, but\n"
# 563 "data/maps/MtPyre_Summit/scripts.pory"
	.string "there's no sense in dwelling on it.\p"
# 564 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Our operation in Slateport City is\n"
# 565 "data/maps/MtPyre_Summit/scripts.pory"
	.string "almost complete.\p"
# 566 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Once we're done there, we can regroup\n"
# 567 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and come back with even greater power!\p"
# 568 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Okay, Team!\n"
# 569 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We're pulling out!$"
# 570 "data/maps/MtPyre_Summit/scripts.pory"

# 571 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_BothOrbsTakenMagmaLeftThis:
# 572 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, no…\n"
# 573 "data/maps/MtPyre_Summit/scripts.pory"
	.string "This cannot happen…\p"
# 574 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Not only the BLUE ORB, but even\n"
# 575 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the RED ORB has been taken…\p"
# 576 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The BLUE ORB and RED ORB must never\n"
# 577 "data/maps/MtPyre_Summit/scripts.pory"
	.string "be separated. They belong together.\p"
# 578 "data/maps/MtPyre_Summit/scripts.pory"
	.string "What are those men trying to do with\n"
# 579 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the two ORBS?\p"
# 580 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …\n"
# 581 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …\p"
# 582 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, yes. Was it TEAM MAGMA who came\n"
# 583 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and took the BLUE ORB first?\p"
# 584 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Well, in their haste, they left this\n"
# 585 "data/maps/MtPyre_Summit/scripts.pory"
	.string "behind.\p"
# 586 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I couldn't imagine what exactly it\n"
# 587 "data/maps/MtPyre_Summit/scripts.pory"
	.string "could be.\p"
# 588 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I would like you to have it.\n"
# 589 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Perhaps it will be useful in some way.$"
# 590 "data/maps/MtPyre_Summit/scripts.pory"

# 591 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_OrbsHaveBeenTaken:
# 592 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The BLUE ORB and RED ORB taken by\n"
# 593 "data/maps/MtPyre_Summit/scripts.pory"
	.string "those sinister men…\p"
# 594 "data/maps/MtPyre_Summit/scripts.pory"
	.string "They must never be apart…\n"
# 595 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I fear something terrible will happen…$"
# 596 "data/maps/MtPyre_Summit/scripts.pory"

# 597 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_GroudonKyogreAwakened:
# 598 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, my goodness…\p"
# 599 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You say that both GROUDON and KYOGRE\n"
# 600 "data/maps/MtPyre_Summit/scripts.pory"
	.string "have been awakened?\p"
# 601 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It is said that the BLUE ORB and\n"
# 602 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the RED ORB quelled the rage of\l"
# 603 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the two Pokémon…\p"
# 604 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It is also said that the true owner\n"
# 605 "data/maps/MtPyre_Summit/scripts.pory"
	.string "of the ORBS still exists.\p"
# 606 "data/maps/MtPyre_Summit/scripts.pory"
	.string "However, no one knows who, or what\n"
# 607 "data/maps/MtPyre_Summit/scripts.pory"
	.string "exactly, the ORBS belong to.\p"
# 608 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It could be a human, or perhaps\n"
# 609 "data/maps/MtPyre_Summit/scripts.pory"
	.string "a Pokémon, but no one knows.$"
# 610 "data/maps/MtPyre_Summit/scripts.pory"

# 611 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_ThoseTwoMenReturnedOrbs:
# 612 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The two men who took the ORBS came\n"
# 613 "data/maps/MtPyre_Summit/scripts.pory"
	.string "back to return them on their own.\p"
# 614 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Those men…\n"
# 615 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Perhaps they are not so evil after all…$"
# 616 "data/maps/MtPyre_Summit/scripts.pory"

# 617 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_SuperAncientPokemonTaughtUs:
# 618 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The embodiments of the land, sea,\n"
# 619 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and the sky…\p"
# 620 "data/maps/MtPyre_Summit/scripts.pory"
	.string "That is said to be the identities of\n"
# 621 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the super-ancient Pokémon…\p"
# 622 "data/maps/MtPyre_Summit/scripts.pory"
	.string "In the same way that we humans and\n"
# 623 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Pokémon have life, our world, too,\l"
# 624 "data/maps/MtPyre_Summit/scripts.pory"
	.string "is alive…\p"
# 625 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The super-ancient Pokémon have\n"
# 626 "data/maps/MtPyre_Summit/scripts.pory"
	.string "taught us that…$"
# 627 "data/maps/MtPyre_Summit/scripts.pory"

# 628 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_WillYouHearOutMyTale:
# 629 "data/maps/MtPyre_Summit/scripts.pory"
	.string "MT. PYRE is where we calm the spirits\n"
# 630 "data/maps/MtPyre_Summit/scripts.pory"
	.string "of Pokémon that have passed on…\p"
# 631 "data/maps/MtPyre_Summit/scripts.pory"
	.string "This is a high place where one can\n"
# 632 "data/maps/MtPyre_Summit/scripts.pory"
	.string "see all of HOENN…\p"
# 633 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The disembodied spirits of Pokémon\n"
# 634 "data/maps/MtPyre_Summit/scripts.pory"
	.string "must find solace here…\p"
# 635 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Is it coincidence that you are here…\p"
# 636 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Will you hear out my tale? A tale long\n"
# 637 "data/maps/MtPyre_Summit/scripts.pory"
	.string "told in the HOENN region?$"
# 638 "data/maps/MtPyre_Summit/scripts.pory"

# 639 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_GroudonKyogreTale:
# 640 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It happened long, long ago…\p"
# 641 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was wracked by a ferocious\n"
# 642 "data/maps/MtPyre_Summit/scripts.pory"
	.string "clash between the Pokémon of the land\l"
# 643 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and the Pokémon of the sea…\p"
# 644 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon of the land raised\n"
# 645 "data/maps/MtPyre_Summit/scripts.pory"
	.string "mountains and created continents…\p"
# 646 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon of the sea raised huge\n"
# 647 "data/maps/MtPyre_Summit/scripts.pory"
	.string "waves and carved out oceans…\p"
# 648 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Their fierce duel raged without end.\p"
# 649 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was engulfed in massive\n"
# 650 "data/maps/MtPyre_Summit/scripts.pory"
	.string "infernos and vicious storms.\p"
# 651 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The BLUE ORB and the RED ORB brought\n"
# 652 "data/maps/MtPyre_Summit/scripts.pory"
	.string "an end to the calamity.\p"
# 653 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Light poured from the two ORBS and\n"
# 654 "data/maps/MtPyre_Summit/scripts.pory"
	.string "becalmed the enraged adversaries.\p"
# 655 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The pair, made docile, dove deep into\n"
# 656 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the sea where eventually they\l"
# 657 "data/maps/MtPyre_Summit/scripts.pory"
	.string "disappeared…$"
# 658 "data/maps/MtPyre_Summit/scripts.pory"

# 659 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_WellThatTooIsFine:
# 660 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I see…\n"
# 661 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Well, that, too, is fine…$"
# 662 "data/maps/MtPyre_Summit/scripts.pory"

# 663 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_MaxieSilence:
# 664 "data/maps/MtPyre_Summit/scripts.pory"
	.string "MAXIE: {PLAYER}…\p"
# 665 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …\n"
# 666 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …$"
# 667 "data/maps/MtPyre_Summit/scripts.pory"

# 668 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_HearTheNewLegendOfHoenn:
# 669 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It is my role to pass on the legends\n"
# 670 "data/maps/MtPyre_Summit/scripts.pory"
	.string "of HOENN to future generations.\p"
# 671 "data/maps/MtPyre_Summit/scripts.pory"
	.string "And the crisis that just ended in\n"
# 672 "data/maps/MtPyre_Summit/scripts.pory"
	.string "SOOTOPOLIS rewrote a legend…\p"
# 673 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Have you the time to hear the new\n"
# 674 "data/maps/MtPyre_Summit/scripts.pory"
	.string "legend of HOENN?$"
# 675 "data/maps/MtPyre_Summit/scripts.pory"

# 676 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_HoennTrioTale:
# 677 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It happened long, long ago…\p"
# 678 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was wracked by a ferocious\n"
# 679 "data/maps/MtPyre_Summit/scripts.pory"
	.string "clash between the Pokémon of the land\l"
# 680 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and the Pokémon of the sea…\p"
# 681 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon of the land raised\n"
# 682 "data/maps/MtPyre_Summit/scripts.pory"
	.string "mountains and created continents…\p"
# 683 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon of the sea raised huge\n"
# 684 "data/maps/MtPyre_Summit/scripts.pory"
	.string "waves and carved out oceans…\p"
# 685 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Their fierce duel raged without end.\p"
# 686 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was engulfed in massive\n"
# 687 "data/maps/MtPyre_Summit/scripts.pory"
	.string "fires and vicious storms.\p"
# 688 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It was then that the Pokémon of\n"
# 689 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the sky descended from a storm.\p"
# 690 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon, shining a vivid green,\n"
# 691 "data/maps/MtPyre_Summit/scripts.pory"
	.string "becalmed the two enraged Pokémon.\p"
# 692 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Then, its duty done, the green Pokémon\n"
# 693 "data/maps/MtPyre_Summit/scripts.pory"
	.string "flew off into the wild blue yonder…$"
# 694 "data/maps/MtPyre_Summit/scripts.pory"

# 695 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_YoureNotAfter:
# 696 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You're not after the Red Orb as well,\n"
# 697 "data/maps/MtPyre_Summit/scripts.pory"
	.string "are you?\p"
# 698 "data/maps/MtPyre_Summit/scripts.pory"
	.string "What? You say you came here looking\n"
# 699 "data/maps/MtPyre_Summit/scripts.pory"
	.string "for Team Aqua's leader?\p"
# 700 "data/maps/MtPyre_Summit/scripts.pory"
	.string "That was him alright, he's a ruthless\n"
# 701 "data/maps/MtPyre_Summit/scripts.pory"
	.string "man who wants to expand the world's\l"
# 702 "data/maps/MtPyre_Summit/scripts.pory"
	.string "oceans at all costs…\p"
# 703 "data/maps/MtPyre_Summit/scripts.pory"
	.string "His rival, Maxie of Team Magma, came\n"
# 704 "data/maps/MtPyre_Summit/scripts.pory"
	.string "here yesterday and took the Blue Orb.\p"
# 705 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I've trained at Mt. Pyre my whole life\n"
# 706 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and felt it was my duty to protect the\l"
# 707 "data/maps/MtPyre_Summit/scripts.pory"
	.string "remaining Orb.\p"
# 708 "data/maps/MtPyre_Summit/scripts.pory"
	.string "These Orbs have an immense power, The\n"
# 709 "data/maps/MtPyre_Summit/scripts.pory"
	.string "world could be destroyed with them in\l"
# 710 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the wrong hands…\p"
# 711 "data/maps/MtPyre_Summit/scripts.pory"
	.string "If I heard him right, Archie is going\n"
# 712 "data/maps/MtPyre_Summit/scripts.pory"
	.string "to Slateport City next.\p"
# 713 "data/maps/MtPyre_Summit/scripts.pory"
	.string "If you're going to keep pursuing Team\n"
# 714 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Aqua, I'll need to make sure your\l"
# 715 "data/maps/MtPyre_Summit/scripts.pory"
	.string "battling skills are up to the task!$"
# 716 "data/maps/MtPyre_Summit/scripts.pory"

# 717 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_WowYoureCapable:
# 718 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Wow, you're quite a capable trainer!\p"
# 719 "data/maps/MtPyre_Summit/scripts.pory"
	.string "If someone like you is challenging\n"
# 720 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Team Aqua, I feel quite confident\l"
# 721 "data/maps/MtPyre_Summit/scripts.pory"
	.string "in this region's future.\p"
# 722 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I hope you can make good use of this\n"
# 723 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Heart Scale.$"
# 724 "data/maps/MtPyre_Summit/scripts.pory"

# 725 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_PerhapsICould:
# 726 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Perhaps I could also help by\n"
# 727 "data/maps/MtPyre_Summit/scripts.pory"
	.string "teaching your Pokémon some moves?$"
# 728 "data/maps/MtPyre_Summit/scripts.pory"

# 729 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_GoodLuckAnd:
# 730 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Good luck, and take care!$"
# 731 "data/maps/MtPyre_Summit/scripts.pory"

# 732 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Defeat:
# 733 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, darn.\n"
# 734 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I've gone and lost.$"
