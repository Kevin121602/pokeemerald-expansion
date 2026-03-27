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
	msgbox MtPyre_Summit_Text_ThisIsAZoomLens, MSGBOX_DEFAULT
# 81 "data/maps/MtPyre_Summit/scripts.pory"
	giveitem ITEM_ZOOM_LENS
# 82 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_PerhapsICould, MSGBOX_YESNO
# 83 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_eq VAR_RESULT, YES, MtPyre_Summit_EventScript_SealingTutor
# 84 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_GoodLuckAnd, MSGBOX_DEFAULT
# 85 "data/maps/MtPyre_Summit/scripts.pory"
	releaseall
# 86 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 87 "data/maps/MtPyre_Summit/scripts.pory"

# 88 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieFacePlayer0::
# 89 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieFacePlayer0
# 90 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 91 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 92 "data/maps/MtPyre_Summit/scripts.pory"

# 93 "data/maps/MtPyre_Summit/scripts.pory"
@ Archie is already facing player
# 94 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieFacePlayer1::
# 95 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieFacePlayer1
# 96 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 97 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 98 "data/maps/MtPyre_Summit/scripts.pory"

# 99 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieFacePlayer2::
# 100 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieFacePlayer2
# 101 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 102 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 103 "data/maps/MtPyre_Summit/scripts.pory"

# 104 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_PlayerApproachPhoebe0::
# 105 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerApproachPhoebe0
# 106 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 107 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 108 "data/maps/MtPyre_Summit/scripts.pory"

# 109 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_PlayerApproachPhoebe1::
# 110 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerApproachPhoebe1
# 111 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 112 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 113 "data/maps/MtPyre_Summit/scripts.pory"

# 114 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_PlayerApproachPhoebe2::
# 115 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerApproachPhoebe2
# 116 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 117 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 118 "data/maps/MtPyre_Summit/scripts.pory"

# 119 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyApproachPlayer0::
# 120 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PHOEBE, MtPyre_Summit_Movement_OldLadyApproachPlayer0
# 121 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 122 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 123 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 124 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 125 "data/maps/MtPyre_Summit/scripts.pory"

# 126 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyApproachPlayer1::
# 127 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PHOEBE, MtPyre_Summit_Movement_OldLadyApproachPlayer1
# 128 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 129 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 130 "data/maps/MtPyre_Summit/scripts.pory"

# 131 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyApproachPlayer2::
# 132 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PHOEBE, MtPyre_Summit_Movement_OldLadyApproachPlayer2
# 133 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 134 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 135 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 136 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 137 "data/maps/MtPyre_Summit/scripts.pory"

# 138 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerApproachPhoebe0:
# 139 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 140 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 141 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_up
# 142 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 143 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 144 "data/maps/MtPyre_Summit/scripts.pory"

# 145 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerApproachPhoebe1:
# 146 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 147 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 148 "data/maps/MtPyre_Summit/scripts.pory"

# 149 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerApproachPhoebe2:
# 150 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 151 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 152 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_up
# 153 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 154 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 155 "data/maps/MtPyre_Summit/scripts.pory"

# 156 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_OldLadyApproachPlayer0:
# 157 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 158 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 159 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 160 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 161 "data/maps/MtPyre_Summit/scripts.pory"

# 162 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_OldLadyApproachPlayer1:
# 163 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 164 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 165 "data/maps/MtPyre_Summit/scripts.pory"

# 166 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_OldLadyApproachPlayer2:
# 167 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 168 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 169 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 170 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 171 "data/maps/MtPyre_Summit/scripts.pory"

# 172 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieFacePlayer0:
# 173 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 174 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 175 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 176 "data/maps/MtPyre_Summit/scripts.pory"

# 177 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieFacePlayer1:
# 178 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 179 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 180 "data/maps/MtPyre_Summit/scripts.pory"

# 181 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieFacePlayer2:
# 182 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 183 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 184 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 185 "data/maps/MtPyre_Summit/scripts.pory"

# 186 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldMan::
# 187 "data/maps/MtPyre_Summit/scripts.pory"
	lock
# 188 "data/maps/MtPyre_Summit/scripts.pory"
	faceplayer
# 189 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, MtPyre_Summit_EventScript_OldManAfterRayquaza
# 190 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_WillYouHearOutMyTale, MSGBOX_YESNO
# 191 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, YES, MtPyre_Summit_EventScript_OldManTale
# 192 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, NO, MtPyre_Summit_EventScript_DeclineOldManTale
# 193 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 194 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 195 "data/maps/MtPyre_Summit/scripts.pory"

# 196 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldManAfterRayquaza::
# 197 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_HearTheNewLegendOfHoenn, MSGBOX_YESNO
# 198 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, YES, MtPyre_Summit_EventScript_OldManNewTale
# 199 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, NO, MtPyre_Summit_EventScript_DeclineOldManTale
# 200 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 201 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 202 "data/maps/MtPyre_Summit/scripts.pory"

# 203 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldManTale::
# 204 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_GroudonKyogreTale, MSGBOX_DEFAULT
# 205 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 206 "data/maps/MtPyre_Summit/scripts.pory"

# 207 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_DeclineOldManTale::
# 208 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_WellThatTooIsFine, MSGBOX_DEFAULT
# 209 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 210 "data/maps/MtPyre_Summit/scripts.pory"

# 211 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldManNewTale::
# 212 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_HoennTrioTale, MSGBOX_DEFAULT
# 213 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 214 "data/maps/MtPyre_Summit/scripts.pory"

# 215 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLady::
# 216 "data/maps/MtPyre_Summit/scripts.pory"
	lock
# 217 "data/maps/MtPyre_Summit/scripts.pory"
	faceplayer
# 218 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_set FLAG_RETURNED_RED_OR_BLUE_ORB, MtPyre_Summit_EventScript_OldLadyAfterOrbsReturned
# 219 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_ge VAR_MT_PYRE_STATE, 3, MtPyre_Summit_EventScript_OldLadyOrbsReturned
# 220 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_set FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, MtPyre_Summit_EventScript_OldLadyLegendariesAwake
# 221 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_OrbsHaveBeenTaken, MSGBOX_DEFAULT
# 222 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 223 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 224 "data/maps/MtPyre_Summit/scripts.pory"

# 225 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyOrbsReturned::
# 226 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_ThoseTwoMenReturnedOrbs, MSGBOX_DEFAULT
# 227 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_RETURNED_RED_OR_BLUE_ORB
# 228 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 229 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 230 "data/maps/MtPyre_Summit/scripts.pory"

# 231 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyLegendariesAwake::
# 232 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_GroudonKyogreAwakened, MSGBOX_DEFAULT
# 233 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 234 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 235 "data/maps/MtPyre_Summit/scripts.pory"

# 236 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyAfterOrbsReturned::
# 237 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_SuperAncientPokemonTaughtUs, MSGBOX_DEFAULT
# 238 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 239 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 240 "data/maps/MtPyre_Summit/scripts.pory"

# 241 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieTrigger0::
# 242 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 243 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 0
# 244 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
# 245 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 246 "data/maps/MtPyre_Summit/scripts.pory"

# 247 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieTrigger1::
# 248 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 249 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 1
# 250 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
# 251 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 252 "data/maps/MtPyre_Summit/scripts.pory"

# 253 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieTrigger2::
# 254 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 255 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 2
# 256 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
# 257 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 258 "data/maps/MtPyre_Summit/scripts.pory"

# 259 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs::
# 260 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 261 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 262 "data/maps/MtPyre_Summit/scripts.pory"
	delay 60
# 263 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_ArchieMaxieBeginExit0
# 264 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_ArchieMaxieBeginExit1
# 265 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_ArchieMaxieBeginExit2
# 266 "data/maps/MtPyre_Summit/scripts.pory"
	playse SE_PIN
# 267 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_ExclamationMark
# 268 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 269 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_Delay48
# 270 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 271 "data/maps/MtPyre_Summit/scripts.pory"
	delay 30
# 272 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_MaxieApproachPlayer0
# 273 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_MaxieApproachPlayer1
# 274 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_MaxieApproachPlayer2
# 275 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_MaxieSilence, MSGBOX_DEFAULT
# 276 "data/maps/MtPyre_Summit/scripts.pory"
	closemessage
# 277 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_MaxieApproachArchie0
# 278 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_MaxieApproachArchie1
# 279 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_MaxieApproachArchie2
# 280 "data/maps/MtPyre_Summit/scripts.pory"
	delay 30
# 281 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 282 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 283 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 284 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_ARCHIE
# 285 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MAXIE
# 286 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_MT_PYRE_STATE, 3
# 287 "data/maps/MtPyre_Summit/scripts.pory"
	releaseall
# 288 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 289 "data/maps/MtPyre_Summit/scripts.pory"

# 290 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieBeginExit0::
# 291 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit0
# 292 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 293 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 294 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 295 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 296 "data/maps/MtPyre_Summit/scripts.pory"

# 297 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieBeginExit1::
# 298 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit1
# 299 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 300 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 301 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 302 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 303 "data/maps/MtPyre_Summit/scripts.pory"

# 304 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieBeginExit2::
# 305 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit2
# 306 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 307 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 308 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 309 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 310 "data/maps/MtPyre_Summit/scripts.pory"

# 311 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachPlayer0::
# 312 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie0
# 313 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
# 314 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer0
# 315 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 316 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 317 "data/maps/MtPyre_Summit/scripts.pory"

# 318 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachPlayer1::
# 319 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie
# 320 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
# 321 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer1
# 322 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 323 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 324 "data/maps/MtPyre_Summit/scripts.pory"

# 325 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachPlayer2::
# 326 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie
# 327 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
# 328 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer2
# 329 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 330 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 331 "data/maps/MtPyre_Summit/scripts.pory"

# 332 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachArchie0::
# 333 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
# 334 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie0
# 335 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 336 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterRight
# 337 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 338 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 339 "data/maps/MtPyre_Summit/scripts.pory"

# 340 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachArchie1::
# 341 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
# 342 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie1
# 343 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 344 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterRight
# 345 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 346 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 347 "data/maps/MtPyre_Summit/scripts.pory"

# 348 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachArchie2::
# 349 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
# 350 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie2
# 351 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 352 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterRight
# 353 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 354 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 355 "data/maps/MtPyre_Summit/scripts.pory"

# 356 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerFaceMaxie0:
# 357 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 358 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 359 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 360 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 361 "data/maps/MtPyre_Summit/scripts.pory"

# 362 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerFaceMaxie:
# 363 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 364 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 365 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 366 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 367 "data/maps/MtPyre_Summit/scripts.pory"

# 368 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieExit:
# 369 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 370 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 371 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 372 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 373 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 374 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 375 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 376 "data/maps/MtPyre_Summit/scripts.pory"

# 377 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieExit:
# 378 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 379 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 380 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 381 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 382 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 383 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 384 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 385 "data/maps/MtPyre_Summit/scripts.pory"

# 386 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit0:
# 387 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 388 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 389 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 390 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 391 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 392 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 393 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 394 "data/maps/MtPyre_Summit/scripts.pory"

# 395 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit1:
# 396 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 397 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 398 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 399 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 400 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 401 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 402 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 403 "data/maps/MtPyre_Summit/scripts.pory"

# 404 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit2:
# 405 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 406 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 407 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 408 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 409 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 410 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 411 "data/maps/MtPyre_Summit/scripts.pory"

# 412 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachPlayer0:
# 413 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 414 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 415 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 416 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 417 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 418 "data/maps/MtPyre_Summit/scripts.pory"

# 419 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachPlayer1:
# 420 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 421 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 422 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 423 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 424 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 425 "data/maps/MtPyre_Summit/scripts.pory"

# 426 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachPlayer2:
# 427 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 428 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 429 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 430 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 431 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 432 "data/maps/MtPyre_Summit/scripts.pory"

# 433 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieWatchMaxie:
# 434 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 435 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_up
# 436 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 437 "data/maps/MtPyre_Summit/scripts.pory"

# 438 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchMaxie:
# 439 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 440 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 441 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 442 "data/maps/MtPyre_Summit/scripts.pory"

# 443 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachArchie0:
# 444 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 445 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 446 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 447 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 448 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 449 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 450 "data/maps/MtPyre_Summit/scripts.pory"

# 451 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachArchie1:
# 452 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 453 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 454 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 455 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 456 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 457 "data/maps/MtPyre_Summit/scripts.pory"

# 458 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachArchie2:
# 459 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 460 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 461 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 462 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 463 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 464 "data/maps/MtPyre_Summit/scripts.pory"

# 465 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_OldLadyLookAround:
# 466 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 467 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 468 "data/maps/MtPyre_Summit/scripts.pory"
	face_left
# 469 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 470 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 471 "data/maps/MtPyre_Summit/scripts.pory"
	face_down
# 472 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 473 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 474 "data/maps/MtPyre_Summit/scripts.pory"

# 475 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_Grunt1::
# 476 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_1, MtPyre_Summit_Text_Grunt1Intro, MtPyre_Summit_Text_Grunt1Defeat
# 477 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 478 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 479 "data/maps/MtPyre_Summit/scripts.pory"

# 480 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_Grunt2::
# 481 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_2, MtPyre_Summit_Text_Grunt2Intro, MtPyre_Summit_Text_Grunt2Defeat
# 482 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 483 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 484 "data/maps/MtPyre_Summit/scripts.pory"

# 485 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_Grunt3::
# 486 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_3, MtPyre_Summit_Text_Grunt3Intro, MtPyre_Summit_Text_Grunt3Defeat
# 487 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 488 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 489 "data/maps/MtPyre_Summit/scripts.pory"

# 490 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_Grunt4::
# 491 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_4, MtPyre_Summit_Text_Grunt4Intro, MtPyre_Summit_Text_Grunt4Defeat
# 492 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 493 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 494 "data/maps/MtPyre_Summit/scripts.pory"

# 495 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt1Intro:
# 496 "data/maps/MtPyre_Summit/scripts.pory"
	.string "No! Those Team Magma goons got\n"
# 497 "data/maps/MtPyre_Summit/scripts.pory"
	.string "here ahead of us!\p"
# 498 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We can't fall behind!$"
# 499 "data/maps/MtPyre_Summit/scripts.pory"

# 500 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt1Defeat:
# 501 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I thought you were one of the Magmas\n"
# 502 "data/maps/MtPyre_Summit/scripts.pory"
	.string "who happened to come back…$"
# 503 "data/maps/MtPyre_Summit/scripts.pory"

# 504 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt1PostBattle:
# 505 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Yeah, so you are strong…\n"
# 506 "data/maps/MtPyre_Summit/scripts.pory"
	.string "But there're a lot of us!$"
# 507 "data/maps/MtPyre_Summit/scripts.pory"

# 508 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt2Intro:
# 509 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Hah!\n"
# 510 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Too bad for you!\p"
# 511 "data/maps/MtPyre_Summit/scripts.pory"
	.string "If you came earlier, you only would've\n"
# 512 "data/maps/MtPyre_Summit/scripts.pory"
	.string "had to battle the wimpy Team Magma.\p"
# 513 "data/maps/MtPyre_Summit/scripts.pory"
	.string "But since you arrived now, you have\n"
# 514 "data/maps/MtPyre_Summit/scripts.pory"
	.string "to take on us toughies!$"
# 515 "data/maps/MtPyre_Summit/scripts.pory"

# 516 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt2Defeat:
# 517 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Urgh… I should've let you take on\n"
# 518 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Team Magma first…$"
# 519 "data/maps/MtPyre_Summit/scripts.pory"

# 520 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt2PostBattle:
# 521 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You don't know anything!\n"
# 522 "data/maps/MtPyre_Summit/scripts.pory"
	.string "So why are you messing with us?$"
# 523 "data/maps/MtPyre_Summit/scripts.pory"

# 524 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt3Intro:
# 525 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You…\n"
# 526 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We saw you at Rustboro.\p"
# 527 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You don't belong to either Team,\n"
# 528 "data/maps/MtPyre_Summit/scripts.pory"
	.string "so why would you be here?$"
# 529 "data/maps/MtPyre_Summit/scripts.pory"

# 530 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt3Defeat:
# 531 "data/maps/MtPyre_Summit/scripts.pory"
	.string "If you're going to mess with anyone,\n"
# 532 "data/maps/MtPyre_Summit/scripts.pory"
	.string "let it be Team Magma…$"
# 533 "data/maps/MtPyre_Summit/scripts.pory"

# 534 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt3PostBattle:
# 535 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Heh, it doesn't matter!\n"
# 536 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We bought ourselves some time!\p"
# 537 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Boss should have snatched what\n"
# 538 "data/maps/MtPyre_Summit/scripts.pory"
	.string "he was after!$"
# 539 "data/maps/MtPyre_Summit/scripts.pory"

# 540 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt4Intro:
# 541 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, I know!\n"
# 542 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You tried to join Team Magma,\l"
# 543 "data/maps/MtPyre_Summit/scripts.pory"
	.string "but they wouldn't have you!\p"
# 544 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Well, don't think that we'll let you\n"
# 545 "data/maps/MtPyre_Summit/scripts.pory"
	.string "join our Team Aqua!$"
# 546 "data/maps/MtPyre_Summit/scripts.pory"

# 547 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt4Defeat:
# 548 "data/maps/MtPyre_Summit/scripts.pory"
	.string "If you want to join Team Aqua that\n"
# 549 "data/maps/MtPyre_Summit/scripts.pory"
	.string "badly, we can consider it…$"
# 550 "data/maps/MtPyre_Summit/scripts.pory"

# 551 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt4PostBattle:
# 552 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We have a great combination going\n"
# 553 "data/maps/MtPyre_Summit/scripts.pory"
	.string "with us members and our leader.$"
# 554 "data/maps/MtPyre_Summit/scripts.pory"

# 555 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_ArchieDrat:
# 556 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Archie: Drat!\p"
# 557 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I thought it would be effortless to\n"
# 558 "data/maps/MtPyre_Summit/scripts.pory"
	.string "take the Red Orb.\p"
# 559 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I didn't expect that a former member of\n"
# 560 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the Elite Four would get in my way.$"
# 561 "data/maps/MtPyre_Summit/scripts.pory"

# 562 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_ArchieMaxieGotAhead:
# 563 "data/maps/MtPyre_Summit/scripts.pory"
	.string "What's a kid doing here?\n"
# 564 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Nevertheless…\p"
# 565 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Team Magma's Maxie got ahead of us, but\n"
# 566 "data/maps/MtPyre_Summit/scripts.pory"
	.string "there's no sense in dwelling on it.\p"
# 567 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Our operation in Slateport City is\n"
# 568 "data/maps/MtPyre_Summit/scripts.pory"
	.string "almost complete.\p"
# 569 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Once we're done there, we can regroup\n"
# 570 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and come back with even greater power!\p"
# 571 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Okay, Team!\n"
# 572 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We're pulling out!$"
# 573 "data/maps/MtPyre_Summit/scripts.pory"

# 574 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_BothOrbsTakenMagmaLeftThis:
# 575 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, no…\n"
# 576 "data/maps/MtPyre_Summit/scripts.pory"
	.string "This cannot happen…\p"
# 577 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Not only the BLUE ORB, but even\n"
# 578 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the RED ORB has been taken…\p"
# 579 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The BLUE ORB and RED ORB must never\n"
# 580 "data/maps/MtPyre_Summit/scripts.pory"
	.string "be separated. They belong together.\p"
# 581 "data/maps/MtPyre_Summit/scripts.pory"
	.string "What are those men trying to do with\n"
# 582 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the two ORBS?\p"
# 583 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …\n"
# 584 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …\p"
# 585 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, yes. Was it TEAM MAGMA who came\n"
# 586 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and took the BLUE ORB first?\p"
# 587 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Well, in their haste, they left this\n"
# 588 "data/maps/MtPyre_Summit/scripts.pory"
	.string "behind.\p"
# 589 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I couldn't imagine what exactly it\n"
# 590 "data/maps/MtPyre_Summit/scripts.pory"
	.string "could be.\p"
# 591 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I would like you to have it.\n"
# 592 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Perhaps it will be useful in some way.$"
# 593 "data/maps/MtPyre_Summit/scripts.pory"

# 594 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_OrbsHaveBeenTaken:
# 595 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The BLUE ORB and RED ORB taken by\n"
# 596 "data/maps/MtPyre_Summit/scripts.pory"
	.string "those sinister men…\p"
# 597 "data/maps/MtPyre_Summit/scripts.pory"
	.string "They must never be apart…\n"
# 598 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I fear something terrible will happen…$"
# 599 "data/maps/MtPyre_Summit/scripts.pory"

# 600 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_GroudonKyogreAwakened:
# 601 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, my goodness…\p"
# 602 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You say that both GROUDON and KYOGRE\n"
# 603 "data/maps/MtPyre_Summit/scripts.pory"
	.string "have been awakened?\p"
# 604 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It is said that the BLUE ORB and\n"
# 605 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the RED ORB quelled the rage of\l"
# 606 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the two Pokémon…\p"
# 607 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It is also said that the true owner\n"
# 608 "data/maps/MtPyre_Summit/scripts.pory"
	.string "of the ORBS still exists.\p"
# 609 "data/maps/MtPyre_Summit/scripts.pory"
	.string "However, no one knows who, or what\n"
# 610 "data/maps/MtPyre_Summit/scripts.pory"
	.string "exactly, the ORBS belong to.\p"
# 611 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It could be a human, or perhaps\n"
# 612 "data/maps/MtPyre_Summit/scripts.pory"
	.string "a Pokémon, but no one knows.$"
# 613 "data/maps/MtPyre_Summit/scripts.pory"

# 614 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_ThoseTwoMenReturnedOrbs:
# 615 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The two men who took the ORBS came\n"
# 616 "data/maps/MtPyre_Summit/scripts.pory"
	.string "back to return them on their own.\p"
# 617 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Those men…\n"
# 618 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Perhaps they are not so evil after all…$"
# 619 "data/maps/MtPyre_Summit/scripts.pory"

# 620 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_SuperAncientPokemonTaughtUs:
# 621 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The embodiments of the land, sea,\n"
# 622 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and the sky…\p"
# 623 "data/maps/MtPyre_Summit/scripts.pory"
	.string "That is said to be the identities of\n"
# 624 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the super-ancient Pokémon…\p"
# 625 "data/maps/MtPyre_Summit/scripts.pory"
	.string "In the same way that we humans and\n"
# 626 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Pokémon have life, our world, too,\l"
# 627 "data/maps/MtPyre_Summit/scripts.pory"
	.string "is alive…\p"
# 628 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The super-ancient Pokémon have\n"
# 629 "data/maps/MtPyre_Summit/scripts.pory"
	.string "taught us that…$"
# 630 "data/maps/MtPyre_Summit/scripts.pory"

# 631 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_WillYouHearOutMyTale:
# 632 "data/maps/MtPyre_Summit/scripts.pory"
	.string "MT. PYRE is where we calm the spirits\n"
# 633 "data/maps/MtPyre_Summit/scripts.pory"
	.string "of Pokémon that have passed on…\p"
# 634 "data/maps/MtPyre_Summit/scripts.pory"
	.string "This is a high place where one can\n"
# 635 "data/maps/MtPyre_Summit/scripts.pory"
	.string "see all of HOENN…\p"
# 636 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The disembodied spirits of Pokémon\n"
# 637 "data/maps/MtPyre_Summit/scripts.pory"
	.string "must find solace here…\p"
# 638 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Is it coincidence that you are here…\p"
# 639 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Will you hear out my tale? A tale long\n"
# 640 "data/maps/MtPyre_Summit/scripts.pory"
	.string "told in the HOENN region?$"
# 641 "data/maps/MtPyre_Summit/scripts.pory"

# 642 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_GroudonKyogreTale:
# 643 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It happened long, long ago…\p"
# 644 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was wracked by a ferocious\n"
# 645 "data/maps/MtPyre_Summit/scripts.pory"
	.string "clash between the Pokémon of the land\l"
# 646 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and the Pokémon of the sea…\p"
# 647 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon of the land raised\n"
# 648 "data/maps/MtPyre_Summit/scripts.pory"
	.string "mountains and created continents…\p"
# 649 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon of the sea raised huge\n"
# 650 "data/maps/MtPyre_Summit/scripts.pory"
	.string "waves and carved out oceans…\p"
# 651 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Their fierce duel raged without end.\p"
# 652 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was engulfed in massive\n"
# 653 "data/maps/MtPyre_Summit/scripts.pory"
	.string "infernos and vicious storms.\p"
# 654 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The BLUE ORB and the RED ORB brought\n"
# 655 "data/maps/MtPyre_Summit/scripts.pory"
	.string "an end to the calamity.\p"
# 656 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Light poured from the two ORBS and\n"
# 657 "data/maps/MtPyre_Summit/scripts.pory"
	.string "becalmed the enraged adversaries.\p"
# 658 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The pair, made docile, dove deep into\n"
# 659 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the sea where eventually they\l"
# 660 "data/maps/MtPyre_Summit/scripts.pory"
	.string "disappeared…$"
# 661 "data/maps/MtPyre_Summit/scripts.pory"

# 662 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_WellThatTooIsFine:
# 663 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I see…\n"
# 664 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Well, that, too, is fine…$"
# 665 "data/maps/MtPyre_Summit/scripts.pory"

# 666 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_MaxieSilence:
# 667 "data/maps/MtPyre_Summit/scripts.pory"
	.string "MAXIE: {PLAYER}…\p"
# 668 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …\n"
# 669 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …$"
# 670 "data/maps/MtPyre_Summit/scripts.pory"

# 671 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_HearTheNewLegendOfHoenn:
# 672 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It is my role to pass on the legends\n"
# 673 "data/maps/MtPyre_Summit/scripts.pory"
	.string "of HOENN to future generations.\p"
# 674 "data/maps/MtPyre_Summit/scripts.pory"
	.string "And the crisis that just ended in\n"
# 675 "data/maps/MtPyre_Summit/scripts.pory"
	.string "SOOTOPOLIS rewrote a legend…\p"
# 676 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Have you the time to hear the new\n"
# 677 "data/maps/MtPyre_Summit/scripts.pory"
	.string "legend of HOENN?$"
# 678 "data/maps/MtPyre_Summit/scripts.pory"

# 679 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_HoennTrioTale:
# 680 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It happened long, long ago…\p"
# 681 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was wracked by a ferocious\n"
# 682 "data/maps/MtPyre_Summit/scripts.pory"
	.string "clash between the Pokémon of the land\l"
# 683 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and the Pokémon of the sea…\p"
# 684 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon of the land raised\n"
# 685 "data/maps/MtPyre_Summit/scripts.pory"
	.string "mountains and created continents…\p"
# 686 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon of the sea raised huge\n"
# 687 "data/maps/MtPyre_Summit/scripts.pory"
	.string "waves and carved out oceans…\p"
# 688 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Their fierce duel raged without end.\p"
# 689 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was engulfed in massive\n"
# 690 "data/maps/MtPyre_Summit/scripts.pory"
	.string "fires and vicious storms.\p"
# 691 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It was then that the Pokémon of\n"
# 692 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the sky descended from a storm.\p"
# 693 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon, shining a vivid green,\n"
# 694 "data/maps/MtPyre_Summit/scripts.pory"
	.string "becalmed the two enraged Pokémon.\p"
# 695 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Then, its duty done, the green Pokémon\n"
# 696 "data/maps/MtPyre_Summit/scripts.pory"
	.string "flew off into the wild blue yonder…$"
# 697 "data/maps/MtPyre_Summit/scripts.pory"

# 698 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_YoureNotAfter:
# 699 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You're not after the Red Orb as well,\n"
# 700 "data/maps/MtPyre_Summit/scripts.pory"
	.string "are you?\p"
# 701 "data/maps/MtPyre_Summit/scripts.pory"
	.string "What? You say you came here looking\n"
# 702 "data/maps/MtPyre_Summit/scripts.pory"
	.string "for Team Aqua's leader?\p"
# 703 "data/maps/MtPyre_Summit/scripts.pory"
	.string "That was him alright, he's a ruthless\n"
# 704 "data/maps/MtPyre_Summit/scripts.pory"
	.string "man who wants to expand the world's\l"
# 705 "data/maps/MtPyre_Summit/scripts.pory"
	.string "oceans at all costs…\p"
# 706 "data/maps/MtPyre_Summit/scripts.pory"
	.string "His rival, Maxie of Team Magma, came\n"
# 707 "data/maps/MtPyre_Summit/scripts.pory"
	.string "here yesterday and took the Blue Orb.\p"
# 708 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I've trained at Mt. Pyre my whole life\n"
# 709 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and felt it was my duty to protect the\l"
# 710 "data/maps/MtPyre_Summit/scripts.pory"
	.string "remaining Orb.\p"
# 711 "data/maps/MtPyre_Summit/scripts.pory"
	.string "These Orbs have an immense power, The\n"
# 712 "data/maps/MtPyre_Summit/scripts.pory"
	.string "world could be destroyed with them in\l"
# 713 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the wrong hands…\p"
# 714 "data/maps/MtPyre_Summit/scripts.pory"
	.string "If I heard him right, Archie is going\n"
# 715 "data/maps/MtPyre_Summit/scripts.pory"
	.string "to Slateport City next.\p"
# 716 "data/maps/MtPyre_Summit/scripts.pory"
	.string "If you're going to keep pursuing Team\n"
# 717 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Aqua, I'll need to make sure your\l"
# 718 "data/maps/MtPyre_Summit/scripts.pory"
	.string "battling skills are up to the task!$"
# 719 "data/maps/MtPyre_Summit/scripts.pory"

# 720 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_WowYoureCapable:
# 721 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Wow, you're quite a capable trainer!\p"
# 722 "data/maps/MtPyre_Summit/scripts.pory"
	.string "If someone like you is challenging\n"
# 723 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Team Aqua, I feel quite confident\l"
# 724 "data/maps/MtPyre_Summit/scripts.pory"
	.string "in this region's future.\p"
# 725 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I hope you can make good use of this\n"
# 726 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Heart Scale.$"
# 727 "data/maps/MtPyre_Summit/scripts.pory"

# 728 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_ThisIsAZoomLens:
# 729 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You should have this too, it's a Zoom\n"
# 730 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Lens.\p"
# 731 "data/maps/MtPyre_Summit/scripts.pory"
	.string "A slower Pokémon that has it equipped\n"
# 732 "data/maps/MtPyre_Summit/scripts.pory"
	.string "is sure to hit!$"
# 733 "data/maps/MtPyre_Summit/scripts.pory"

# 734 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_PerhapsICould:
# 735 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Perhaps I could also help by\n"
# 736 "data/maps/MtPyre_Summit/scripts.pory"
	.string "teaching your Pokémon some moves?$"
# 737 "data/maps/MtPyre_Summit/scripts.pory"

# 738 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_GoodLuckAnd:
# 739 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Good luck, and take care!$"
# 740 "data/maps/MtPyre_Summit/scripts.pory"

# 741 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Defeat:
# 742 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, darn.\n"
# 743 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I've gone and lost.$"
