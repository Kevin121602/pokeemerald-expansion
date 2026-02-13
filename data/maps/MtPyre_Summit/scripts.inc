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
	call_if_eq VAR_MT_PYRE_STATE, 2, MtPyre_Summit_EventScript_SetArchieMaxiePositions
# 16 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 17 "data/maps/MtPyre_Summit/scripts.pory"

# 18 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_SetArchieMaxiePositions::
# 19 "data/maps/MtPyre_Summit/scripts.pory"
	setobjectxyperm LOCALID_MAXIE, 23, 6
# 20 "data/maps/MtPyre_Summit/scripts.pory"
	setobjectxyperm LOCALID_ARCHIE, 22, 6
# 21 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 22 "data/maps/MtPyre_Summit/scripts.pory"

# 23 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaTrigger0::
# 24 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 25 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 0
# 26 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_TeamAquaExits
# 27 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 28 "data/maps/MtPyre_Summit/scripts.pory"

# 29 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaTrigger1::
# 30 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 31 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 1
# 32 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_TeamAquaExits
# 33 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 34 "data/maps/MtPyre_Summit/scripts.pory"

# 35 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaTrigger2::
# 36 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 37 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 2
# 38 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_TeamAquaExits
# 39 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 40 "data/maps/MtPyre_Summit/scripts.pory"

# 41 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_TeamAquaExits::
# 42 "data/maps/MtPyre_Summit/scripts.pory"
	playbgm MUS_DP_ENCOUNTER_GALACTIC, FALSE
# 43 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 44 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 45 "data/maps/MtPyre_Summit/scripts.pory"
	delay 50
# 46 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_ArchieDrat, MSGBOX_DEFAULT
# 47 "data/maps/MtPyre_Summit/scripts.pory"
	closemessage
# 48 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_ArchieFacePlayer0
# 49 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_ArchieFacePlayer1
# 50 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_ArchieFacePlayer2
# 51 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_ArchieMaxieGotAhead, MSGBOX_DEFAULT
# 52 "data/maps/MtPyre_Summit/scripts.pory"
	closemessage
# 53 "data/maps/MtPyre_Summit/scripts.pory"
	fadescreen FADE_TO_BLACK
# 54 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_ARCHIE
# 55 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_GRUNT_1
# 56 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_GRUNT_2
# 57 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_GRUNT_3
# 58 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_GRUNT_4
# 59 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_HIDE_MT_PYRE_SUMMIT_ARCHIE
# 60 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_HIDE_MT_PYRE_SUMMIT_TEAM_AQUA
# 61 "data/maps/MtPyre_Summit/scripts.pory"
	fadedefaultbgm
# 62 "data/maps/MtPyre_Summit/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 63 "data/maps/MtPyre_Summit/scripts.pory"
	delay 50
# 64 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_MT_PYRE_STATE, 1
# 65 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_PlayerApproachPhoebe0
# 66 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_PlayerApproachPhoebe1
# 67 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_PlayerApproachPhoebe2
# 68 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_YoureNotAfter, MSGBOX_DEFAULT
# 69 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_no_intro TRAINER_PHOEBE, MtPyre_Summit_Text_Defeat
# 70 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_DEFEATED_PHOEBE
# 71 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_HIDE_ROUTE_105_GRUNTS
# 72 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_WowYoureCapable, MSGBOX_DEFAULT
# 73 "data/maps/MtPyre_Summit/scripts.pory"
	giveitem ITEM_HEART_SCALE
# 74 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_PerhapsICould, MSGBOX_YESNO
# 75 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_eq VAR_RESULT, YES, MtPyre_Summit_EventScript_SealingTutor
# 76 "data/maps/MtPyre_Summit/scripts.pory"
	releaseall
# 77 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 78 "data/maps/MtPyre_Summit/scripts.pory"

# 79 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieFacePlayer0::
# 80 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieFacePlayer0
# 81 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 82 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 83 "data/maps/MtPyre_Summit/scripts.pory"

# 84 "data/maps/MtPyre_Summit/scripts.pory"
@ Archie is already facing player
# 85 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieFacePlayer1::
# 86 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieFacePlayer1
# 87 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 88 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 89 "data/maps/MtPyre_Summit/scripts.pory"

# 90 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieFacePlayer2::
# 91 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieFacePlayer2
# 92 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 93 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 94 "data/maps/MtPyre_Summit/scripts.pory"

# 95 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_PlayerApproachPhoebe0::
# 96 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerApproachPhoebe0
# 97 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 98 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 99 "data/maps/MtPyre_Summit/scripts.pory"

# 100 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_PlayerApproachPhoebe1::
# 101 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerApproachPhoebe1
# 102 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 103 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 104 "data/maps/MtPyre_Summit/scripts.pory"

# 105 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_PlayerApproachPhoebe2::
# 106 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerApproachPhoebe2
# 107 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 108 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 109 "data/maps/MtPyre_Summit/scripts.pory"

# 110 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyApproachPlayer0::
# 111 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PHOEBE, MtPyre_Summit_Movement_OldLadyApproachPlayer0
# 112 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 113 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 114 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 115 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 116 "data/maps/MtPyre_Summit/scripts.pory"

# 117 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyApproachPlayer1::
# 118 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PHOEBE, MtPyre_Summit_Movement_OldLadyApproachPlayer1
# 119 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 120 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 121 "data/maps/MtPyre_Summit/scripts.pory"

# 122 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyApproachPlayer2::
# 123 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PHOEBE, MtPyre_Summit_Movement_OldLadyApproachPlayer2
# 124 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 125 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 126 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 127 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 128 "data/maps/MtPyre_Summit/scripts.pory"

# 129 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerApproachPhoebe0:
# 130 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 131 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 132 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_up
# 133 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 134 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 135 "data/maps/MtPyre_Summit/scripts.pory"

# 136 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerApproachPhoebe1:
# 137 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 138 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 139 "data/maps/MtPyre_Summit/scripts.pory"

# 140 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerApproachPhoebe2:
# 141 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 142 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 143 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_up
# 144 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 145 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 146 "data/maps/MtPyre_Summit/scripts.pory"

# 147 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_OldLadyApproachPlayer0:
# 148 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 149 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 150 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 151 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 152 "data/maps/MtPyre_Summit/scripts.pory"

# 153 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_OldLadyApproachPlayer1:
# 154 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 155 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 156 "data/maps/MtPyre_Summit/scripts.pory"

# 157 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_OldLadyApproachPlayer2:
# 158 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 159 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 160 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 161 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 162 "data/maps/MtPyre_Summit/scripts.pory"

# 163 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieFacePlayer0:
# 164 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 165 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 166 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 167 "data/maps/MtPyre_Summit/scripts.pory"

# 168 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieFacePlayer1:
# 169 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 170 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 171 "data/maps/MtPyre_Summit/scripts.pory"

# 172 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieFacePlayer2:
# 173 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 174 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 175 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 176 "data/maps/MtPyre_Summit/scripts.pory"

# 177 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldMan::
# 178 "data/maps/MtPyre_Summit/scripts.pory"
	lock
# 179 "data/maps/MtPyre_Summit/scripts.pory"
	faceplayer
# 180 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, MtPyre_Summit_EventScript_OldManAfterRayquaza
# 181 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_WillYouHearOutMyTale, MSGBOX_YESNO
# 182 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, YES, MtPyre_Summit_EventScript_OldManTale
# 183 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, NO, MtPyre_Summit_EventScript_DeclineOldManTale
# 184 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 185 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 186 "data/maps/MtPyre_Summit/scripts.pory"

# 187 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldManAfterRayquaza::
# 188 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_HearTheNewLegendOfHoenn, MSGBOX_YESNO
# 189 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, YES, MtPyre_Summit_EventScript_OldManNewTale
# 190 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, NO, MtPyre_Summit_EventScript_DeclineOldManTale
# 191 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 192 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 193 "data/maps/MtPyre_Summit/scripts.pory"

# 194 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldManTale::
# 195 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_GroudonKyogreTale, MSGBOX_DEFAULT
# 196 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 197 "data/maps/MtPyre_Summit/scripts.pory"

# 198 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_DeclineOldManTale::
# 199 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_WellThatTooIsFine, MSGBOX_DEFAULT
# 200 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 201 "data/maps/MtPyre_Summit/scripts.pory"

# 202 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldManNewTale::
# 203 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_HoennTrioTale, MSGBOX_DEFAULT
# 204 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 205 "data/maps/MtPyre_Summit/scripts.pory"

# 206 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLady::
# 207 "data/maps/MtPyre_Summit/scripts.pory"
	lock
# 208 "data/maps/MtPyre_Summit/scripts.pory"
	faceplayer
# 209 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_set FLAG_RETURNED_RED_OR_BLUE_ORB, MtPyre_Summit_EventScript_OldLadyAfterOrbsReturned
# 210 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_ge VAR_MT_PYRE_STATE, 3, MtPyre_Summit_EventScript_OldLadyOrbsReturned
# 211 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_set FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, MtPyre_Summit_EventScript_OldLadyLegendariesAwake
# 212 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_OrbsHaveBeenTaken, MSGBOX_DEFAULT
# 213 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 214 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 215 "data/maps/MtPyre_Summit/scripts.pory"

# 216 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyOrbsReturned::
# 217 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_ThoseTwoMenReturnedOrbs, MSGBOX_DEFAULT
# 218 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_RETURNED_RED_OR_BLUE_ORB
# 219 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 220 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 221 "data/maps/MtPyre_Summit/scripts.pory"

# 222 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyLegendariesAwake::
# 223 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_GroudonKyogreAwakened, MSGBOX_DEFAULT
# 224 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 225 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 226 "data/maps/MtPyre_Summit/scripts.pory"

# 227 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyAfterOrbsReturned::
# 228 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_SuperAncientPokemonTaughtUs, MSGBOX_DEFAULT
# 229 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 230 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 231 "data/maps/MtPyre_Summit/scripts.pory"

# 232 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieTrigger0::
# 233 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 234 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 0
# 235 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
# 236 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 237 "data/maps/MtPyre_Summit/scripts.pory"

# 238 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieTrigger1::
# 239 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 240 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 1
# 241 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
# 242 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 243 "data/maps/MtPyre_Summit/scripts.pory"

# 244 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieTrigger2::
# 245 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 246 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 2
# 247 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
# 248 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 249 "data/maps/MtPyre_Summit/scripts.pory"

# 250 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs::
# 251 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 252 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 253 "data/maps/MtPyre_Summit/scripts.pory"
	delay 60
# 254 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_ArchieMaxieBeginExit0
# 255 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_ArchieMaxieBeginExit1
# 256 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_ArchieMaxieBeginExit2
# 257 "data/maps/MtPyre_Summit/scripts.pory"
	playse SE_PIN
# 258 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_ExclamationMark
# 259 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 260 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_Delay48
# 261 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 262 "data/maps/MtPyre_Summit/scripts.pory"
	delay 30
# 263 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_MaxieApproachPlayer0
# 264 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_MaxieApproachPlayer1
# 265 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_MaxieApproachPlayer2
# 266 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_MaxieSilence, MSGBOX_DEFAULT
# 267 "data/maps/MtPyre_Summit/scripts.pory"
	closemessage
# 268 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_MaxieApproachArchie0
# 269 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_MaxieApproachArchie1
# 270 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_MaxieApproachArchie2
# 271 "data/maps/MtPyre_Summit/scripts.pory"
	delay 30
# 272 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 273 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 274 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 275 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_ARCHIE
# 276 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MAXIE
# 277 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_MT_PYRE_STATE, 3
# 278 "data/maps/MtPyre_Summit/scripts.pory"
	releaseall
# 279 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 280 "data/maps/MtPyre_Summit/scripts.pory"

# 281 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieBeginExit0::
# 282 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit0
# 283 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 284 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 285 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 286 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 287 "data/maps/MtPyre_Summit/scripts.pory"

# 288 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieBeginExit1::
# 289 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit1
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
MtPyre_Summit_EventScript_ArchieMaxieBeginExit2::
# 296 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit2
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
MtPyre_Summit_EventScript_MaxieApproachPlayer0::
# 303 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie0
# 304 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
# 305 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer0
# 306 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 307 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 308 "data/maps/MtPyre_Summit/scripts.pory"

# 309 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachPlayer1::
# 310 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie
# 311 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
# 312 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer1
# 313 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 314 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 315 "data/maps/MtPyre_Summit/scripts.pory"

# 316 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachPlayer2::
# 317 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie
# 318 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
# 319 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer2
# 320 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 321 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 322 "data/maps/MtPyre_Summit/scripts.pory"

# 323 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachArchie0::
# 324 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
# 325 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie0
# 326 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 327 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterRight
# 328 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 329 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 330 "data/maps/MtPyre_Summit/scripts.pory"

# 331 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachArchie1::
# 332 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
# 333 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie1
# 334 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 335 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterRight
# 336 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 337 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 338 "data/maps/MtPyre_Summit/scripts.pory"

# 339 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachArchie2::
# 340 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
# 341 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie2
# 342 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 343 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterRight
# 344 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 345 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 346 "data/maps/MtPyre_Summit/scripts.pory"

# 347 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerFaceMaxie0:
# 348 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 349 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 350 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 351 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 352 "data/maps/MtPyre_Summit/scripts.pory"

# 353 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerFaceMaxie:
# 354 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 355 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 356 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 357 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 358 "data/maps/MtPyre_Summit/scripts.pory"

# 359 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieExit:
# 360 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 361 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 362 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 363 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 364 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 365 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 366 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 367 "data/maps/MtPyre_Summit/scripts.pory"

# 368 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieExit:
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
MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit0:
# 378 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 379 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 380 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 381 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 382 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 383 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 384 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 385 "data/maps/MtPyre_Summit/scripts.pory"

# 386 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit1:
# 387 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 388 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 389 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 390 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 391 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 392 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 393 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 394 "data/maps/MtPyre_Summit/scripts.pory"

# 395 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit2:
# 396 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 397 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 398 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 399 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 400 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 401 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 402 "data/maps/MtPyre_Summit/scripts.pory"

# 403 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachPlayer0:
# 404 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 405 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 406 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 407 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 408 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 409 "data/maps/MtPyre_Summit/scripts.pory"

# 410 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachPlayer1:
# 411 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 412 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 413 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 414 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 415 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 416 "data/maps/MtPyre_Summit/scripts.pory"

# 417 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachPlayer2:
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
MtPyre_Summit_Movement_ArchieWatchMaxie:
# 425 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 426 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_up
# 427 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 428 "data/maps/MtPyre_Summit/scripts.pory"

# 429 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchMaxie:
# 430 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 431 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 432 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 433 "data/maps/MtPyre_Summit/scripts.pory"

# 434 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachArchie0:
# 435 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 436 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 437 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 438 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 439 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 440 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 441 "data/maps/MtPyre_Summit/scripts.pory"

# 442 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachArchie1:
# 443 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
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
MtPyre_Summit_Movement_MaxieApproachArchie2:
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
MtPyre_Summit_Movement_OldLadyLookAround:
# 457 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 458 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 459 "data/maps/MtPyre_Summit/scripts.pory"
	face_left
# 460 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 461 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 462 "data/maps/MtPyre_Summit/scripts.pory"
	face_down
# 463 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 464 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 465 "data/maps/MtPyre_Summit/scripts.pory"

# 466 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_Grunt1::
# 467 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_1, MtPyre_Summit_Text_Grunt1Intro, MtPyre_Summit_Text_Grunt1Defeat
# 468 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 469 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 470 "data/maps/MtPyre_Summit/scripts.pory"

# 471 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_Grunt2::
# 472 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_2, MtPyre_Summit_Text_Grunt2Intro, MtPyre_Summit_Text_Grunt2Defeat
# 473 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 474 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 475 "data/maps/MtPyre_Summit/scripts.pory"

# 476 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_Grunt3::
# 477 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_3, MtPyre_Summit_Text_Grunt3Intro, MtPyre_Summit_Text_Grunt3Defeat
# 478 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 479 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 480 "data/maps/MtPyre_Summit/scripts.pory"

# 481 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_Grunt4::
# 482 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_4, MtPyre_Summit_Text_Grunt4Intro, MtPyre_Summit_Text_Grunt4Defeat
# 483 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 484 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 485 "data/maps/MtPyre_Summit/scripts.pory"

# 486 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt1Intro:
# 487 "data/maps/MtPyre_Summit/scripts.pory"
	.string "No! Those Team Magma goons got\n"
# 488 "data/maps/MtPyre_Summit/scripts.pory"
	.string "here ahead of us!\p"
# 489 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We can't fall behind!$"
# 490 "data/maps/MtPyre_Summit/scripts.pory"

# 491 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt1Defeat:
# 492 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I thought you were one of the Magmas\n"
# 493 "data/maps/MtPyre_Summit/scripts.pory"
	.string "who happened to come back…$"
# 494 "data/maps/MtPyre_Summit/scripts.pory"

# 495 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt1PostBattle:
# 496 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Yeah, so you are strong…\n"
# 497 "data/maps/MtPyre_Summit/scripts.pory"
	.string "But there're a lot of us!$"
# 498 "data/maps/MtPyre_Summit/scripts.pory"

# 499 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt2Intro:
# 500 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Hah!\n"
# 501 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Too bad for you!\p"
# 502 "data/maps/MtPyre_Summit/scripts.pory"
	.string "If you came earlier, you only would've\n"
# 503 "data/maps/MtPyre_Summit/scripts.pory"
	.string "had to battle the wimpy Team Magma.\p"
# 504 "data/maps/MtPyre_Summit/scripts.pory"
	.string "But since you arrived now, you have\n"
# 505 "data/maps/MtPyre_Summit/scripts.pory"
	.string "to take on us toughies!$"
# 506 "data/maps/MtPyre_Summit/scripts.pory"

# 507 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt2Defeat:
# 508 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Urgh… I should've let you take on\n"
# 509 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Team Magma first…$"
# 510 "data/maps/MtPyre_Summit/scripts.pory"

# 511 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt2PostBattle:
# 512 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You don't know anything!\n"
# 513 "data/maps/MtPyre_Summit/scripts.pory"
	.string "So why are you messing with us?$"
# 514 "data/maps/MtPyre_Summit/scripts.pory"

# 515 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt3Intro:
# 516 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You…\n"
# 517 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We saw you at Rustboro.\p"
# 518 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You don't belong to either Team,\n"
# 519 "data/maps/MtPyre_Summit/scripts.pory"
	.string "so why would you be here?$"
# 520 "data/maps/MtPyre_Summit/scripts.pory"

# 521 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt3Defeat:
# 522 "data/maps/MtPyre_Summit/scripts.pory"
	.string "If you're going to mess with anyone,\n"
# 523 "data/maps/MtPyre_Summit/scripts.pory"
	.string "let it be Team Magma…$"
# 524 "data/maps/MtPyre_Summit/scripts.pory"

# 525 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt3PostBattle:
# 526 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Heh, it doesn't matter!\n"
# 527 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We bought ourselves some time!\p"
# 528 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Boss should have snatched what\n"
# 529 "data/maps/MtPyre_Summit/scripts.pory"
	.string "he was after!$"
# 530 "data/maps/MtPyre_Summit/scripts.pory"

# 531 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt4Intro:
# 532 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, I know!\n"
# 533 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You tried to join Team Magma,\l"
# 534 "data/maps/MtPyre_Summit/scripts.pory"
	.string "but they wouldn't have you!\p"
# 535 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Well, don't think that we'll let you\n"
# 536 "data/maps/MtPyre_Summit/scripts.pory"
	.string "join our Team Aqua!$"
# 537 "data/maps/MtPyre_Summit/scripts.pory"

# 538 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt4Defeat:
# 539 "data/maps/MtPyre_Summit/scripts.pory"
	.string "If you want to join Team Aqua that\n"
# 540 "data/maps/MtPyre_Summit/scripts.pory"
	.string "badly, we can consider it…$"
# 541 "data/maps/MtPyre_Summit/scripts.pory"

# 542 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt4PostBattle:
# 543 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We have a great combination going\n"
# 544 "data/maps/MtPyre_Summit/scripts.pory"
	.string "with us members and our leader.$"
# 545 "data/maps/MtPyre_Summit/scripts.pory"

# 546 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_ArchieDrat:
# 547 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Archie: Drat!\p"
# 548 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I thought it would be effortless to\n"
# 549 "data/maps/MtPyre_Summit/scripts.pory"
	.string "take the Red Orb.\p"
# 550 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I didn't expect that a former member of\n"
# 551 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the Elite Four would get in my way.$"
# 552 "data/maps/MtPyre_Summit/scripts.pory"

# 553 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_ArchieMaxieGotAhead:
# 554 "data/maps/MtPyre_Summit/scripts.pory"
	.string "What's a kid doing here?\n"
# 555 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Nevertheless…\p"
# 556 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Team Magma's Maxie got ahead of us, but\n"
# 557 "data/maps/MtPyre_Summit/scripts.pory"
	.string "there's no sense in dwelling on it.\p"
# 558 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Our operation in Slateport City is\n"
# 559 "data/maps/MtPyre_Summit/scripts.pory"
	.string "almost complete.\p"
# 560 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Once we're done there, we can regroup\n"
# 561 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and come back with even greater power!\p"
# 562 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Okay, Team!\n"
# 563 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We're pulling out!$"
# 564 "data/maps/MtPyre_Summit/scripts.pory"

# 565 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_BothOrbsTakenMagmaLeftThis:
# 566 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, no…\n"
# 567 "data/maps/MtPyre_Summit/scripts.pory"
	.string "This cannot happen…\p"
# 568 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Not only the BLUE ORB, but even\n"
# 569 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the RED ORB has been taken…\p"
# 570 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The BLUE ORB and RED ORB must never\n"
# 571 "data/maps/MtPyre_Summit/scripts.pory"
	.string "be separated. They belong together.\p"
# 572 "data/maps/MtPyre_Summit/scripts.pory"
	.string "What are those men trying to do with\n"
# 573 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the two ORBS?\p"
# 574 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …\n"
# 575 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …\p"
# 576 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, yes. Was it TEAM MAGMA who came\n"
# 577 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and took the BLUE ORB first?\p"
# 578 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Well, in their haste, they left this\n"
# 579 "data/maps/MtPyre_Summit/scripts.pory"
	.string "behind.\p"
# 580 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I couldn't imagine what exactly it\n"
# 581 "data/maps/MtPyre_Summit/scripts.pory"
	.string "could be.\p"
# 582 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I would like you to have it.\n"
# 583 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Perhaps it will be useful in some way.$"
# 584 "data/maps/MtPyre_Summit/scripts.pory"

# 585 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_OrbsHaveBeenTaken:
# 586 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The BLUE ORB and RED ORB taken by\n"
# 587 "data/maps/MtPyre_Summit/scripts.pory"
	.string "those sinister men…\p"
# 588 "data/maps/MtPyre_Summit/scripts.pory"
	.string "They must never be apart…\n"
# 589 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I fear something terrible will happen…$"
# 590 "data/maps/MtPyre_Summit/scripts.pory"

# 591 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_GroudonKyogreAwakened:
# 592 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, my goodness…\p"
# 593 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You say that both GROUDON and KYOGRE\n"
# 594 "data/maps/MtPyre_Summit/scripts.pory"
	.string "have been awakened?\p"
# 595 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It is said that the BLUE ORB and\n"
# 596 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the RED ORB quelled the rage of\l"
# 597 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the two Pokémon…\p"
# 598 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It is also said that the true owner\n"
# 599 "data/maps/MtPyre_Summit/scripts.pory"
	.string "of the ORBS still exists.\p"
# 600 "data/maps/MtPyre_Summit/scripts.pory"
	.string "However, no one knows who, or what\n"
# 601 "data/maps/MtPyre_Summit/scripts.pory"
	.string "exactly, the ORBS belong to.\p"
# 602 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It could be a human, or perhaps\n"
# 603 "data/maps/MtPyre_Summit/scripts.pory"
	.string "a Pokémon, but no one knows.$"
# 604 "data/maps/MtPyre_Summit/scripts.pory"

# 605 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_ThoseTwoMenReturnedOrbs:
# 606 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The two men who took the ORBS came\n"
# 607 "data/maps/MtPyre_Summit/scripts.pory"
	.string "back to return them on their own.\p"
# 608 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Those men…\n"
# 609 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Perhaps they are not so evil after all…$"
# 610 "data/maps/MtPyre_Summit/scripts.pory"

# 611 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_SuperAncientPokemonTaughtUs:
# 612 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The embodiments of the land, sea,\n"
# 613 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and the sky…\p"
# 614 "data/maps/MtPyre_Summit/scripts.pory"
	.string "That is said to be the identities of\n"
# 615 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the super-ancient Pokémon…\p"
# 616 "data/maps/MtPyre_Summit/scripts.pory"
	.string "In the same way that we humans and\n"
# 617 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Pokémon have life, our world, too,\l"
# 618 "data/maps/MtPyre_Summit/scripts.pory"
	.string "is alive…\p"
# 619 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The super-ancient Pokémon have\n"
# 620 "data/maps/MtPyre_Summit/scripts.pory"
	.string "taught us that…$"
# 621 "data/maps/MtPyre_Summit/scripts.pory"

# 622 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_WillYouHearOutMyTale:
# 623 "data/maps/MtPyre_Summit/scripts.pory"
	.string "MT. PYRE is where we calm the spirits\n"
# 624 "data/maps/MtPyre_Summit/scripts.pory"
	.string "of Pokémon that have passed on…\p"
# 625 "data/maps/MtPyre_Summit/scripts.pory"
	.string "This is a high place where one can\n"
# 626 "data/maps/MtPyre_Summit/scripts.pory"
	.string "see all of HOENN…\p"
# 627 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The disembodied spirits of Pokémon\n"
# 628 "data/maps/MtPyre_Summit/scripts.pory"
	.string "must find solace here…\p"
# 629 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Is it coincidence that you are here…\p"
# 630 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Will you hear out my tale? A tale long\n"
# 631 "data/maps/MtPyre_Summit/scripts.pory"
	.string "told in the HOENN region?$"
# 632 "data/maps/MtPyre_Summit/scripts.pory"

# 633 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_GroudonKyogreTale:
# 634 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It happened long, long ago…\p"
# 635 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was wracked by a ferocious\n"
# 636 "data/maps/MtPyre_Summit/scripts.pory"
	.string "clash between the Pokémon of the land\l"
# 637 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and the Pokémon of the sea…\p"
# 638 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon of the land raised\n"
# 639 "data/maps/MtPyre_Summit/scripts.pory"
	.string "mountains and created continents…\p"
# 640 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon of the sea raised huge\n"
# 641 "data/maps/MtPyre_Summit/scripts.pory"
	.string "waves and carved out oceans…\p"
# 642 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Their fierce duel raged without end.\p"
# 643 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was engulfed in massive\n"
# 644 "data/maps/MtPyre_Summit/scripts.pory"
	.string "infernos and vicious storms.\p"
# 645 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The BLUE ORB and the RED ORB brought\n"
# 646 "data/maps/MtPyre_Summit/scripts.pory"
	.string "an end to the calamity.\p"
# 647 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Light poured from the two ORBS and\n"
# 648 "data/maps/MtPyre_Summit/scripts.pory"
	.string "becalmed the enraged adversaries.\p"
# 649 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The pair, made docile, dove deep into\n"
# 650 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the sea where eventually they\l"
# 651 "data/maps/MtPyre_Summit/scripts.pory"
	.string "disappeared…$"
# 652 "data/maps/MtPyre_Summit/scripts.pory"

# 653 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_WellThatTooIsFine:
# 654 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I see…\n"
# 655 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Well, that, too, is fine…$"
# 656 "data/maps/MtPyre_Summit/scripts.pory"

# 657 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_MaxieSilence:
# 658 "data/maps/MtPyre_Summit/scripts.pory"
	.string "MAXIE: {PLAYER}…\p"
# 659 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …\n"
# 660 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …$"
# 661 "data/maps/MtPyre_Summit/scripts.pory"

# 662 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_HearTheNewLegendOfHoenn:
# 663 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It is my role to pass on the legends\n"
# 664 "data/maps/MtPyre_Summit/scripts.pory"
	.string "of HOENN to future generations.\p"
# 665 "data/maps/MtPyre_Summit/scripts.pory"
	.string "And the crisis that just ended in\n"
# 666 "data/maps/MtPyre_Summit/scripts.pory"
	.string "SOOTOPOLIS rewrote a legend…\p"
# 667 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Have you the time to hear the new\n"
# 668 "data/maps/MtPyre_Summit/scripts.pory"
	.string "legend of HOENN?$"
# 669 "data/maps/MtPyre_Summit/scripts.pory"

# 670 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_HoennTrioTale:
# 671 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It happened long, long ago…\p"
# 672 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was wracked by a ferocious\n"
# 673 "data/maps/MtPyre_Summit/scripts.pory"
	.string "clash between the Pokémon of the land\l"
# 674 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and the Pokémon of the sea…\p"
# 675 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon of the land raised\n"
# 676 "data/maps/MtPyre_Summit/scripts.pory"
	.string "mountains and created continents…\p"
# 677 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon of the sea raised huge\n"
# 678 "data/maps/MtPyre_Summit/scripts.pory"
	.string "waves and carved out oceans…\p"
# 679 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Their fierce duel raged without end.\p"
# 680 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was engulfed in massive\n"
# 681 "data/maps/MtPyre_Summit/scripts.pory"
	.string "fires and vicious storms.\p"
# 682 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It was then that the Pokémon of\n"
# 683 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the sky descended from a storm.\p"
# 684 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon, shining a vivid green,\n"
# 685 "data/maps/MtPyre_Summit/scripts.pory"
	.string "becalmed the two enraged Pokémon.\p"
# 686 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Then, its duty done, the green Pokémon\n"
# 687 "data/maps/MtPyre_Summit/scripts.pory"
	.string "flew off into the wild blue yonder…$"
# 688 "data/maps/MtPyre_Summit/scripts.pory"

# 689 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_YoureNotAfter:
# 690 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You're not after the Red Orb as well,\n"
# 691 "data/maps/MtPyre_Summit/scripts.pory"
	.string "are you?\p"
# 692 "data/maps/MtPyre_Summit/scripts.pory"
	.string "What? You say you came here looking\n"
# 693 "data/maps/MtPyre_Summit/scripts.pory"
	.string "for Team Aqua's leader?\p"
# 694 "data/maps/MtPyre_Summit/scripts.pory"
	.string "That was him alright, he's a ruthless\n"
# 695 "data/maps/MtPyre_Summit/scripts.pory"
	.string "man who wants to expand the world's\l"
# 696 "data/maps/MtPyre_Summit/scripts.pory"
	.string "oceans at all costs…\p"
# 697 "data/maps/MtPyre_Summit/scripts.pory"
	.string "His rival, Maxie of Team Magma, came\n"
# 698 "data/maps/MtPyre_Summit/scripts.pory"
	.string "here yesterday and took the Blue Orb.\p"
# 699 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I've trained at Mt. Pyre my whole life\n"
# 700 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and felt it was my duty to protect the\l"
# 701 "data/maps/MtPyre_Summit/scripts.pory"
	.string "remaining Orb.\p"
# 702 "data/maps/MtPyre_Summit/scripts.pory"
	.string "These Orbs have an immense power, The\n"
# 703 "data/maps/MtPyre_Summit/scripts.pory"
	.string "world could be destroyed with them in\l"
# 704 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the wrong hands…\p"
# 705 "data/maps/MtPyre_Summit/scripts.pory"
	.string "If I heard him right, Archie is going\n"
# 706 "data/maps/MtPyre_Summit/scripts.pory"
	.string "to Slateport City next.\p"
# 707 "data/maps/MtPyre_Summit/scripts.pory"
	.string "If you're going to keep pursuing Team\n"
# 708 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Aqua, I'll need to make sure your\l"
# 709 "data/maps/MtPyre_Summit/scripts.pory"
	.string "battling skills are up to the task!$"
# 710 "data/maps/MtPyre_Summit/scripts.pory"

# 711 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_WowYoureCapable:
# 712 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Wow, you're quite a capable trainer!\p"
# 713 "data/maps/MtPyre_Summit/scripts.pory"
	.string "If someone like you is challenging\n"
# 714 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Team Aqua, I feel quite confident\l"
# 715 "data/maps/MtPyre_Summit/scripts.pory"
	.string "in this region's future.\p"
# 716 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I hope you can make good use of this\n"
# 717 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Heart Scale.$"
# 718 "data/maps/MtPyre_Summit/scripts.pory"

# 719 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_PerhapsICould:
# 720 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Perhaps I could also help by\n"
# 721 "data/maps/MtPyre_Summit/scripts.pory"
	.string "teaching your Pokémon some moves?$"
# 722 "data/maps/MtPyre_Summit/scripts.pory"

# 723 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Defeat:
# 724 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, darn.\n"
# 725 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I've gone and lost.$"
