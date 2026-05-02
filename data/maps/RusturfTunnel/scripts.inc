# 1 "data/maps/RusturfTunnel/scripts.pory"

# 2 "data/maps/RusturfTunnel/scripts.pory"
.equ LOCALID_WANDAS_BF, 1
# 3 "data/maps/RusturfTunnel/scripts.pory"
.set LOCALID_BRINEY, 4
# 4 "data/maps/RusturfTunnel/scripts.pory"
.set LOCALID_GRUNT, 5
# 5 "data/maps/RusturfTunnel/scripts.pory"
.set LOCALID_PEEKO, 6
# 6 "data/maps/RusturfTunnel/scripts.pory"
.set LOCALID_ROXANNE, 9
# 7 "data/maps/RusturfTunnel/scripts.pory"
.equ LOCALID_WANDA, 10
# 8 "data/maps/RusturfTunnel/scripts.pory"

# 9 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_MapScripts::
# 10 "data/maps/RusturfTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, RusturfTunnel_OnTransition
# 11 "data/maps/RusturfTunnel/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RusturfTunnel_OnFrame
# 12 "data/maps/RusturfTunnel/scripts.pory"
	.byte 0
# 13 "data/maps/RusturfTunnel/scripts.pory"

# 14 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_OnFrame:
# 15 "data/maps/RusturfTunnel/scripts.pory"
	.2byte 0
# 16 "data/maps/RusturfTunnel/scripts.pory"

# 17 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_OnTransition:
# 18 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_RUSTURF_TUNNEL_STATE, 2, RusturfTunnel_EventScript_SetAquaGruntAndPeekoPos
# 19 "data/maps/RusturfTunnel/scripts.pory"
	end
# 20 "data/maps/RusturfTunnel/scripts.pory"

# 21 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_SetAquaGruntAndPeekoPos::
# 22 "data/maps/RusturfTunnel/scripts.pory"
	setobjectxyperm LOCALID_PEEKO, 13, 4
# 23 "data/maps/RusturfTunnel/scripts.pory"
	setobjectxyperm LOCALID_GRUNT, 13, 5
# 24 "data/maps/RusturfTunnel/scripts.pory"
	return
# 25 "data/maps/RusturfTunnel/scripts.pory"

# 26 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Wanda::
# 27 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 28 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 29 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_BoyfriendOnOtherSideOfRock, MSGBOX_DEFAULT
# 30 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 31 "data/maps/RusturfTunnel/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 32 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 33 "data/maps/RusturfTunnel/scripts.pory"
	release
# 34 "data/maps/RusturfTunnel/scripts.pory"
	end
# 35 "data/maps/RusturfTunnel/scripts.pory"

# 36 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandasBoyfriend::
# 37 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 38 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 39 "data/maps/RusturfTunnel/scripts.pory"
	goto_if_set FLAG_TEMP_1, RusturfTunnel_EventScript_AlreadySpokenTo
# 40 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_TEMP_1
# 41 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_WhyCantTheyKeepDigging, MSGBOX_DEFAULT
# 42 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 43 "data/maps/RusturfTunnel/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 44 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 45 "data/maps/RusturfTunnel/scripts.pory"
	release
# 46 "data/maps/RusturfTunnel/scripts.pory"
	end
# 47 "data/maps/RusturfTunnel/scripts.pory"

# 48 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_AlreadySpokenTo::
# 49 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_ToGetToVerdanturf, MSGBOX_DEFAULT
# 50 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 51 "data/maps/RusturfTunnel/scripts.pory"
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
# 52 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 53 "data/maps/RusturfTunnel/scripts.pory"
	release
# 54 "data/maps/RusturfTunnel/scripts.pory"
	end
# 55 "data/maps/RusturfTunnel/scripts.pory"

# 56 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_ClearTunnelScene::
# 57 "data/maps/RusturfTunnel/scripts.pory"
	lockall
# 58 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RusturfTunnel_EventScript_FaceWandasBoyfriend1
# 59 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_FaceWandasBoyfriend2
# 60 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_FaceWandasBoyfriend3
# 61 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_WandasBoyfriendNotice
# 62 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_YouShatteredBoulderTakeHM, MSGBOX_DEFAULT
# 63 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_WandasBoyfriendApproachPlayer
# 64 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_WandasBoyfriendApproachPlayer
# 65 "data/maps/RusturfTunnel/scripts.pory"
	giveitem ITEM_HM_STRENGTH
# 66 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_RECEIVED_HM_STRENGTH
# 67 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_ExplainStrength, MSGBOX_DEFAULT
# 68 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 69 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RusturfTunnel_EventScript_BoyfriendApproachWanda1
# 70 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_BoyfriendApproachWanda2
# 71 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_BoyfriendApproachWanda3
# 72 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_WandaReunion, MSGBOX_DEFAULT
# 73 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 74 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 1, RusturfTunnel_EventScript_WandaAndBoyfriendExit1
# 75 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 2, RusturfTunnel_EventScript_WandaAndBoyfriendExit
# 76 "data/maps/RusturfTunnel/scripts.pory"
	call_if_eq VAR_TEMP_1, 3, RusturfTunnel_EventScript_WandaAndBoyfriendExit
# 77 "data/maps/RusturfTunnel/scripts.pory"
	call RusturfTunnel_EventScript_SetRusturfTunnelOpen
# 78 "data/maps/RusturfTunnel/scripts.pory"
	releaseall
# 79 "data/maps/RusturfTunnel/scripts.pory"
	end
# 80 "data/maps/RusturfTunnel/scripts.pory"

# 81 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_BoyfriendApproachWanda1::
# 82 "data/maps/RusturfTunnel/scripts.pory"
	return
# 83 "data/maps/RusturfTunnel/scripts.pory"

# 84 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_BoyfriendApproachWanda2::
# 85 "data/maps/RusturfTunnel/scripts.pory"
	return
# 86 "data/maps/RusturfTunnel/scripts.pory"

# 87 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_BoyfriendApproachWanda3::
# 88 "data/maps/RusturfTunnel/scripts.pory"
	return
# 89 "data/maps/RusturfTunnel/scripts.pory"

# 90 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_FaceWandasBoyfriend1::
# 91 "data/maps/RusturfTunnel/scripts.pory"
	return
# 92 "data/maps/RusturfTunnel/scripts.pory"

# 93 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_FaceWandasBoyfriend2::
# 94 "data/maps/RusturfTunnel/scripts.pory"
	return
# 95 "data/maps/RusturfTunnel/scripts.pory"

# 96 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_FaceWandasBoyfriend3::
# 97 "data/maps/RusturfTunnel/scripts.pory"
	return
# 98 "data/maps/RusturfTunnel/scripts.pory"

# 99 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandasBoyfriendApproachPlayer::
# 100 "data/maps/RusturfTunnel/scripts.pory"
	return
# 101 "data/maps/RusturfTunnel/scripts.pory"

# 102 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandaAndBoyfriendExit1::
# 103 "data/maps/RusturfTunnel/scripts.pory"
	return
# 104 "data/maps/RusturfTunnel/scripts.pory"

# 105 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandaAndBoyfriendExit::
# 106 "data/maps/RusturfTunnel/scripts.pory"
	return
# 107 "data/maps/RusturfTunnel/scripts.pory"

# 108 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_WandasBoyfriendNotice::
# 109 "data/maps/RusturfTunnel/scripts.pory"
	return
# 110 "data/maps/RusturfTunnel/scripts.pory"

# 111 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandaExit1:
# 112 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 113 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 114 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 115 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 116 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 117 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 118 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 119 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 120 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 121 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 122 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 123 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 124 "data/maps/RusturfTunnel/scripts.pory"

# 125 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandaExit:
# 126 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 127 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 128 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 129 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 130 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 131 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 132 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 133 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 134 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 135 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 136 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 137 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 138 "data/maps/RusturfTunnel/scripts.pory"

# 139 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchWandaExit:
# 140 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 141 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_up
# 142 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 143 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 144 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 145 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 146 "data/maps/RusturfTunnel/scripts.pory"

# 147 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_Unused1:
# 148 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 149 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 150 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 151 "data/maps/RusturfTunnel/scripts.pory"

# 152 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_Unused2:
# 153 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 154 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_up
# 155 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 156 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 157 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 158 "data/maps/RusturfTunnel/scripts.pory"

# 159 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_Unused3:
# 160 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 161 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_down
# 162 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 163 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 164 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 165 "data/maps/RusturfTunnel/scripts.pory"

# 166 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchBoyfriend1:
# 167 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 168 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 169 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 170 "data/maps/RusturfTunnel/scripts.pory"

# 171 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchBoyfriend:
# 172 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 173 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_left
# 174 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 175 "data/maps/RusturfTunnel/scripts.pory"

# 176 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BoyfriendFaceRight:
# 177 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 178 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_right
# 179 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 180 "data/maps/RusturfTunnel/scripts.pory"

# 181 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandasBoyfriendExit1:
# 182 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 183 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 184 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 185 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 186 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 187 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 188 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 189 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 190 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 191 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 192 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 193 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 194 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 195 "data/maps/RusturfTunnel/scripts.pory"

# 196 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandasBoyfriendExit:
# 197 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 198 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 199 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 200 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 201 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 202 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 203 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 204 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 205 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 206 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 207 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 208 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 209 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 210 "data/maps/RusturfTunnel/scripts.pory"

# 211 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_WandasBoyfriendApproachPlayer:
# 212 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 213 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 214 "data/maps/RusturfTunnel/scripts.pory"

# 215 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BoyfriendApproachWanda1:
# 216 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_up
# 217 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_up
# 218 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_up
# 219 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
# 220 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 221 "data/maps/RusturfTunnel/scripts.pory"

# 222 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BoyfriendApproachWanda:
# 223 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_right
# 224 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_fast_right
# 225 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_right
# 226 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_up
# 227 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 228 "data/maps/RusturfTunnel/scripts.pory"

# 229 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_TunnelBlockagePos1::
# 230 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_1, 1
# 231 "data/maps/RusturfTunnel/scripts.pory"
	end
# 232 "data/maps/RusturfTunnel/scripts.pory"

# 233 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_TunnelBlockagePos2::
# 234 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_1, 2
# 235 "data/maps/RusturfTunnel/scripts.pory"
	end
# 236 "data/maps/RusturfTunnel/scripts.pory"

# 237 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_TunnelBlockagePos3::
# 238 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_TEMP_1, 3
# 239 "data/maps/RusturfTunnel/scripts.pory"
	end
# 240 "data/maps/RusturfTunnel/scripts.pory"

# 241 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_AquaGruntBackUp::
# 242 "data/maps/RusturfTunnel/scripts.pory"
	lockall
# 243 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 244 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_ComeAndGetSome, MSGBOX_DEFAULT
# 245 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 246 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_GRUNT, RusturfTunnel_Movement_GruntAndPeekoBackUp
# 247 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PEEKO, RusturfTunnel_Movement_GruntAndPeekoBackUp
# 248 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 249 "data/maps/RusturfTunnel/scripts.pory"
	copyobjectxytoperm LOCALID_GRUNT
# 250 "data/maps/RusturfTunnel/scripts.pory"
	copyobjectxytoperm LOCALID_PEEKO
# 251 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_RUSTURF_TUNNEL_STATE, 3
# 252 "data/maps/RusturfTunnel/scripts.pory"
	releaseall
# 253 "data/maps/RusturfTunnel/scripts.pory"
	end
# 254 "data/maps/RusturfTunnel/scripts.pory"

# 255 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_GruntAndPeekoBackUp:
# 256 "data/maps/RusturfTunnel/scripts.pory"
	lock_facing_direction
# 257 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 258 "data/maps/RusturfTunnel/scripts.pory"
	unlock_facing_direction
# 259 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 260 "data/maps/RusturfTunnel/scripts.pory"

# 261 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Peeko::
# 262 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 263 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 264 "data/maps/RusturfTunnel/scripts.pory"
	waitse
# 265 "data/maps/RusturfTunnel/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 266 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_Peeko, MSGBOX_DEFAULT
# 267 "data/maps/RusturfTunnel/scripts.pory"
	waitmoncry
# 268 "data/maps/RusturfTunnel/scripts.pory"
	release
# 269 "data/maps/RusturfTunnel/scripts.pory"
	end
# 270 "data/maps/RusturfTunnel/scripts.pory"

# 271 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Grunt::
# 272 "data/maps/RusturfTunnel/scripts.pory"
	lock
# 273 "data/maps/RusturfTunnel/scripts.pory"
	faceplayer
# 274 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_ROXANNE, Common_Movement_FaceLeft
# 275 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_DISABLE_EXP
# 276 "data/maps/RusturfTunnel/scripts.pory"
	playbgm MUS_DP_ENCOUNTER_GALACTIC, FALSE
# 277 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_GruntIntro, MSGBOX_DEFAULT
# 278 "data/maps/RusturfTunnel/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_RUSTURF_TUNNEL, RusturfTunnel_Text_GruntDefeat
# 279 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_GruntTakePackage, MSGBOX_DEFAULT
# 280 "data/maps/RusturfTunnel/scripts.pory"
	giveitem ITEM_DEVON_PARTS
# 281 "data/maps/RusturfTunnel/scripts.pory"
	clearflag FLAG_DISABLE_EXP
# 282 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 283 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PushPlayerAsideForGrunt
# 284 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_GRUNT, RusturfTunnel_Movement_GruntEscape
# 285 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 286 "data/maps/RusturfTunnel/scripts.pory"
	removeobject LOCALID_GRUNT
# 287 "data/maps/RusturfTunnel/scripts.pory"
	delay 50
# 288 "data/maps/RusturfTunnel/scripts.pory"
	addobject LOCALID_BRINEY
# 289 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_BRINEY, RusturfTunnel_Movement_BrineyApproachPeeko1
# 290 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 291 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerMoveAsideForBriney
# 292 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_BRINEY, RusturfTunnel_Movement_BrineyApproachPeeko2
# 293 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 294 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_PeekoGladToSeeYouSafe, MSGBOX_DEFAULT
# 295 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_BRINEY, Common_Movement_FacePlayer
# 296 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 297 "data/maps/RusturfTunnel/scripts.pory"
	message RusturfTunnel_Text_ThankYouLetsGoHomePeeko
# 298 "data/maps/RusturfTunnel/scripts.pory"
	waitmessage
# 299 "data/maps/RusturfTunnel/scripts.pory"
	waitse
# 300 "data/maps/RusturfTunnel/scripts.pory"
	playmoncry SPECIES_WINGULL, CRY_MODE_NORMAL
# 301 "data/maps/RusturfTunnel/scripts.pory"
	waitbuttonpress
# 302 "data/maps/RusturfTunnel/scripts.pory"
	waitmoncry
# 303 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 304 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerWatchBrineyExit
# 305 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_BRINEY, RusturfTunnel_Movement_BrineyExit
# 306 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_PEEKO, RusturfTunnel_Movement_PeekoExit
# 307 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 308 "data/maps/RusturfTunnel/scripts.pory"
	removeobject LOCALID_BRINEY
# 309 "data/maps/RusturfTunnel/scripts.pory"
	removeobject LOCALID_PEEKO
# 310 "data/maps/RusturfTunnel/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, RusturfTunnel_Movement_PlayerApproachRoxanne
# 311 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 312 "data/maps/RusturfTunnel/scripts.pory"
	applymovement LOCALID_ROXANNE, Common_Movement_FacePlayer
# 313 "data/maps/RusturfTunnel/scripts.pory"
	waitmovement 0
# 314 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_RoxanneThankYou, MSGBOX_DEFAULT
# 315 "data/maps/RusturfTunnel/scripts.pory"
	waitmessage
# 316 "data/maps/RusturfTunnel/scripts.pory"
	closemessage
# 317 "data/maps/RusturfTunnel/scripts.pory"
	fadescreen FADE_TO_BLACK
# 318 "data/maps/RusturfTunnel/scripts.pory"
	removeobject LOCALID_ROXANNE
# 319 "data/maps/RusturfTunnel/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 320 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_HIDE_RUSTURF_TUNNEL_ROXANNE
# 321 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_HIDE_RUSTBORO_CITY_GYM_GUIDE
# 322 "data/maps/RusturfTunnel/scripts.pory"
	clearflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_2
# 323 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_DEFEATED_TUNNEL_GRUNT
# 324 "data/maps/RusturfTunnel/scripts.pory"
	clearflag FLAG_DEVON_GOODS_STOLEN
# 325 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_RECOVERED_DEVON_GOODS
# 326 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_RUSTBORO_CITY_STATE, 4
# 327 "data/maps/RusturfTunnel/scripts.pory"
	setvar VAR_BRINEY_HOUSE_STATE, 1
# 328 "data/maps/RusturfTunnel/scripts.pory"
	setflag FLAG_HIDE_ROUTE_116_MR_BRINEY
# 329 "data/maps/RusturfTunnel/scripts.pory"
	release
# 330 "data/maps/RusturfTunnel/scripts.pory"
	end
# 331 "data/maps/RusturfTunnel/scripts.pory"

# 332 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PushPlayerAsideForGrunt:
# 333 "data/maps/RusturfTunnel/scripts.pory"
	face_down
# 334 "data/maps/RusturfTunnel/scripts.pory"
	lock_facing_direction
# 335 "data/maps/RusturfTunnel/scripts.pory"
	walk_up
# 336 "data/maps/RusturfTunnel/scripts.pory"
	unlock_facing_direction
# 337 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_left
# 338 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 339 "data/maps/RusturfTunnel/scripts.pory"

# 340 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_RoxanneApproach:
# 341 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 342 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 343 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 344 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 345 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 346 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 347 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 348 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 349 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 350 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 351 "data/maps/RusturfTunnel/scripts.pory"
	face_down
# 352 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 353 "data/maps/RusturfTunnel/scripts.pory"

# 354 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerMoveAsideForBriney:
# 355 "data/maps/RusturfTunnel/scripts.pory"
	walk_down
# 356 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_up
# 357 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 358 "data/maps/RusturfTunnel/scripts.pory"

# 359 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_GruntEscape:
# 360 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 361 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 362 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 363 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 364 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 365 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 366 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 367 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 368 "data/maps/RusturfTunnel/scripts.pory"
	walk_fast_left
# 369 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 370 "data/maps/RusturfTunnel/scripts.pory"

# 371 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BrineyApproachPeeko1:
# 372 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 373 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 374 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 375 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 376 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 377 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 378 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 379 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 380 "data/maps/RusturfTunnel/scripts.pory"

# 381 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BrineyExit:
# 382 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 383 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 384 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 385 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 386 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 387 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 388 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 389 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 390 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 391 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 392 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 393 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 394 "data/maps/RusturfTunnel/scripts.pory"

# 395 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerWatchBrineyExit:
# 396 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 397 "data/maps/RusturfTunnel/scripts.pory"
	delay_8
# 398 "data/maps/RusturfTunnel/scripts.pory"
	delay_4
# 399 "data/maps/RusturfTunnel/scripts.pory"
	walk_in_place_faster_left
# 400 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 401 "data/maps/RusturfTunnel/scripts.pory"

# 402 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PlayerApproachRoxanne:
# 403 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 404 "data/maps/RusturfTunnel/scripts.pory"
	face_right
# 405 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 406 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 407 "data/maps/RusturfTunnel/scripts.pory"
	face_up
# 408 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 409 "data/maps/RusturfTunnel/scripts.pory"

# 410 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_BrineyApproachPeeko2:
# 411 "data/maps/RusturfTunnel/scripts.pory"
	delay_16
# 412 "data/maps/RusturfTunnel/scripts.pory"
	walk_right
# 413 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 414 "data/maps/RusturfTunnel/scripts.pory"

# 415 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Movement_PeekoExit:
# 416 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 417 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 418 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 419 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 420 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 421 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 422 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 423 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 424 "data/maps/RusturfTunnel/scripts.pory"
	walk_left
# 425 "data/maps/RusturfTunnel/scripts.pory"
	step_end
# 426 "data/maps/RusturfTunnel/scripts.pory"

# 427 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_EventScript_Mike::
# 428 "data/maps/RusturfTunnel/scripts.pory"
	trainerbattle_single TRAINER_MIKE_2, RusturfTunnel_Text_MikeIntro, RusturfTunnel_Text_MikeDefeat
# 429 "data/maps/RusturfTunnel/scripts.pory"
	msgbox RusturfTunnel_Text_MikePostBattle, MSGBOX_AUTOCLOSE
# 430 "data/maps/RusturfTunnel/scripts.pory"
	end
# 431 "data/maps/RusturfTunnel/scripts.pory"

# 432 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ComeAndGetSome:
# 433 "data/maps/RusturfTunnel/scripts.pory"
	.string "What, are you coming?\n"
# 434 "data/maps/RusturfTunnel/scripts.pory"
	.string "Come and get some, then!$"
# 435 "data/maps/RusturfTunnel/scripts.pory"

# 436 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_Peeko:
# 437 "data/maps/RusturfTunnel/scripts.pory"
	.string "Peeko: Pii pihyoh!$"
# 438 "data/maps/RusturfTunnel/scripts.pory"

# 439 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_GruntIntro:
# 440 "data/maps/RusturfTunnel/scripts.pory"
	.string "Grah, keelhaul it all!\p"
# 441 "data/maps/RusturfTunnel/scripts.pory"
	.string "That hostage Pokémon turned out to\n"
# 442 "data/maps/RusturfTunnel/scripts.pory"
	.string "be worthless!\p"
# 443 "data/maps/RusturfTunnel/scripts.pory"
	.string "And to think I made a getaway…\n"
# 444 "data/maps/RusturfTunnel/scripts.pory"
	.string "In this tunnel to nowhere!\p"
# 445 "data/maps/RusturfTunnel/scripts.pory"
	.string "Hey! You!\n"
# 446 "data/maps/RusturfTunnel/scripts.pory"
	.string "So you want to battle me?$"
# 447 "data/maps/RusturfTunnel/scripts.pory"

# 448 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_GruntDefeat:
# 449 "data/maps/RusturfTunnel/scripts.pory"
	.string "Urrrggh! My career in crime comes to\n"
# 450 "data/maps/RusturfTunnel/scripts.pory"
	.string "a dead end!$"
# 451 "data/maps/RusturfTunnel/scripts.pory"

# 452 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_GruntTakePackage:
# 453 "data/maps/RusturfTunnel/scripts.pory"
	.string "This is plain not right…\p"
# 454 "data/maps/RusturfTunnel/scripts.pory"
	.string "The Boss told me this would be a\n"
# 455 "data/maps/RusturfTunnel/scripts.pory"
	.string "slick-and-easy job to pull.\p"
# 456 "data/maps/RusturfTunnel/scripts.pory"
	.string "All I had to do was steal some package\n"
# 457 "data/maps/RusturfTunnel/scripts.pory"
	.string "from Devon.\p"
# 458 "data/maps/RusturfTunnel/scripts.pory"
	.string "Tch!\n"
# 459 "data/maps/RusturfTunnel/scripts.pory"
	.string "You want it back that badly, take it!$"
# 460 "data/maps/RusturfTunnel/scripts.pory"

# 461 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_PeekoGladToSeeYouSafe:
# 462 "data/maps/RusturfTunnel/scripts.pory"
	.string "Peeko!\n"
# 463 "data/maps/RusturfTunnel/scripts.pory"
	.string "Am I glad to see you're safe!$"
# 464 "data/maps/RusturfTunnel/scripts.pory"

# 465 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ThankYouLetsGoHomePeeko:
# 466 "data/maps/RusturfTunnel/scripts.pory"
	.string "Peeko owes her life to you!\p"
# 467 "data/maps/RusturfTunnel/scripts.pory"
	.string "They call me Mr. Briney.\n"
# 468 "data/maps/RusturfTunnel/scripts.pory"
	.string "And, you are?\p"
# 469 "data/maps/RusturfTunnel/scripts.pory"
	.string "… … … … … … … …\n"
# 470 "data/maps/RusturfTunnel/scripts.pory"
	.string "… … … … … … … …\p"
# 471 "data/maps/RusturfTunnel/scripts.pory"
	.string "Ah, so you are {PLAYER}{KUN}!\n"
# 472 "data/maps/RusturfTunnel/scripts.pory"
	.string "I sincerely thank you!\p"
# 473 "data/maps/RusturfTunnel/scripts.pory"
	.string "Now, if there's anything that troubles\n"
# 474 "data/maps/RusturfTunnel/scripts.pory"
	.string "you, don't hesitate to tell me!\p"
# 475 "data/maps/RusturfTunnel/scripts.pory"
	.string "You can usually find me in my cottage\n"
# 476 "data/maps/RusturfTunnel/scripts.pory"
	.string "by the sea in Dewford Town.\p"
# 477 "data/maps/RusturfTunnel/scripts.pory"
	.string "Come, Peeko, we should make our way\n"
# 478 "data/maps/RusturfTunnel/scripts.pory"
	.string "home.\p"
# 479 "data/maps/RusturfTunnel/scripts.pory"
	.string "Peeko: Pihyoh!$"
# 480 "data/maps/RusturfTunnel/scripts.pory"

# 481 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_RoxanneThankYou:
# 482 "data/maps/RusturfTunnel/scripts.pory"
	.string "Thank you for dealing with that\n"
# 483 "data/maps/RusturfTunnel/scripts.pory"
	.string "awful grunt!\p"
# 484 "data/maps/RusturfTunnel/scripts.pory"
	.string "I was just looking for Rock Pokémon\n"
# 485 "data/maps/RusturfTunnel/scripts.pory"
	.string "in this cave when he ambushed me!\p"
# 486 "data/maps/RusturfTunnel/scripts.pory"
	.string "…\p"
# 487 "data/maps/RusturfTunnel/scripts.pory"
	.string "{PLAYER} is it? you seem like a very\n"
# 488 "data/maps/RusturfTunnel/scripts.pory"
	.string "capable trainer!\p"
# 489 "data/maps/RusturfTunnel/scripts.pory"
	.string "I'd love to take you on at my gym\n"
# 490 "data/maps/RusturfTunnel/scripts.pory"
	.string "in Rustboro City.\p"
# 491 "data/maps/RusturfTunnel/scripts.pory"
	.string "See ya!$"
# 492 "data/maps/RusturfTunnel/scripts.pory"

# 493 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_WhyCantTheyKeepDigging:
# 494 "data/maps/RusturfTunnel/scripts.pory"
	.string "… …\p"
# 495 "data/maps/RusturfTunnel/scripts.pory"
	.string "Why can't they keep digging?\n"
# 496 "data/maps/RusturfTunnel/scripts.pory"
	.string "Is the bedrock too hard?\p"
# 497 "data/maps/RusturfTunnel/scripts.pory"
	.string "My beloved awaits me in VERDANTURF\n"
# 498 "data/maps/RusturfTunnel/scripts.pory"
	.string "TOWN just beyond here…\p"
# 499 "data/maps/RusturfTunnel/scripts.pory"
	.string "If RUSTBORO and VERDANTURF were\n"
# 500 "data/maps/RusturfTunnel/scripts.pory"
	.string "joined by this tunnel, I could visit\l"
# 501 "data/maps/RusturfTunnel/scripts.pory"
	.string "her every day…\p"
# 502 "data/maps/RusturfTunnel/scripts.pory"
	.string "But this…\n"
# 503 "data/maps/RusturfTunnel/scripts.pory"
	.string "What am I to do?$"
# 504 "data/maps/RusturfTunnel/scripts.pory"

# 505 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ToGetToVerdanturf:
# 506 "data/maps/RusturfTunnel/scripts.pory"
	.string "To get from RUSTBORO to VERDANTURF,\n"
# 507 "data/maps/RusturfTunnel/scripts.pory"
	.string "you need to go to DEWFORD, then pass\l"
# 508 "data/maps/RusturfTunnel/scripts.pory"
	.string "through SLATEPORT and MAUVILLE…$"
# 509 "data/maps/RusturfTunnel/scripts.pory"

# 510 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_YouShatteredBoulderTakeHM:
# 511 "data/maps/RusturfTunnel/scripts.pory"
	.string "Wow! You shattered that boulder\n"
# 512 "data/maps/RusturfTunnel/scripts.pory"
	.string "blocking the way.\p"
# 513 "data/maps/RusturfTunnel/scripts.pory"
	.string "To show you how much I appreciate it,\n"
# 514 "data/maps/RusturfTunnel/scripts.pory"
	.string "I'd like you to have this HM.$"
# 515 "data/maps/RusturfTunnel/scripts.pory"

# 516 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_ExplainStrength:
# 517 "data/maps/RusturfTunnel/scripts.pory"
	.string "That HM contains STRENGTH.\p"
# 518 "data/maps/RusturfTunnel/scripts.pory"
	.string "If a muscular Pokémon were to learn\n"
# 519 "data/maps/RusturfTunnel/scripts.pory"
	.string "that, it would be able to move even\l"
# 520 "data/maps/RusturfTunnel/scripts.pory"
	.string "large boulders.$"
# 521 "data/maps/RusturfTunnel/scripts.pory"

# 522 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_WandaReunion:
# 523 "data/maps/RusturfTunnel/scripts.pory"
	.string "WANDA!\n"
# 524 "data/maps/RusturfTunnel/scripts.pory"
	.string "Now I can see you anytime!\p"
# 525 "data/maps/RusturfTunnel/scripts.pory"
	.string "WANDA: That's…wonderful.\p"
# 526 "data/maps/RusturfTunnel/scripts.pory"
	.string "Please, take some rest at my home.$"
# 527 "data/maps/RusturfTunnel/scripts.pory"

# 528 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_BoyfriendOnOtherSideOfRock:
# 529 "data/maps/RusturfTunnel/scripts.pory"
	.string "On the other side of this rock…\n"
# 530 "data/maps/RusturfTunnel/scripts.pory"
	.string "My boyfriend is there.\p"
# 531 "data/maps/RusturfTunnel/scripts.pory"
	.string "He… He's not just digging the tunnel\n"
# 532 "data/maps/RusturfTunnel/scripts.pory"
	.string "to come see me.\p"
# 533 "data/maps/RusturfTunnel/scripts.pory"
	.string "He works his hands raw and rough\n"
# 534 "data/maps/RusturfTunnel/scripts.pory"
	.string "for the benefit of everyone.$"
# 535 "data/maps/RusturfTunnel/scripts.pory"

# 536 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_MikeIntro:
# 537 "data/maps/RusturfTunnel/scripts.pory"
	.string "What do you call a wild man up in the\n"
# 538 "data/maps/RusturfTunnel/scripts.pory"
	.string "mountains? A mountain man, right?\p"
# 539 "data/maps/RusturfTunnel/scripts.pory"
	.string "So why don't they call a Pokémon in\n"
# 540 "data/maps/RusturfTunnel/scripts.pory"
	.string "the mountains a mountain Pokémon?$"
# 541 "data/maps/RusturfTunnel/scripts.pory"

# 542 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_MikeDefeat:
# 543 "data/maps/RusturfTunnel/scripts.pory"
	.string "My Pokémon…\n"
# 544 "data/maps/RusturfTunnel/scripts.pory"
	.string "Ran out of power…$"
# 545 "data/maps/RusturfTunnel/scripts.pory"

# 546 "data/maps/RusturfTunnel/scripts.pory"
RusturfTunnel_Text_MikePostBattle:
# 547 "data/maps/RusturfTunnel/scripts.pory"
	.string "They halted development here to\n"
# 548 "data/maps/RusturfTunnel/scripts.pory"
	.string "protect Pokémon, right?\l"
# 549 "data/maps/RusturfTunnel/scripts.pory"
	.string "There's a feel-good story!$"
