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
	clearflag FLAG_HIDE_ROUTE_104_MENTAL_HERB_FLORIST
# 77 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_MT_PYRE_STATE, 1
# 78 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_WowYoureCapable, MSGBOX_DEFAULT
# 79 "data/maps/MtPyre_Summit/scripts.pory"
	giveitem ITEM_HEART_SCALE
# 80 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_PerhapsICould, MSGBOX_YESNO
# 81 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_eq VAR_RESULT, YES, MtPyre_Summit_EventScript_SealingTutor
# 82 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_GoodLuckAnd, MSGBOX_DEFAULT
# 83 "data/maps/MtPyre_Summit/scripts.pory"
	releaseall
# 84 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 85 "data/maps/MtPyre_Summit/scripts.pory"

# 86 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieFacePlayer0::
# 87 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieFacePlayer0
# 88 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 89 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 90 "data/maps/MtPyre_Summit/scripts.pory"

# 91 "data/maps/MtPyre_Summit/scripts.pory"
@ Archie is already facing player
# 92 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieFacePlayer1::
# 93 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieFacePlayer1
# 94 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 95 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 96 "data/maps/MtPyre_Summit/scripts.pory"

# 97 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieFacePlayer2::
# 98 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieFacePlayer2
# 99 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 100 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 101 "data/maps/MtPyre_Summit/scripts.pory"

# 102 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_PlayerApproachPhoebe0::
# 103 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerApproachPhoebe0
# 104 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 105 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 106 "data/maps/MtPyre_Summit/scripts.pory"

# 107 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_PlayerApproachPhoebe1::
# 108 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerApproachPhoebe1
# 109 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 110 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 111 "data/maps/MtPyre_Summit/scripts.pory"

# 112 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_PlayerApproachPhoebe2::
# 113 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerApproachPhoebe2
# 114 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 115 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 116 "data/maps/MtPyre_Summit/scripts.pory"

# 117 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyApproachPlayer0::
# 118 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PHOEBE, MtPyre_Summit_Movement_OldLadyApproachPlayer0
# 119 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 120 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 121 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 122 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 123 "data/maps/MtPyre_Summit/scripts.pory"

# 124 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyApproachPlayer1::
# 125 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PHOEBE, MtPyre_Summit_Movement_OldLadyApproachPlayer1
# 126 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 127 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 128 "data/maps/MtPyre_Summit/scripts.pory"

# 129 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyApproachPlayer2::
# 130 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PHOEBE, MtPyre_Summit_Movement_OldLadyApproachPlayer2
# 131 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 132 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 133 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 134 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 135 "data/maps/MtPyre_Summit/scripts.pory"

# 136 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerApproachPhoebe0:
# 137 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 138 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 139 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_up
# 140 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 141 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 142 "data/maps/MtPyre_Summit/scripts.pory"

# 143 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerApproachPhoebe1:
# 144 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 145 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 146 "data/maps/MtPyre_Summit/scripts.pory"

# 147 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerApproachPhoebe2:
# 148 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 149 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 150 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_up
# 151 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 152 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 153 "data/maps/MtPyre_Summit/scripts.pory"

# 154 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_OldLadyApproachPlayer0:
# 155 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 156 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 157 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 158 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 159 "data/maps/MtPyre_Summit/scripts.pory"

# 160 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_OldLadyApproachPlayer1:
# 161 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 162 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 163 "data/maps/MtPyre_Summit/scripts.pory"

# 164 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_OldLadyApproachPlayer2:
# 165 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 166 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 167 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 168 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 169 "data/maps/MtPyre_Summit/scripts.pory"

# 170 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieFacePlayer0:
# 171 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 172 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 173 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 174 "data/maps/MtPyre_Summit/scripts.pory"

# 175 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieFacePlayer1:
# 176 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 177 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 178 "data/maps/MtPyre_Summit/scripts.pory"

# 179 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieFacePlayer2:
# 180 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 181 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 182 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 183 "data/maps/MtPyre_Summit/scripts.pory"

# 184 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldMan::
# 185 "data/maps/MtPyre_Summit/scripts.pory"
	lock
# 186 "data/maps/MtPyre_Summit/scripts.pory"
	faceplayer
# 187 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, MtPyre_Summit_EventScript_OldManAfterRayquaza
# 188 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_WillYouHearOutMyTale, MSGBOX_YESNO
# 189 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, YES, MtPyre_Summit_EventScript_OldManTale
# 190 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, NO, MtPyre_Summit_EventScript_DeclineOldManTale
# 191 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 192 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 193 "data/maps/MtPyre_Summit/scripts.pory"

# 194 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldManAfterRayquaza::
# 195 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_HearTheNewLegendOfHoenn, MSGBOX_YESNO
# 196 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, YES, MtPyre_Summit_EventScript_OldManNewTale
# 197 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, NO, MtPyre_Summit_EventScript_DeclineOldManTale
# 198 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 199 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 200 "data/maps/MtPyre_Summit/scripts.pory"

# 201 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldManTale::
# 202 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_GroudonKyogreTale, MSGBOX_DEFAULT
# 203 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 204 "data/maps/MtPyre_Summit/scripts.pory"

# 205 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_DeclineOldManTale::
# 206 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_WellThatTooIsFine, MSGBOX_DEFAULT
# 207 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 208 "data/maps/MtPyre_Summit/scripts.pory"

# 209 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldManNewTale::
# 210 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_HoennTrioTale, MSGBOX_DEFAULT
# 211 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 212 "data/maps/MtPyre_Summit/scripts.pory"

# 213 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLady::
# 214 "data/maps/MtPyre_Summit/scripts.pory"
	lock
# 215 "data/maps/MtPyre_Summit/scripts.pory"
	faceplayer
# 216 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_set FLAG_RETURNED_RED_OR_BLUE_ORB, MtPyre_Summit_EventScript_OldLadyAfterOrbsReturned
# 217 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_ge VAR_MT_PYRE_STATE, 3, MtPyre_Summit_EventScript_OldLadyOrbsReturned
# 218 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_set FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, MtPyre_Summit_EventScript_OldLadyLegendariesAwake
# 219 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_OrbsHaveBeenTaken, MSGBOX_DEFAULT
# 220 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 221 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 222 "data/maps/MtPyre_Summit/scripts.pory"

# 223 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyOrbsReturned::
# 224 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_ThoseTwoMenReturnedOrbs, MSGBOX_DEFAULT
# 225 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_RETURNED_RED_OR_BLUE_ORB
# 226 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 227 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 228 "data/maps/MtPyre_Summit/scripts.pory"

# 229 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyLegendariesAwake::
# 230 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_GroudonKyogreAwakened, MSGBOX_DEFAULT
# 231 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 232 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 233 "data/maps/MtPyre_Summit/scripts.pory"

# 234 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyAfterOrbsReturned::
# 235 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_SuperAncientPokemonTaughtUs, MSGBOX_DEFAULT
# 236 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 237 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 238 "data/maps/MtPyre_Summit/scripts.pory"

# 239 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieTrigger0::
# 240 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 241 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 0
# 242 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
# 243 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 244 "data/maps/MtPyre_Summit/scripts.pory"

# 245 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieTrigger1::
# 246 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 247 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 1
# 248 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
# 249 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 250 "data/maps/MtPyre_Summit/scripts.pory"

# 251 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieTrigger2::
# 252 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 253 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 2
# 254 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
# 255 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 256 "data/maps/MtPyre_Summit/scripts.pory"

# 257 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs::
# 258 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 259 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 260 "data/maps/MtPyre_Summit/scripts.pory"
	delay 60
# 261 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_ArchieMaxieBeginExit0
# 262 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_ArchieMaxieBeginExit1
# 263 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_ArchieMaxieBeginExit2
# 264 "data/maps/MtPyre_Summit/scripts.pory"
	playse SE_PIN
# 265 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_ExclamationMark
# 266 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 267 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_Delay48
# 268 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 269 "data/maps/MtPyre_Summit/scripts.pory"
	delay 30
# 270 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_MaxieApproachPlayer0
# 271 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_MaxieApproachPlayer1
# 272 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_MaxieApproachPlayer2
# 273 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_MaxieSilence, MSGBOX_DEFAULT
# 274 "data/maps/MtPyre_Summit/scripts.pory"
	closemessage
# 275 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_MaxieApproachArchie0
# 276 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_MaxieApproachArchie1
# 277 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_MaxieApproachArchie2
# 278 "data/maps/MtPyre_Summit/scripts.pory"
	delay 30
# 279 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 280 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 281 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 282 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_ARCHIE
# 283 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MAXIE
# 284 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_MT_PYRE_STATE, 3
# 285 "data/maps/MtPyre_Summit/scripts.pory"
	releaseall
# 286 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 287 "data/maps/MtPyre_Summit/scripts.pory"

# 288 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieBeginExit0::
# 289 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit0
# 290 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 291 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 292 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 293 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 294 "data/maps/MtPyre_Summit/scripts.pory"

# 295 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieBeginExit1::
# 296 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit1
# 297 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 298 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 299 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 300 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 301 "data/maps/MtPyre_Summit/scripts.pory"

# 302 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieBeginExit2::
# 303 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit2
# 304 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 305 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 306 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 307 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 308 "data/maps/MtPyre_Summit/scripts.pory"

# 309 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachPlayer0::
# 310 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie0
# 311 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
# 312 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer0
# 313 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 314 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 315 "data/maps/MtPyre_Summit/scripts.pory"

# 316 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachPlayer1::
# 317 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie
# 318 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
# 319 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer1
# 320 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 321 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 322 "data/maps/MtPyre_Summit/scripts.pory"

# 323 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachPlayer2::
# 324 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie
# 325 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
# 326 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer2
# 327 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 328 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 329 "data/maps/MtPyre_Summit/scripts.pory"

# 330 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachArchie0::
# 331 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
# 332 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie0
# 333 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 334 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterRight
# 335 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 336 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 337 "data/maps/MtPyre_Summit/scripts.pory"

# 338 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachArchie1::
# 339 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
# 340 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie1
# 341 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 342 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterRight
# 343 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 344 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 345 "data/maps/MtPyre_Summit/scripts.pory"

# 346 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachArchie2::
# 347 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
# 348 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie2
# 349 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 350 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterRight
# 351 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 352 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 353 "data/maps/MtPyre_Summit/scripts.pory"

# 354 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerFaceMaxie0:
# 355 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 356 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 357 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 358 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 359 "data/maps/MtPyre_Summit/scripts.pory"

# 360 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerFaceMaxie:
# 361 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 362 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 363 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 364 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 365 "data/maps/MtPyre_Summit/scripts.pory"

# 366 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieExit:
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
	walk_down
# 373 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 374 "data/maps/MtPyre_Summit/scripts.pory"

# 375 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieExit:
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
	walk_down
# 382 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 383 "data/maps/MtPyre_Summit/scripts.pory"

# 384 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit0:
# 385 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 386 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 387 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 388 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 389 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 390 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 391 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 392 "data/maps/MtPyre_Summit/scripts.pory"

# 393 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit1:
# 394 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 395 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 396 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 397 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 398 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 399 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 400 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 401 "data/maps/MtPyre_Summit/scripts.pory"

# 402 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit2:
# 403 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 404 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 405 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 406 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 407 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 408 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 409 "data/maps/MtPyre_Summit/scripts.pory"

# 410 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachPlayer0:
# 411 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 412 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 413 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 414 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 415 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 416 "data/maps/MtPyre_Summit/scripts.pory"

# 417 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachPlayer1:
# 418 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 419 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 420 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 421 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 422 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 423 "data/maps/MtPyre_Summit/scripts.pory"

# 424 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachPlayer2:
# 425 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 426 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 427 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 428 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 429 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 430 "data/maps/MtPyre_Summit/scripts.pory"

# 431 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieWatchMaxie:
# 432 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 433 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_up
# 434 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 435 "data/maps/MtPyre_Summit/scripts.pory"

# 436 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchMaxie:
# 437 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 438 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 439 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 440 "data/maps/MtPyre_Summit/scripts.pory"

# 441 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachArchie0:
# 442 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 443 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 444 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 445 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 446 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 447 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 448 "data/maps/MtPyre_Summit/scripts.pory"

# 449 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachArchie1:
# 450 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 451 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 452 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 453 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 454 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 455 "data/maps/MtPyre_Summit/scripts.pory"

# 456 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachArchie2:
# 457 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 458 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 459 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 460 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 461 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 462 "data/maps/MtPyre_Summit/scripts.pory"

# 463 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_OldLadyLookAround:
# 464 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 465 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 466 "data/maps/MtPyre_Summit/scripts.pory"
	face_left
# 467 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 468 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 469 "data/maps/MtPyre_Summit/scripts.pory"
	face_down
# 470 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 471 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 472 "data/maps/MtPyre_Summit/scripts.pory"

# 473 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_Grunt1::
# 474 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_1, MtPyre_Summit_Text_Grunt1Intro, MtPyre_Summit_Text_Grunt1Defeat
# 475 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 476 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 477 "data/maps/MtPyre_Summit/scripts.pory"

# 478 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_Grunt2::
# 479 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_2, MtPyre_Summit_Text_Grunt2Intro, MtPyre_Summit_Text_Grunt2Defeat
# 480 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 481 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 482 "data/maps/MtPyre_Summit/scripts.pory"

# 483 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_Grunt3::
# 484 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_3, MtPyre_Summit_Text_Grunt3Intro, MtPyre_Summit_Text_Grunt3Defeat
# 485 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 486 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 487 "data/maps/MtPyre_Summit/scripts.pory"

# 488 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_Grunt4::
# 489 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_4, MtPyre_Summit_Text_Grunt4Intro, MtPyre_Summit_Text_Grunt4Defeat
# 490 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 491 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 492 "data/maps/MtPyre_Summit/scripts.pory"

# 493 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt1Intro:
# 494 "data/maps/MtPyre_Summit/scripts.pory"
	.string "No! Those Team Magma goons got\n"
# 495 "data/maps/MtPyre_Summit/scripts.pory"
	.string "here ahead of us!\p"
# 496 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We can't fall behind!$"
# 497 "data/maps/MtPyre_Summit/scripts.pory"

# 498 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt1Defeat:
# 499 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I thought you were one of the Magmas\n"
# 500 "data/maps/MtPyre_Summit/scripts.pory"
	.string "who happened to come back…$"
# 501 "data/maps/MtPyre_Summit/scripts.pory"

# 502 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt1PostBattle:
# 503 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Yeah, so you are strong…\n"
# 504 "data/maps/MtPyre_Summit/scripts.pory"
	.string "But there're a lot of us!$"
# 505 "data/maps/MtPyre_Summit/scripts.pory"

# 506 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt2Intro:
# 507 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Hah!\n"
# 508 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Too bad for you!\p"
# 509 "data/maps/MtPyre_Summit/scripts.pory"
	.string "If you came earlier, you only would've\n"
# 510 "data/maps/MtPyre_Summit/scripts.pory"
	.string "had to battle the wimpy Team Magma.\p"
# 511 "data/maps/MtPyre_Summit/scripts.pory"
	.string "But since you arrived now, you have\n"
# 512 "data/maps/MtPyre_Summit/scripts.pory"
	.string "to take on us toughies!$"
# 513 "data/maps/MtPyre_Summit/scripts.pory"

# 514 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt2Defeat:
# 515 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Urgh… I should've let you take on\n"
# 516 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Team Magma first…$"
# 517 "data/maps/MtPyre_Summit/scripts.pory"

# 518 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt2PostBattle:
# 519 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You don't know anything!\n"
# 520 "data/maps/MtPyre_Summit/scripts.pory"
	.string "So why are you messing with us?$"
# 521 "data/maps/MtPyre_Summit/scripts.pory"

# 522 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt3Intro:
# 523 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You…\n"
# 524 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We saw you at Rustboro.\p"
# 525 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You don't belong to either Team,\n"
# 526 "data/maps/MtPyre_Summit/scripts.pory"
	.string "so why would you be here?$"
# 527 "data/maps/MtPyre_Summit/scripts.pory"

# 528 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt3Defeat:
# 529 "data/maps/MtPyre_Summit/scripts.pory"
	.string "If you're going to mess with anyone,\n"
# 530 "data/maps/MtPyre_Summit/scripts.pory"
	.string "let it be Team Magma…$"
# 531 "data/maps/MtPyre_Summit/scripts.pory"

# 532 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt3PostBattle:
# 533 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Heh, it doesn't matter!\n"
# 534 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We bought ourselves some time!\p"
# 535 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Boss should have snatched what\n"
# 536 "data/maps/MtPyre_Summit/scripts.pory"
	.string "he was after!$"
# 537 "data/maps/MtPyre_Summit/scripts.pory"

# 538 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt4Intro:
# 539 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, I know!\n"
# 540 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You tried to join Team Magma,\l"
# 541 "data/maps/MtPyre_Summit/scripts.pory"
	.string "but they wouldn't have you!\p"
# 542 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Well, don't think that we'll let you\n"
# 543 "data/maps/MtPyre_Summit/scripts.pory"
	.string "join our Team Aqua!$"
# 544 "data/maps/MtPyre_Summit/scripts.pory"

# 545 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt4Defeat:
# 546 "data/maps/MtPyre_Summit/scripts.pory"
	.string "If you want to join Team Aqua that\n"
# 547 "data/maps/MtPyre_Summit/scripts.pory"
	.string "badly, we can consider it…$"
# 548 "data/maps/MtPyre_Summit/scripts.pory"

# 549 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt4PostBattle:
# 550 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We have a great combination going\n"
# 551 "data/maps/MtPyre_Summit/scripts.pory"
	.string "with us members and our leader.$"
# 552 "data/maps/MtPyre_Summit/scripts.pory"

# 553 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_ArchieDrat:
# 554 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Archie: Drat!\p"
# 555 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I thought it would be effortless to\n"
# 556 "data/maps/MtPyre_Summit/scripts.pory"
	.string "take the Red Orb.\p"
# 557 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I didn't expect that a former member of\n"
# 558 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the Elite Four would get in my way.$"
# 559 "data/maps/MtPyre_Summit/scripts.pory"

# 560 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_ArchieMaxieGotAhead:
# 561 "data/maps/MtPyre_Summit/scripts.pory"
	.string "What's a kid doing here?\n"
# 562 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Nevertheless…\p"
# 563 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Team Magma's Maxie got ahead of us, but\n"
# 564 "data/maps/MtPyre_Summit/scripts.pory"
	.string "there's no sense in dwelling on it.\p"
# 565 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Our operation in Slateport City is\n"
# 566 "data/maps/MtPyre_Summit/scripts.pory"
	.string "almost complete.\p"
# 567 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Once we're done there, we can regroup\n"
# 568 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and come back with even greater power!\p"
# 569 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Okay, Team!\n"
# 570 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We're pulling out!$"
# 571 "data/maps/MtPyre_Summit/scripts.pory"

# 572 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_BothOrbsTakenMagmaLeftThis:
# 573 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, no…\n"
# 574 "data/maps/MtPyre_Summit/scripts.pory"
	.string "This cannot happen…\p"
# 575 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Not only the BLUE ORB, but even\n"
# 576 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the RED ORB has been taken…\p"
# 577 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The BLUE ORB and RED ORB must never\n"
# 578 "data/maps/MtPyre_Summit/scripts.pory"
	.string "be separated. They belong together.\p"
# 579 "data/maps/MtPyre_Summit/scripts.pory"
	.string "What are those men trying to do with\n"
# 580 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the two ORBS?\p"
# 581 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …\n"
# 582 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …\p"
# 583 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, yes. Was it TEAM MAGMA who came\n"
# 584 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and took the BLUE ORB first?\p"
# 585 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Well, in their haste, they left this\n"
# 586 "data/maps/MtPyre_Summit/scripts.pory"
	.string "behind.\p"
# 587 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I couldn't imagine what exactly it\n"
# 588 "data/maps/MtPyre_Summit/scripts.pory"
	.string "could be.\p"
# 589 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I would like you to have it.\n"
# 590 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Perhaps it will be useful in some way.$"
# 591 "data/maps/MtPyre_Summit/scripts.pory"

# 592 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_OrbsHaveBeenTaken:
# 593 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The BLUE ORB and RED ORB taken by\n"
# 594 "data/maps/MtPyre_Summit/scripts.pory"
	.string "those sinister men…\p"
# 595 "data/maps/MtPyre_Summit/scripts.pory"
	.string "They must never be apart…\n"
# 596 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I fear something terrible will happen…$"
# 597 "data/maps/MtPyre_Summit/scripts.pory"

# 598 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_GroudonKyogreAwakened:
# 599 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, my goodness…\p"
# 600 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You say that both GROUDON and KYOGRE\n"
# 601 "data/maps/MtPyre_Summit/scripts.pory"
	.string "have been awakened?\p"
# 602 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It is said that the BLUE ORB and\n"
# 603 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the RED ORB quelled the rage of\l"
# 604 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the two Pokémon…\p"
# 605 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It is also said that the true owner\n"
# 606 "data/maps/MtPyre_Summit/scripts.pory"
	.string "of the ORBS still exists.\p"
# 607 "data/maps/MtPyre_Summit/scripts.pory"
	.string "However, no one knows who, or what\n"
# 608 "data/maps/MtPyre_Summit/scripts.pory"
	.string "exactly, the ORBS belong to.\p"
# 609 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It could be a human, or perhaps\n"
# 610 "data/maps/MtPyre_Summit/scripts.pory"
	.string "a Pokémon, but no one knows.$"
# 611 "data/maps/MtPyre_Summit/scripts.pory"

# 612 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_ThoseTwoMenReturnedOrbs:
# 613 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The two men who took the ORBS came\n"
# 614 "data/maps/MtPyre_Summit/scripts.pory"
	.string "back to return them on their own.\p"
# 615 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Those men…\n"
# 616 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Perhaps they are not so evil after all…$"
# 617 "data/maps/MtPyre_Summit/scripts.pory"

# 618 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_SuperAncientPokemonTaughtUs:
# 619 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The embodiments of the land, sea,\n"
# 620 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and the sky…\p"
# 621 "data/maps/MtPyre_Summit/scripts.pory"
	.string "That is said to be the identities of\n"
# 622 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the super-ancient Pokémon…\p"
# 623 "data/maps/MtPyre_Summit/scripts.pory"
	.string "In the same way that we humans and\n"
# 624 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Pokémon have life, our world, too,\l"
# 625 "data/maps/MtPyre_Summit/scripts.pory"
	.string "is alive…\p"
# 626 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The super-ancient Pokémon have\n"
# 627 "data/maps/MtPyre_Summit/scripts.pory"
	.string "taught us that…$"
# 628 "data/maps/MtPyre_Summit/scripts.pory"

# 629 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_WillYouHearOutMyTale:
# 630 "data/maps/MtPyre_Summit/scripts.pory"
	.string "MT. PYRE is where we calm the spirits\n"
# 631 "data/maps/MtPyre_Summit/scripts.pory"
	.string "of Pokémon that have passed on…\p"
# 632 "data/maps/MtPyre_Summit/scripts.pory"
	.string "This is a high place where one can\n"
# 633 "data/maps/MtPyre_Summit/scripts.pory"
	.string "see all of HOENN…\p"
# 634 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The disembodied spirits of Pokémon\n"
# 635 "data/maps/MtPyre_Summit/scripts.pory"
	.string "must find solace here…\p"
# 636 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Is it coincidence that you are here…\p"
# 637 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Will you hear out my tale? A tale long\n"
# 638 "data/maps/MtPyre_Summit/scripts.pory"
	.string "told in the HOENN region?$"
# 639 "data/maps/MtPyre_Summit/scripts.pory"

# 640 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_GroudonKyogreTale:
# 641 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It happened long, long ago…\p"
# 642 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was wracked by a ferocious\n"
# 643 "data/maps/MtPyre_Summit/scripts.pory"
	.string "clash between the Pokémon of the land\l"
# 644 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and the Pokémon of the sea…\p"
# 645 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon of the land raised\n"
# 646 "data/maps/MtPyre_Summit/scripts.pory"
	.string "mountains and created continents…\p"
# 647 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon of the sea raised huge\n"
# 648 "data/maps/MtPyre_Summit/scripts.pory"
	.string "waves and carved out oceans…\p"
# 649 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Their fierce duel raged without end.\p"
# 650 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was engulfed in massive\n"
# 651 "data/maps/MtPyre_Summit/scripts.pory"
	.string "infernos and vicious storms.\p"
# 652 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The BLUE ORB and the RED ORB brought\n"
# 653 "data/maps/MtPyre_Summit/scripts.pory"
	.string "an end to the calamity.\p"
# 654 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Light poured from the two ORBS and\n"
# 655 "data/maps/MtPyre_Summit/scripts.pory"
	.string "becalmed the enraged adversaries.\p"
# 656 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The pair, made docile, dove deep into\n"
# 657 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the sea where eventually they\l"
# 658 "data/maps/MtPyre_Summit/scripts.pory"
	.string "disappeared…$"
# 659 "data/maps/MtPyre_Summit/scripts.pory"

# 660 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_WellThatTooIsFine:
# 661 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I see…\n"
# 662 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Well, that, too, is fine…$"
# 663 "data/maps/MtPyre_Summit/scripts.pory"

# 664 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_MaxieSilence:
# 665 "data/maps/MtPyre_Summit/scripts.pory"
	.string "MAXIE: {PLAYER}…\p"
# 666 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …\n"
# 667 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …$"
# 668 "data/maps/MtPyre_Summit/scripts.pory"

# 669 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_HearTheNewLegendOfHoenn:
# 670 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It is my role to pass on the legends\n"
# 671 "data/maps/MtPyre_Summit/scripts.pory"
	.string "of HOENN to future generations.\p"
# 672 "data/maps/MtPyre_Summit/scripts.pory"
	.string "And the crisis that just ended in\n"
# 673 "data/maps/MtPyre_Summit/scripts.pory"
	.string "SOOTOPOLIS rewrote a legend…\p"
# 674 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Have you the time to hear the new\n"
# 675 "data/maps/MtPyre_Summit/scripts.pory"
	.string "legend of HOENN?$"
# 676 "data/maps/MtPyre_Summit/scripts.pory"

# 677 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_HoennTrioTale:
# 678 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It happened long, long ago…\p"
# 679 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was wracked by a ferocious\n"
# 680 "data/maps/MtPyre_Summit/scripts.pory"
	.string "clash between the Pokémon of the land\l"
# 681 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and the Pokémon of the sea…\p"
# 682 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon of the land raised\n"
# 683 "data/maps/MtPyre_Summit/scripts.pory"
	.string "mountains and created continents…\p"
# 684 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon of the sea raised huge\n"
# 685 "data/maps/MtPyre_Summit/scripts.pory"
	.string "waves and carved out oceans…\p"
# 686 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Their fierce duel raged without end.\p"
# 687 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was engulfed in massive\n"
# 688 "data/maps/MtPyre_Summit/scripts.pory"
	.string "fires and vicious storms.\p"
# 689 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It was then that the Pokémon of\n"
# 690 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the sky descended from a storm.\p"
# 691 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon, shining a vivid green,\n"
# 692 "data/maps/MtPyre_Summit/scripts.pory"
	.string "becalmed the two enraged Pokémon.\p"
# 693 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Then, its duty done, the green Pokémon\n"
# 694 "data/maps/MtPyre_Summit/scripts.pory"
	.string "flew off into the wild blue yonder…$"
# 695 "data/maps/MtPyre_Summit/scripts.pory"

# 696 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_YoureNotAfter:
# 697 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You're not after the Red Orb as well,\n"
# 698 "data/maps/MtPyre_Summit/scripts.pory"
	.string "are you?\p"
# 699 "data/maps/MtPyre_Summit/scripts.pory"
	.string "What? You say you came here looking\n"
# 700 "data/maps/MtPyre_Summit/scripts.pory"
	.string "for Team Aqua's leader?\p"
# 701 "data/maps/MtPyre_Summit/scripts.pory"
	.string "That was him alright, he's a ruthless\n"
# 702 "data/maps/MtPyre_Summit/scripts.pory"
	.string "man who wants to expand the world's\l"
# 703 "data/maps/MtPyre_Summit/scripts.pory"
	.string "oceans at all costs…\p"
# 704 "data/maps/MtPyre_Summit/scripts.pory"
	.string "His rival, Maxie of Team Magma, came\n"
# 705 "data/maps/MtPyre_Summit/scripts.pory"
	.string "here yesterday and took the Blue Orb.\p"
# 706 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I've trained at Mt. Pyre my whole life\n"
# 707 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and felt it was my duty to protect the\l"
# 708 "data/maps/MtPyre_Summit/scripts.pory"
	.string "remaining Orb.\p"
# 709 "data/maps/MtPyre_Summit/scripts.pory"
	.string "These Orbs have an immense power, The\n"
# 710 "data/maps/MtPyre_Summit/scripts.pory"
	.string "world could be destroyed with them in\l"
# 711 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the wrong hands…\p"
# 712 "data/maps/MtPyre_Summit/scripts.pory"
	.string "If I heard him right, Archie is going\n"
# 713 "data/maps/MtPyre_Summit/scripts.pory"
	.string "to Slateport City next.\p"
# 714 "data/maps/MtPyre_Summit/scripts.pory"
	.string "If you're going to keep pursuing Team\n"
# 715 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Aqua, I'll need to make sure your\l"
# 716 "data/maps/MtPyre_Summit/scripts.pory"
	.string "battling skills are up to the task!$"
# 717 "data/maps/MtPyre_Summit/scripts.pory"

# 718 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_WowYoureCapable:
# 719 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Wow, you're quite a capable trainer!\p"
# 720 "data/maps/MtPyre_Summit/scripts.pory"
	.string "If someone like you is challenging\n"
# 721 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Team Aqua, I feel quite confident\l"
# 722 "data/maps/MtPyre_Summit/scripts.pory"
	.string "in this region's future.\p"
# 723 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I hope you can make good use of this\n"
# 724 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Heart Scale.$"
# 725 "data/maps/MtPyre_Summit/scripts.pory"

# 726 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_PerhapsICould:
# 727 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Perhaps I could also help by\n"
# 728 "data/maps/MtPyre_Summit/scripts.pory"
	.string "teaching your Pokémon some moves?$"
# 729 "data/maps/MtPyre_Summit/scripts.pory"

# 730 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_GoodLuckAnd:
# 731 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Good luck, and take care!$"
# 732 "data/maps/MtPyre_Summit/scripts.pory"

# 733 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Defeat:
# 734 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, darn.\n"
# 735 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I've gone and lost.$"
