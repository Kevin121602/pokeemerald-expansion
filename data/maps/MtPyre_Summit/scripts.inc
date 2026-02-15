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
	releaseall
# 82 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 83 "data/maps/MtPyre_Summit/scripts.pory"

# 84 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieFacePlayer0::
# 85 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieFacePlayer0
# 86 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 87 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 88 "data/maps/MtPyre_Summit/scripts.pory"

# 89 "data/maps/MtPyre_Summit/scripts.pory"
@ Archie is already facing player
# 90 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieFacePlayer1::
# 91 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieFacePlayer1
# 92 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 93 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 94 "data/maps/MtPyre_Summit/scripts.pory"

# 95 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieFacePlayer2::
# 96 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieFacePlayer2
# 97 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 98 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 99 "data/maps/MtPyre_Summit/scripts.pory"

# 100 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_PlayerApproachPhoebe0::
# 101 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerApproachPhoebe0
# 102 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 103 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 104 "data/maps/MtPyre_Summit/scripts.pory"

# 105 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_PlayerApproachPhoebe1::
# 106 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerApproachPhoebe1
# 107 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 108 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 109 "data/maps/MtPyre_Summit/scripts.pory"

# 110 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_PlayerApproachPhoebe2::
# 111 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerApproachPhoebe2
# 112 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 113 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 114 "data/maps/MtPyre_Summit/scripts.pory"

# 115 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyApproachPlayer0::
# 116 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PHOEBE, MtPyre_Summit_Movement_OldLadyApproachPlayer0
# 117 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 118 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 119 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 120 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 121 "data/maps/MtPyre_Summit/scripts.pory"

# 122 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyApproachPlayer1::
# 123 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PHOEBE, MtPyre_Summit_Movement_OldLadyApproachPlayer1
# 124 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 125 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 126 "data/maps/MtPyre_Summit/scripts.pory"

# 127 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyApproachPlayer2::
# 128 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_PHOEBE, MtPyre_Summit_Movement_OldLadyApproachPlayer2
# 129 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 130 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 131 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 132 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 133 "data/maps/MtPyre_Summit/scripts.pory"

# 134 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerApproachPhoebe0:
# 135 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 136 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 137 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_up
# 138 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 139 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 140 "data/maps/MtPyre_Summit/scripts.pory"

# 141 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerApproachPhoebe1:
# 142 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 143 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 144 "data/maps/MtPyre_Summit/scripts.pory"

# 145 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerApproachPhoebe2:
# 146 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 147 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 148 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_up
# 149 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 150 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 151 "data/maps/MtPyre_Summit/scripts.pory"

# 152 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_OldLadyApproachPlayer0:
# 153 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 154 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 155 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 156 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 157 "data/maps/MtPyre_Summit/scripts.pory"

# 158 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_OldLadyApproachPlayer1:
# 159 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 160 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 161 "data/maps/MtPyre_Summit/scripts.pory"

# 162 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_OldLadyApproachPlayer2:
# 163 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 164 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 165 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 166 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 167 "data/maps/MtPyre_Summit/scripts.pory"

# 168 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieFacePlayer0:
# 169 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 170 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 171 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 172 "data/maps/MtPyre_Summit/scripts.pory"

# 173 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieFacePlayer1:
# 174 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 175 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 176 "data/maps/MtPyre_Summit/scripts.pory"

# 177 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieFacePlayer2:
# 178 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 179 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 180 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 181 "data/maps/MtPyre_Summit/scripts.pory"

# 182 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldMan::
# 183 "data/maps/MtPyre_Summit/scripts.pory"
	lock
# 184 "data/maps/MtPyre_Summit/scripts.pory"
	faceplayer
# 185 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_set FLAG_SOOTOPOLIS_ARCHIE_MAXIE_LEAVE, MtPyre_Summit_EventScript_OldManAfterRayquaza
# 186 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_WillYouHearOutMyTale, MSGBOX_YESNO
# 187 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, YES, MtPyre_Summit_EventScript_OldManTale
# 188 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, NO, MtPyre_Summit_EventScript_DeclineOldManTale
# 189 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 190 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 191 "data/maps/MtPyre_Summit/scripts.pory"

# 192 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldManAfterRayquaza::
# 193 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_HearTheNewLegendOfHoenn, MSGBOX_YESNO
# 194 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, YES, MtPyre_Summit_EventScript_OldManNewTale
# 195 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_RESULT, NO, MtPyre_Summit_EventScript_DeclineOldManTale
# 196 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 197 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 198 "data/maps/MtPyre_Summit/scripts.pory"

# 199 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldManTale::
# 200 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_GroudonKyogreTale, MSGBOX_DEFAULT
# 201 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 202 "data/maps/MtPyre_Summit/scripts.pory"

# 203 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_DeclineOldManTale::
# 204 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_WellThatTooIsFine, MSGBOX_DEFAULT
# 205 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 206 "data/maps/MtPyre_Summit/scripts.pory"

# 207 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldManNewTale::
# 208 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_HoennTrioTale, MSGBOX_DEFAULT
# 209 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 210 "data/maps/MtPyre_Summit/scripts.pory"

# 211 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLady::
# 212 "data/maps/MtPyre_Summit/scripts.pory"
	lock
# 213 "data/maps/MtPyre_Summit/scripts.pory"
	faceplayer
# 214 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_set FLAG_RETURNED_RED_OR_BLUE_ORB, MtPyre_Summit_EventScript_OldLadyAfterOrbsReturned
# 215 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_ge VAR_MT_PYRE_STATE, 3, MtPyre_Summit_EventScript_OldLadyOrbsReturned
# 216 "data/maps/MtPyre_Summit/scripts.pory"
	goto_if_set FLAG_KYOGRE_ESCAPED_SEAFLOOR_CAVERN, MtPyre_Summit_EventScript_OldLadyLegendariesAwake
# 217 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_OrbsHaveBeenTaken, MSGBOX_DEFAULT
# 218 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 219 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 220 "data/maps/MtPyre_Summit/scripts.pory"

# 221 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyOrbsReturned::
# 222 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_ThoseTwoMenReturnedOrbs, MSGBOX_DEFAULT
# 223 "data/maps/MtPyre_Summit/scripts.pory"
	setflag FLAG_RETURNED_RED_OR_BLUE_ORB
# 224 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 225 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 226 "data/maps/MtPyre_Summit/scripts.pory"

# 227 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyLegendariesAwake::
# 228 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_GroudonKyogreAwakened, MSGBOX_DEFAULT
# 229 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 230 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 231 "data/maps/MtPyre_Summit/scripts.pory"

# 232 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_OldLadyAfterOrbsReturned::
# 233 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_SuperAncientPokemonTaughtUs, MSGBOX_DEFAULT
# 234 "data/maps/MtPyre_Summit/scripts.pory"
	release
# 235 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 236 "data/maps/MtPyre_Summit/scripts.pory"

# 237 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieTrigger0::
# 238 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 239 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 0
# 240 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
# 241 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 242 "data/maps/MtPyre_Summit/scripts.pory"

# 243 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieTrigger1::
# 244 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 245 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 1
# 246 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
# 247 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 248 "data/maps/MtPyre_Summit/scripts.pory"

# 249 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieTrigger2::
# 250 "data/maps/MtPyre_Summit/scripts.pory"
	lockall
# 251 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_0x8008, 2
# 252 "data/maps/MtPyre_Summit/scripts.pory"
	goto MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs
# 253 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 254 "data/maps/MtPyre_Summit/scripts.pory"

# 255 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieReturnOrbs::
# 256 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 257 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 258 "data/maps/MtPyre_Summit/scripts.pory"
	delay 60
# 259 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_ArchieMaxieBeginExit0
# 260 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_ArchieMaxieBeginExit1
# 261 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_ArchieMaxieBeginExit2
# 262 "data/maps/MtPyre_Summit/scripts.pory"
	playse SE_PIN
# 263 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_ExclamationMark
# 264 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 265 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, Common_Movement_Delay48
# 266 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 267 "data/maps/MtPyre_Summit/scripts.pory"
	delay 30
# 268 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_MaxieApproachPlayer0
# 269 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_MaxieApproachPlayer1
# 270 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_MaxieApproachPlayer2
# 271 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_MaxieSilence, MSGBOX_DEFAULT
# 272 "data/maps/MtPyre_Summit/scripts.pory"
	closemessage
# 273 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 0, MtPyre_Summit_EventScript_MaxieApproachArchie0
# 274 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 1, MtPyre_Summit_EventScript_MaxieApproachArchie1
# 275 "data/maps/MtPyre_Summit/scripts.pory"
	call_if_eq VAR_0x8008, 2, MtPyre_Summit_EventScript_MaxieApproachArchie2
# 276 "data/maps/MtPyre_Summit/scripts.pory"
	delay 30
# 277 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 278 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 279 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 280 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_ARCHIE
# 281 "data/maps/MtPyre_Summit/scripts.pory"
	removeobject LOCALID_MAXIE
# 282 "data/maps/MtPyre_Summit/scripts.pory"
	setvar VAR_MT_PYRE_STATE, 3
# 283 "data/maps/MtPyre_Summit/scripts.pory"
	releaseall
# 284 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 285 "data/maps/MtPyre_Summit/scripts.pory"

# 286 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieBeginExit0::
# 287 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit0
# 288 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 289 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 290 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 291 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 292 "data/maps/MtPyre_Summit/scripts.pory"

# 293 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieBeginExit1::
# 294 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit1
# 295 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 296 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 297 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 298 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 299 "data/maps/MtPyre_Summit/scripts.pory"

# 300 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_ArchieMaxieBeginExit2::
# 301 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit2
# 302 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieExit
# 303 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieExit
# 304 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 305 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 306 "data/maps/MtPyre_Summit/scripts.pory"

# 307 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachPlayer0::
# 308 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie0
# 309 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
# 310 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer0
# 311 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 312 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 313 "data/maps/MtPyre_Summit/scripts.pory"

# 314 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachPlayer1::
# 315 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie
# 316 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
# 317 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer1
# 318 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 319 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 320 "data/maps/MtPyre_Summit/scripts.pory"

# 321 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachPlayer2::
# 322 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerFaceMaxie
# 323 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, MtPyre_Summit_Movement_ArchieWatchMaxie
# 324 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachPlayer2
# 325 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 326 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 327 "data/maps/MtPyre_Summit/scripts.pory"

# 328 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachArchie0::
# 329 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
# 330 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie0
# 331 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 332 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterRight
# 333 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 334 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 335 "data/maps/MtPyre_Summit/scripts.pory"

# 336 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachArchie1::
# 337 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
# 338 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie1
# 339 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 340 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterRight
# 341 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 342 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 343 "data/maps/MtPyre_Summit/scripts.pory"

# 344 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_MaxieApproachArchie2::
# 345 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MtPyre_Summit_Movement_PlayerWatchMaxie
# 346 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_MAXIE, MtPyre_Summit_Movement_MaxieApproachArchie2
# 347 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 348 "data/maps/MtPyre_Summit/scripts.pory"
	applymovement LOCALID_ARCHIE, Common_Movement_WalkInPlaceFasterRight
# 349 "data/maps/MtPyre_Summit/scripts.pory"
	waitmovement 0
# 350 "data/maps/MtPyre_Summit/scripts.pory"
	return
# 351 "data/maps/MtPyre_Summit/scripts.pory"

# 352 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerFaceMaxie0:
# 353 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 354 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 355 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 356 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 357 "data/maps/MtPyre_Summit/scripts.pory"

# 358 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerFaceMaxie:
# 359 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 360 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 361 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 362 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 363 "data/maps/MtPyre_Summit/scripts.pory"

# 364 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieExit:
# 365 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
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
	step_end
# 372 "data/maps/MtPyre_Summit/scripts.pory"

# 373 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieExit:
# 374 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
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
	step_end
# 381 "data/maps/MtPyre_Summit/scripts.pory"

# 382 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit0:
# 383 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 384 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 385 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 386 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 387 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 388 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 389 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 390 "data/maps/MtPyre_Summit/scripts.pory"

# 391 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit1:
# 392 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 393 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 394 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 395 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 396 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 397 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 398 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 399 "data/maps/MtPyre_Summit/scripts.pory"

# 400 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchArchieMaxieExit2:
# 401 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 402 "data/maps/MtPyre_Summit/scripts.pory"
	delay_8
# 403 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 404 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 405 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 406 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 407 "data/maps/MtPyre_Summit/scripts.pory"

# 408 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachPlayer0:
# 409 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 410 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 411 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 412 "data/maps/MtPyre_Summit/scripts.pory"
	walk_left
# 413 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 414 "data/maps/MtPyre_Summit/scripts.pory"

# 415 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachPlayer1:
# 416 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 417 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 418 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 419 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 420 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 421 "data/maps/MtPyre_Summit/scripts.pory"

# 422 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachPlayer2:
# 423 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 424 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 425 "data/maps/MtPyre_Summit/scripts.pory"
	walk_up
# 426 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_right
# 427 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 428 "data/maps/MtPyre_Summit/scripts.pory"

# 429 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_ArchieWatchMaxie:
# 430 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 431 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_up
# 432 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 433 "data/maps/MtPyre_Summit/scripts.pory"

# 434 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_PlayerWatchMaxie:
# 435 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 436 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_down
# 437 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 438 "data/maps/MtPyre_Summit/scripts.pory"

# 439 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachArchie0:
# 440 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 441 "data/maps/MtPyre_Summit/scripts.pory"
	walk_right
# 442 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 443 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 444 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 445 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 446 "data/maps/MtPyre_Summit/scripts.pory"

# 447 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachArchie1:
# 448 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 449 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 450 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 451 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 452 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 453 "data/maps/MtPyre_Summit/scripts.pory"

# 454 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_MaxieApproachArchie2:
# 455 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 456 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 457 "data/maps/MtPyre_Summit/scripts.pory"
	walk_down
# 458 "data/maps/MtPyre_Summit/scripts.pory"
	walk_in_place_faster_left
# 459 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 460 "data/maps/MtPyre_Summit/scripts.pory"

# 461 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Movement_OldLadyLookAround:
# 462 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 463 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 464 "data/maps/MtPyre_Summit/scripts.pory"
	face_left
# 465 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 466 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 467 "data/maps/MtPyre_Summit/scripts.pory"
	face_down
# 468 "data/maps/MtPyre_Summit/scripts.pory"
	delay_16
# 469 "data/maps/MtPyre_Summit/scripts.pory"
	step_end
# 470 "data/maps/MtPyre_Summit/scripts.pory"

# 471 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_Grunt1::
# 472 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_1, MtPyre_Summit_Text_Grunt1Intro, MtPyre_Summit_Text_Grunt1Defeat
# 473 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt1PostBattle, MSGBOX_AUTOCLOSE
# 474 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 475 "data/maps/MtPyre_Summit/scripts.pory"

# 476 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_Grunt2::
# 477 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_2, MtPyre_Summit_Text_Grunt2Intro, MtPyre_Summit_Text_Grunt2Defeat
# 478 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt2PostBattle, MSGBOX_AUTOCLOSE
# 479 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 480 "data/maps/MtPyre_Summit/scripts.pory"

# 481 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_Grunt3::
# 482 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_3, MtPyre_Summit_Text_Grunt3Intro, MtPyre_Summit_Text_Grunt3Defeat
# 483 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt3PostBattle, MSGBOX_AUTOCLOSE
# 484 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 485 "data/maps/MtPyre_Summit/scripts.pory"

# 486 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_EventScript_Grunt4::
# 487 "data/maps/MtPyre_Summit/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_4, MtPyre_Summit_Text_Grunt4Intro, MtPyre_Summit_Text_Grunt4Defeat
# 488 "data/maps/MtPyre_Summit/scripts.pory"
	msgbox MtPyre_Summit_Text_Grunt4PostBattle, MSGBOX_AUTOCLOSE
# 489 "data/maps/MtPyre_Summit/scripts.pory"
	end
# 490 "data/maps/MtPyre_Summit/scripts.pory"

# 491 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt1Intro:
# 492 "data/maps/MtPyre_Summit/scripts.pory"
	.string "No! Those Team Magma goons got\n"
# 493 "data/maps/MtPyre_Summit/scripts.pory"
	.string "here ahead of us!\p"
# 494 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We can't fall behind!$"
# 495 "data/maps/MtPyre_Summit/scripts.pory"

# 496 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt1Defeat:
# 497 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I thought you were one of the Magmas\n"
# 498 "data/maps/MtPyre_Summit/scripts.pory"
	.string "who happened to come back…$"
# 499 "data/maps/MtPyre_Summit/scripts.pory"

# 500 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt1PostBattle:
# 501 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Yeah, so you are strong…\n"
# 502 "data/maps/MtPyre_Summit/scripts.pory"
	.string "But there're a lot of us!$"
# 503 "data/maps/MtPyre_Summit/scripts.pory"

# 504 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt2Intro:
# 505 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Hah!\n"
# 506 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Too bad for you!\p"
# 507 "data/maps/MtPyre_Summit/scripts.pory"
	.string "If you came earlier, you only would've\n"
# 508 "data/maps/MtPyre_Summit/scripts.pory"
	.string "had to battle the wimpy Team Magma.\p"
# 509 "data/maps/MtPyre_Summit/scripts.pory"
	.string "But since you arrived now, you have\n"
# 510 "data/maps/MtPyre_Summit/scripts.pory"
	.string "to take on us toughies!$"
# 511 "data/maps/MtPyre_Summit/scripts.pory"

# 512 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt2Defeat:
# 513 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Urgh… I should've let you take on\n"
# 514 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Team Magma first…$"
# 515 "data/maps/MtPyre_Summit/scripts.pory"

# 516 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt2PostBattle:
# 517 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You don't know anything!\n"
# 518 "data/maps/MtPyre_Summit/scripts.pory"
	.string "So why are you messing with us?$"
# 519 "data/maps/MtPyre_Summit/scripts.pory"

# 520 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt3Intro:
# 521 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You…\n"
# 522 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We saw you at Rustboro.\p"
# 523 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You don't belong to either Team,\n"
# 524 "data/maps/MtPyre_Summit/scripts.pory"
	.string "so why would you be here?$"
# 525 "data/maps/MtPyre_Summit/scripts.pory"

# 526 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt3Defeat:
# 527 "data/maps/MtPyre_Summit/scripts.pory"
	.string "If you're going to mess with anyone,\n"
# 528 "data/maps/MtPyre_Summit/scripts.pory"
	.string "let it be Team Magma…$"
# 529 "data/maps/MtPyre_Summit/scripts.pory"

# 530 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt3PostBattle:
# 531 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Heh, it doesn't matter!\n"
# 532 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We bought ourselves some time!\p"
# 533 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Boss should have snatched what\n"
# 534 "data/maps/MtPyre_Summit/scripts.pory"
	.string "he was after!$"
# 535 "data/maps/MtPyre_Summit/scripts.pory"

# 536 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt4Intro:
# 537 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, I know!\n"
# 538 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You tried to join Team Magma,\l"
# 539 "data/maps/MtPyre_Summit/scripts.pory"
	.string "but they wouldn't have you!\p"
# 540 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Well, don't think that we'll let you\n"
# 541 "data/maps/MtPyre_Summit/scripts.pory"
	.string "join our Team Aqua!$"
# 542 "data/maps/MtPyre_Summit/scripts.pory"

# 543 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt4Defeat:
# 544 "data/maps/MtPyre_Summit/scripts.pory"
	.string "If you want to join Team Aqua that\n"
# 545 "data/maps/MtPyre_Summit/scripts.pory"
	.string "badly, we can consider it…$"
# 546 "data/maps/MtPyre_Summit/scripts.pory"

# 547 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Grunt4PostBattle:
# 548 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We have a great combination going\n"
# 549 "data/maps/MtPyre_Summit/scripts.pory"
	.string "with us members and our leader.$"
# 550 "data/maps/MtPyre_Summit/scripts.pory"

# 551 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_ArchieDrat:
# 552 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Archie: Drat!\p"
# 553 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I thought it would be effortless to\n"
# 554 "data/maps/MtPyre_Summit/scripts.pory"
	.string "take the Red Orb.\p"
# 555 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I didn't expect that a former member of\n"
# 556 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the Elite Four would get in my way.$"
# 557 "data/maps/MtPyre_Summit/scripts.pory"

# 558 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_ArchieMaxieGotAhead:
# 559 "data/maps/MtPyre_Summit/scripts.pory"
	.string "What's a kid doing here?\n"
# 560 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Nevertheless…\p"
# 561 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Team Magma's Maxie got ahead of us, but\n"
# 562 "data/maps/MtPyre_Summit/scripts.pory"
	.string "there's no sense in dwelling on it.\p"
# 563 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Our operation in Slateport City is\n"
# 564 "data/maps/MtPyre_Summit/scripts.pory"
	.string "almost complete.\p"
# 565 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Once we're done there, we can regroup\n"
# 566 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and come back with even greater power!\p"
# 567 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Okay, Team!\n"
# 568 "data/maps/MtPyre_Summit/scripts.pory"
	.string "We're pulling out!$"
# 569 "data/maps/MtPyre_Summit/scripts.pory"

# 570 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_BothOrbsTakenMagmaLeftThis:
# 571 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, no…\n"
# 572 "data/maps/MtPyre_Summit/scripts.pory"
	.string "This cannot happen…\p"
# 573 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Not only the BLUE ORB, but even\n"
# 574 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the RED ORB has been taken…\p"
# 575 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The BLUE ORB and RED ORB must never\n"
# 576 "data/maps/MtPyre_Summit/scripts.pory"
	.string "be separated. They belong together.\p"
# 577 "data/maps/MtPyre_Summit/scripts.pory"
	.string "What are those men trying to do with\n"
# 578 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the two ORBS?\p"
# 579 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …\n"
# 580 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …\p"
# 581 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, yes. Was it TEAM MAGMA who came\n"
# 582 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and took the BLUE ORB first?\p"
# 583 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Well, in their haste, they left this\n"
# 584 "data/maps/MtPyre_Summit/scripts.pory"
	.string "behind.\p"
# 585 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I couldn't imagine what exactly it\n"
# 586 "data/maps/MtPyre_Summit/scripts.pory"
	.string "could be.\p"
# 587 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I would like you to have it.\n"
# 588 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Perhaps it will be useful in some way.$"
# 589 "data/maps/MtPyre_Summit/scripts.pory"

# 590 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_OrbsHaveBeenTaken:
# 591 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The BLUE ORB and RED ORB taken by\n"
# 592 "data/maps/MtPyre_Summit/scripts.pory"
	.string "those sinister men…\p"
# 593 "data/maps/MtPyre_Summit/scripts.pory"
	.string "They must never be apart…\n"
# 594 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I fear something terrible will happen…$"
# 595 "data/maps/MtPyre_Summit/scripts.pory"

# 596 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_GroudonKyogreAwakened:
# 597 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, my goodness…\p"
# 598 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You say that both GROUDON and KYOGRE\n"
# 599 "data/maps/MtPyre_Summit/scripts.pory"
	.string "have been awakened?\p"
# 600 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It is said that the BLUE ORB and\n"
# 601 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the RED ORB quelled the rage of\l"
# 602 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the two Pokémon…\p"
# 603 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It is also said that the true owner\n"
# 604 "data/maps/MtPyre_Summit/scripts.pory"
	.string "of the ORBS still exists.\p"
# 605 "data/maps/MtPyre_Summit/scripts.pory"
	.string "However, no one knows who, or what\n"
# 606 "data/maps/MtPyre_Summit/scripts.pory"
	.string "exactly, the ORBS belong to.\p"
# 607 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It could be a human, or perhaps\n"
# 608 "data/maps/MtPyre_Summit/scripts.pory"
	.string "a Pokémon, but no one knows.$"
# 609 "data/maps/MtPyre_Summit/scripts.pory"

# 610 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_ThoseTwoMenReturnedOrbs:
# 611 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The two men who took the ORBS came\n"
# 612 "data/maps/MtPyre_Summit/scripts.pory"
	.string "back to return them on their own.\p"
# 613 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Those men…\n"
# 614 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Perhaps they are not so evil after all…$"
# 615 "data/maps/MtPyre_Summit/scripts.pory"

# 616 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_SuperAncientPokemonTaughtUs:
# 617 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The embodiments of the land, sea,\n"
# 618 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and the sky…\p"
# 619 "data/maps/MtPyre_Summit/scripts.pory"
	.string "That is said to be the identities of\n"
# 620 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the super-ancient Pokémon…\p"
# 621 "data/maps/MtPyre_Summit/scripts.pory"
	.string "In the same way that we humans and\n"
# 622 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Pokémon have life, our world, too,\l"
# 623 "data/maps/MtPyre_Summit/scripts.pory"
	.string "is alive…\p"
# 624 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The super-ancient Pokémon have\n"
# 625 "data/maps/MtPyre_Summit/scripts.pory"
	.string "taught us that…$"
# 626 "data/maps/MtPyre_Summit/scripts.pory"

# 627 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_WillYouHearOutMyTale:
# 628 "data/maps/MtPyre_Summit/scripts.pory"
	.string "MT. PYRE is where we calm the spirits\n"
# 629 "data/maps/MtPyre_Summit/scripts.pory"
	.string "of Pokémon that have passed on…\p"
# 630 "data/maps/MtPyre_Summit/scripts.pory"
	.string "This is a high place where one can\n"
# 631 "data/maps/MtPyre_Summit/scripts.pory"
	.string "see all of HOENN…\p"
# 632 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The disembodied spirits of Pokémon\n"
# 633 "data/maps/MtPyre_Summit/scripts.pory"
	.string "must find solace here…\p"
# 634 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Is it coincidence that you are here…\p"
# 635 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Will you hear out my tale? A tale long\n"
# 636 "data/maps/MtPyre_Summit/scripts.pory"
	.string "told in the HOENN region?$"
# 637 "data/maps/MtPyre_Summit/scripts.pory"

# 638 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_GroudonKyogreTale:
# 639 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It happened long, long ago…\p"
# 640 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was wracked by a ferocious\n"
# 641 "data/maps/MtPyre_Summit/scripts.pory"
	.string "clash between the Pokémon of the land\l"
# 642 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and the Pokémon of the sea…\p"
# 643 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon of the land raised\n"
# 644 "data/maps/MtPyre_Summit/scripts.pory"
	.string "mountains and created continents…\p"
# 645 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon of the sea raised huge\n"
# 646 "data/maps/MtPyre_Summit/scripts.pory"
	.string "waves and carved out oceans…\p"
# 647 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Their fierce duel raged without end.\p"
# 648 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was engulfed in massive\n"
# 649 "data/maps/MtPyre_Summit/scripts.pory"
	.string "infernos and vicious storms.\p"
# 650 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The BLUE ORB and the RED ORB brought\n"
# 651 "data/maps/MtPyre_Summit/scripts.pory"
	.string "an end to the calamity.\p"
# 652 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Light poured from the two ORBS and\n"
# 653 "data/maps/MtPyre_Summit/scripts.pory"
	.string "becalmed the enraged adversaries.\p"
# 654 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The pair, made docile, dove deep into\n"
# 655 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the sea where eventually they\l"
# 656 "data/maps/MtPyre_Summit/scripts.pory"
	.string "disappeared…$"
# 657 "data/maps/MtPyre_Summit/scripts.pory"

# 658 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_WellThatTooIsFine:
# 659 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I see…\n"
# 660 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Well, that, too, is fine…$"
# 661 "data/maps/MtPyre_Summit/scripts.pory"

# 662 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_MaxieSilence:
# 663 "data/maps/MtPyre_Summit/scripts.pory"
	.string "MAXIE: {PLAYER}…\p"
# 664 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …\n"
# 665 "data/maps/MtPyre_Summit/scripts.pory"
	.string "… … … … … …$"
# 666 "data/maps/MtPyre_Summit/scripts.pory"

# 667 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_HearTheNewLegendOfHoenn:
# 668 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It is my role to pass on the legends\n"
# 669 "data/maps/MtPyre_Summit/scripts.pory"
	.string "of HOENN to future generations.\p"
# 670 "data/maps/MtPyre_Summit/scripts.pory"
	.string "And the crisis that just ended in\n"
# 671 "data/maps/MtPyre_Summit/scripts.pory"
	.string "SOOTOPOLIS rewrote a legend…\p"
# 672 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Have you the time to hear the new\n"
# 673 "data/maps/MtPyre_Summit/scripts.pory"
	.string "legend of HOENN?$"
# 674 "data/maps/MtPyre_Summit/scripts.pory"

# 675 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_HoennTrioTale:
# 676 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It happened long, long ago…\p"
# 677 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was wracked by a ferocious\n"
# 678 "data/maps/MtPyre_Summit/scripts.pory"
	.string "clash between the Pokémon of the land\l"
# 679 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and the Pokémon of the sea…\p"
# 680 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon of the land raised\n"
# 681 "data/maps/MtPyre_Summit/scripts.pory"
	.string "mountains and created continents…\p"
# 682 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon of the sea raised huge\n"
# 683 "data/maps/MtPyre_Summit/scripts.pory"
	.string "waves and carved out oceans…\p"
# 684 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Their fierce duel raged without end.\p"
# 685 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The world was engulfed in massive\n"
# 686 "data/maps/MtPyre_Summit/scripts.pory"
	.string "fires and vicious storms.\p"
# 687 "data/maps/MtPyre_Summit/scripts.pory"
	.string "It was then that the Pokémon of\n"
# 688 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the sky descended from a storm.\p"
# 689 "data/maps/MtPyre_Summit/scripts.pory"
	.string "The Pokémon, shining a vivid green,\n"
# 690 "data/maps/MtPyre_Summit/scripts.pory"
	.string "becalmed the two enraged Pokémon.\p"
# 691 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Then, its duty done, the green Pokémon\n"
# 692 "data/maps/MtPyre_Summit/scripts.pory"
	.string "flew off into the wild blue yonder…$"
# 693 "data/maps/MtPyre_Summit/scripts.pory"

# 694 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_YoureNotAfter:
# 695 "data/maps/MtPyre_Summit/scripts.pory"
	.string "You're not after the Red Orb as well,\n"
# 696 "data/maps/MtPyre_Summit/scripts.pory"
	.string "are you?\p"
# 697 "data/maps/MtPyre_Summit/scripts.pory"
	.string "What? You say you came here looking\n"
# 698 "data/maps/MtPyre_Summit/scripts.pory"
	.string "for Team Aqua's leader?\p"
# 699 "data/maps/MtPyre_Summit/scripts.pory"
	.string "That was him alright, he's a ruthless\n"
# 700 "data/maps/MtPyre_Summit/scripts.pory"
	.string "man who wants to expand the world's\l"
# 701 "data/maps/MtPyre_Summit/scripts.pory"
	.string "oceans at all costs…\p"
# 702 "data/maps/MtPyre_Summit/scripts.pory"
	.string "His rival, Maxie of Team Magma, came\n"
# 703 "data/maps/MtPyre_Summit/scripts.pory"
	.string "here yesterday and took the Blue Orb.\p"
# 704 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I've trained at Mt. Pyre my whole life\n"
# 705 "data/maps/MtPyre_Summit/scripts.pory"
	.string "and felt it was my duty to protect the\l"
# 706 "data/maps/MtPyre_Summit/scripts.pory"
	.string "remaining Orb.\p"
# 707 "data/maps/MtPyre_Summit/scripts.pory"
	.string "These Orbs have an immense power, The\n"
# 708 "data/maps/MtPyre_Summit/scripts.pory"
	.string "world could be destroyed with them in\l"
# 709 "data/maps/MtPyre_Summit/scripts.pory"
	.string "the wrong hands…\p"
# 710 "data/maps/MtPyre_Summit/scripts.pory"
	.string "If I heard him right, Archie is going\n"
# 711 "data/maps/MtPyre_Summit/scripts.pory"
	.string "to Slateport City next.\p"
# 712 "data/maps/MtPyre_Summit/scripts.pory"
	.string "If you're going to keep pursuing Team\n"
# 713 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Aqua, I'll need to make sure your\l"
# 714 "data/maps/MtPyre_Summit/scripts.pory"
	.string "battling skills are up to the task!$"
# 715 "data/maps/MtPyre_Summit/scripts.pory"

# 716 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_WowYoureCapable:
# 717 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Wow, you're quite a capable trainer!\p"
# 718 "data/maps/MtPyre_Summit/scripts.pory"
	.string "If someone like you is challenging\n"
# 719 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Team Aqua, I feel quite confident\l"
# 720 "data/maps/MtPyre_Summit/scripts.pory"
	.string "in this region's future.\p"
# 721 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I hope you can make good use of this\n"
# 722 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Heart Scale.$"
# 723 "data/maps/MtPyre_Summit/scripts.pory"

# 724 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_PerhapsICould:
# 725 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Perhaps I could also help by\n"
# 726 "data/maps/MtPyre_Summit/scripts.pory"
	.string "teaching your Pokémon some moves?$"
# 727 "data/maps/MtPyre_Summit/scripts.pory"

# 728 "data/maps/MtPyre_Summit/scripts.pory"
MtPyre_Summit_Text_Defeat:
# 729 "data/maps/MtPyre_Summit/scripts.pory"
	.string "Oh, darn.\n"
# 730 "data/maps/MtPyre_Summit/scripts.pory"
	.string "I've gone and lost.$"
