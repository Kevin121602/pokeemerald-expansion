PetalburgCity_Gym_EventScript_CritRoomDoor::
# 2 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 3 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_PETALBURG_GYM_STATE, 6
	goto_if_lt PetalburgCity_Gym_EventScript_CritRoomDoor_2
# 3 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_PETALBURG_GYM_ENTRANCE_DOOR, 2
	goto_if_eq PetalburgCity_Gym_EventScript_CritRoomDoor_2
PetalburgCity_Gym_EventScript_CritRoomDoor_1:
# 6 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 7 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 85
# 8 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_PETALBURG_GYM_ENTRANCE_DOOR, 0
	goto_if_eq PetalburgCity_Gym_EventScript_CritRoomDoor_7
# 17 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
PetalburgCity_Gym_EventScript_CritRoomDoor_6:
	end

PetalburgCity_Gym_EventScript_CritRoomDoor_2:
# 4 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DoorLocked
	goto PetalburgCity_Gym_EventScript_CritRoomDoor_1

PetalburgCity_Gym_EventScript_CritRoomDoor_7:
# 9 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterCritRoom, MSGBOX_YESNO
# 10 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PetalburgCity_Gym_EventScript_CritRoomDoor_10
# 14 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DontEnterRoom
	goto PetalburgCity_Gym_EventScript_CritRoomDoor_6

PetalburgCity_Gym_EventScript_CritRoomDoor_10:
# 11 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_ENTRANCE_DOOR, 1
# 12 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
	goto PetalburgCity_Gym_EventScript_CritRoomDoor_6


PetalburgCity_Gym_EventScript_AccuracyRoomDoor::
# 23 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 24 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_PETALBURG_GYM_STATE, 6
	goto_if_lt PetalburgCity_Gym_EventScript_AccuracyRoomDoor_2
# 24 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_PETALBURG_GYM_ENTRANCE_DOOR, 1
	goto_if_eq PetalburgCity_Gym_EventScript_AccuracyRoomDoor_2
PetalburgCity_Gym_EventScript_AccuracyRoomDoor_1:
# 27 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 28 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 98
# 29 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_PETALBURG_GYM_ENTRANCE_DOOR, 0
	goto_if_eq PetalburgCity_Gym_EventScript_AccuracyRoomDoor_7
# 38 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
PetalburgCity_Gym_EventScript_AccuracyRoomDoor_6:
	end

PetalburgCity_Gym_EventScript_AccuracyRoomDoor_2:
# 25 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DoorLocked
	goto PetalburgCity_Gym_EventScript_AccuracyRoomDoor_1

PetalburgCity_Gym_EventScript_AccuracyRoomDoor_7:
# 30 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterAccuracyRoom, MSGBOX_YESNO
# 31 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PetalburgCity_Gym_EventScript_AccuracyRoomDoor_10
# 35 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DontEnterRoom
	goto PetalburgCity_Gym_EventScript_AccuracyRoomDoor_6

PetalburgCity_Gym_EventScript_AccuracyRoomDoor_10:
# 32 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_ENTRANCE_DOOR, 2
# 33 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
	goto PetalburgCity_Gym_EventScript_AccuracyRoomDoor_6


PetalburgCity_Gym_EventScript_SpeedRoomDoor::
# 44 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 45 "data/maps/PetalburgCity_Gym/scripts.pory"
	checktrainerflag TRAINER_RANDALL
	goto_if 0, PetalburgCity_Gym_EventScript_SpeedRoomDoor_2
# 45 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_PETALBURG_GYM_FIRST_ROOM_DOOR, 2
	goto_if_eq PetalburgCity_Gym_EventScript_SpeedRoomDoor_2
PetalburgCity_Gym_EventScript_SpeedRoomDoor_1:
# 48 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 49 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 46
# 50 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_PETALBURG_GYM_FIRST_ROOM_DOOR, 0
	goto_if_eq PetalburgCity_Gym_EventScript_SpeedRoomDoor_7
# 59 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
PetalburgCity_Gym_EventScript_SpeedRoomDoor_6:
	end

PetalburgCity_Gym_EventScript_SpeedRoomDoor_2:
# 46 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DoorLocked
	goto PetalburgCity_Gym_EventScript_SpeedRoomDoor_1

PetalburgCity_Gym_EventScript_SpeedRoomDoor_7:
# 51 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterSpeedRoom, MSGBOX_YESNO
# 52 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PetalburgCity_Gym_EventScript_SpeedRoomDoor_10
# 56 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DontEnterRoom
	goto PetalburgCity_Gym_EventScript_SpeedRoomDoor_6

PetalburgCity_Gym_EventScript_SpeedRoomDoor_10:
# 53 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_FIRST_ROOM_DOOR, 1
# 54 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
	goto PetalburgCity_Gym_EventScript_SpeedRoomDoor_6


PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor::
# 65 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 66 "data/maps/PetalburgCity_Gym/scripts.pory"
	checktrainerflag TRAINER_RANDALL
	goto_if 0, PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor_2
# 66 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_PETALBURG_GYM_FIRST_ROOM_DOOR, 1
	goto_if_eq PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor_2
PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor_1:
# 69 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 70 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 59
# 71 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_PETALBURG_GYM_FIRST_ROOM_DOOR, 0
	goto_if_eq PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor_7
# 80 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor_6:
	end

PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor_2:
# 67 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DoorLocked
	goto PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor_1

PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor_7:
# 72 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterStrengthRoom, MSGBOX_YESNO
# 73 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor_10
# 77 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DontEnterRoom
	goto PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor_6

PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor_10:
# 74 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_FIRST_ROOM_DOOR, 2
# 75 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
	goto PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor_6


PetalburgCity_Gym_EventScript_RightStrengthRoomDoor::
# 86 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 87 "data/maps/PetalburgCity_Gym/scripts.pory"
	checktrainerflag TRAINER_MARY
	goto_if 0, PetalburgCity_Gym_EventScript_RightStrengthRoomDoor_2
# 87 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_PETALBURG_GYM_FIRST_ROOM_DOOR, 2
	goto_if_eq PetalburgCity_Gym_EventScript_RightStrengthRoomDoor_2
PetalburgCity_Gym_EventScript_RightStrengthRoomDoor_1:
# 90 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 91 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 59
# 92 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_PETALBURG_GYM_FIRST_ROOM_DOOR, 0
	goto_if_eq PetalburgCity_Gym_EventScript_RightStrengthRoomDoor_7
# 101 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
PetalburgCity_Gym_EventScript_RightStrengthRoomDoor_6:
	end

PetalburgCity_Gym_EventScript_RightStrengthRoomDoor_2:
# 88 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DoorLocked
	goto PetalburgCity_Gym_EventScript_RightStrengthRoomDoor_1

PetalburgCity_Gym_EventScript_RightStrengthRoomDoor_7:
# 93 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterStrengthRoom, MSGBOX_YESNO
# 94 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PetalburgCity_Gym_EventScript_RightStrengthRoomDoor_10
# 98 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DontEnterRoom
	goto PetalburgCity_Gym_EventScript_RightStrengthRoomDoor_6

PetalburgCity_Gym_EventScript_RightStrengthRoomDoor_10:
# 95 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_FIRST_ROOM_DOOR, 1
# 96 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
	goto PetalburgCity_Gym_EventScript_RightStrengthRoomDoor_6


PetalburgCity_Gym_EventScript_RecoveryRoomDoor::
# 107 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 108 "data/maps/PetalburgCity_Gym/scripts.pory"
	checktrainerflag TRAINER_MARY
	goto_if 0, PetalburgCity_Gym_EventScript_RecoveryRoomDoor_2
# 108 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_PETALBURG_GYM_FIRST_ROOM_DOOR, 1
	goto_if_eq PetalburgCity_Gym_EventScript_RecoveryRoomDoor_2
PetalburgCity_Gym_EventScript_RecoveryRoomDoor_1:
# 111 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 112 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 72
# 113 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_PETALBURG_GYM_FIRST_ROOM_DOOR, 0
	goto_if_eq PetalburgCity_Gym_EventScript_RecoveryRoomDoor_7
# 122 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
PetalburgCity_Gym_EventScript_RecoveryRoomDoor_6:
	end

PetalburgCity_Gym_EventScript_RecoveryRoomDoor_2:
# 109 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DoorLocked
	goto PetalburgCity_Gym_EventScript_RecoveryRoomDoor_1

PetalburgCity_Gym_EventScript_RecoveryRoomDoor_7:
# 114 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterRecoveryRoom, MSGBOX_YESNO
# 115 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PetalburgCity_Gym_EventScript_RecoveryRoomDoor_10
# 119 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DontEnterRoom
	goto PetalburgCity_Gym_EventScript_RecoveryRoomDoor_6

PetalburgCity_Gym_EventScript_RecoveryRoomDoor_10:
# 116 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_FIRST_ROOM_DOOR, 2
# 117 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
	goto PetalburgCity_Gym_EventScript_RecoveryRoomDoor_6


PetalburgCity_Gym_EventScript_LeftRecoilRoomDoor::
# 128 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 129 "data/maps/PetalburgCity_Gym/scripts.pory"
	checktrainerflag TRAINER_PARKER
	goto_if 0, PetalburgCity_Gym_EventScript_LeftRecoilRoomDoor_2
PetalburgCity_Gym_EventScript_LeftRecoilRoomDoor_1:
# 132 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 133 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 20
# 134 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_PETALBURG_GYM_SECOND_ROOM_DOOR, 0
	goto_if_eq PetalburgCity_Gym_EventScript_LeftRecoilRoomDoor_5
# 143 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
PetalburgCity_Gym_EventScript_LeftRecoilRoomDoor_4:
	end

PetalburgCity_Gym_EventScript_LeftRecoilRoomDoor_2:
# 130 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DoorLocked
	goto PetalburgCity_Gym_EventScript_LeftRecoilRoomDoor_1

PetalburgCity_Gym_EventScript_LeftRecoilRoomDoor_5:
# 135 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterRecoilRoom, MSGBOX_YESNO
# 136 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PetalburgCity_Gym_EventScript_LeftRecoilRoomDoor_8
# 140 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DontEnterRoom
	goto PetalburgCity_Gym_EventScript_LeftRecoilRoomDoor_4

PetalburgCity_Gym_EventScript_LeftRecoilRoomDoor_8:
# 137 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_SECOND_ROOM_DOOR, 1
# 138 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
	goto PetalburgCity_Gym_EventScript_LeftRecoilRoomDoor_4


PetalburgCity_Gym_EventScript_RightRecoilRoomDoor::
# 149 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 150 "data/maps/PetalburgCity_Gym/scripts.pory"
	checktrainerflag TRAINER_ALEXIA
	goto_if 0, PetalburgCity_Gym_EventScript_RightRecoilRoomDoor_2
# 150 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_PETALBURG_GYM_SECOND_ROOM_DOOR, 2
	goto_if_eq PetalburgCity_Gym_EventScript_RightRecoilRoomDoor_2
PetalburgCity_Gym_EventScript_RightRecoilRoomDoor_1:
# 153 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 154 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 20
# 155 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_PETALBURG_GYM_SECOND_ROOM_DOOR, 0
	goto_if_eq PetalburgCity_Gym_EventScript_RightRecoilRoomDoor_7
# 164 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
PetalburgCity_Gym_EventScript_RightRecoilRoomDoor_6:
	end

PetalburgCity_Gym_EventScript_RightRecoilRoomDoor_2:
# 151 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DoorLocked
	goto PetalburgCity_Gym_EventScript_RightRecoilRoomDoor_1

PetalburgCity_Gym_EventScript_RightRecoilRoomDoor_7:
# 156 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterRecoilRoom2, MSGBOX_YESNO
# 157 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PetalburgCity_Gym_EventScript_RightRecoilRoomDoor_10
# 161 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DontEnterRoom
	goto PetalburgCity_Gym_EventScript_RightRecoilRoomDoor_6

PetalburgCity_Gym_EventScript_RightRecoilRoomDoor_10:
# 158 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_SECOND_ROOM_DOOR, 1
# 159 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
	goto PetalburgCity_Gym_EventScript_RightRecoilRoomDoor_6


PetalburgCity_Gym_EventScript_LeftZeroReductionRoomDoor::
# 170 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 171 "data/maps/PetalburgCity_Gym/scripts.pory"
	checktrainerflag TRAINER_ALEXIA
	goto_if 0, PetalburgCity_Gym_EventScript_LeftZeroReductionRoomDoor_2
# 171 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_PETALBURG_GYM_SECOND_ROOM_DOOR, 1
	goto_if_eq PetalburgCity_Gym_EventScript_LeftZeroReductionRoomDoor_2
PetalburgCity_Gym_EventScript_LeftZeroReductionRoomDoor_1:
# 174 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 175 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 33
# 176 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_PETALBURG_GYM_SECOND_ROOM_DOOR, 0
	goto_if_eq PetalburgCity_Gym_EventScript_LeftZeroReductionRoomDoor_7
# 185 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
PetalburgCity_Gym_EventScript_LeftZeroReductionRoomDoor_6:
	end

PetalburgCity_Gym_EventScript_LeftZeroReductionRoomDoor_2:
# 172 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DoorLocked
	goto PetalburgCity_Gym_EventScript_LeftZeroReductionRoomDoor_1

PetalburgCity_Gym_EventScript_LeftZeroReductionRoomDoor_7:
# 177 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterZeroReductionRoom2, MSGBOX_YESNO
# 178 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PetalburgCity_Gym_EventScript_LeftZeroReductionRoomDoor_10
# 182 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DontEnterRoom
	goto PetalburgCity_Gym_EventScript_LeftZeroReductionRoomDoor_6

PetalburgCity_Gym_EventScript_LeftZeroReductionRoomDoor_10:
# 179 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_SECOND_ROOM_DOOR, 2
# 180 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
	goto PetalburgCity_Gym_EventScript_LeftZeroReductionRoomDoor_6


PetalburgCity_Gym_EventScript_RightZeroReductionRoomDoor::
# 191 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 192 "data/maps/PetalburgCity_Gym/scripts.pory"
	checktrainerflag TRAINER_GEORGE
	goto_if 0, PetalburgCity_Gym_EventScript_RightZeroReductionRoomDoor_2
PetalburgCity_Gym_EventScript_RightZeroReductionRoomDoor_1:
# 195 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 196 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 33
# 197 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_PETALBURG_GYM_SECOND_ROOM_DOOR, 0
	goto_if_eq PetalburgCity_Gym_EventScript_RightZeroReductionRoomDoor_5
# 206 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
PetalburgCity_Gym_EventScript_RightZeroReductionRoomDoor_4:
	end

PetalburgCity_Gym_EventScript_RightZeroReductionRoomDoor_2:
# 193 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DoorLocked
	goto PetalburgCity_Gym_EventScript_RightZeroReductionRoomDoor_1

PetalburgCity_Gym_EventScript_RightZeroReductionRoomDoor_5:
# 198 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterZeroReductionRoom, MSGBOX_YESNO
# 199 "data/maps/PetalburgCity_Gym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq PetalburgCity_Gym_EventScript_RightZeroReductionRoomDoor_8
# 203 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_DontEnterRoom
	goto PetalburgCity_Gym_EventScript_RightZeroReductionRoomDoor_4

PetalburgCity_Gym_EventScript_RightZeroReductionRoomDoor_8:
# 200 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_SECOND_ROOM_DOOR, 1
# 201 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_EnterRoom
	goto PetalburgCity_Gym_EventScript_RightZeroReductionRoomDoor_4


# 211 "data/maps/PetalburgCity_Gym/scripts.pory"

# 212 "data/maps/PetalburgCity_Gym/scripts.pory"
.set LOCALID_NORMAN, 1
# 213 "data/maps/PetalburgCity_Gym/scripts.pory"
.set LOCALID_WALLY, 10
# 214 "data/maps/PetalburgCity_Gym/scripts.pory"
.set LOCALID_WALLYS_DAD, 11
# 215 "data/maps/PetalburgCity_Gym/scripts.pory"

# 216 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_MapScripts::
# 217 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, PetalburgCity_Gym_OnLoad
# 218 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_Gym_OnTransition
# 219 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PetalburgCity_Gym_OnWarp
# 220 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_Gym_OnFrame
# 221 "data/maps/PetalburgCity_Gym/scripts.pory"
	.byte 0
# 222 "data/maps/PetalburgCity_Gym/scripts.pory"

# 223 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnLoad:
# 224 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_OpenUnlockedDoors
# 225 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_ge VAR_PETALBURG_GYM_STATE, 7, PetalburgCity_Gym_EventScript_UnlockAllDoors
# 226 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 227 "data/maps/PetalburgCity_Gym/scripts.pory"

# 228 "data/maps/PetalburgCity_Gym/scripts.pory"
@ NOTE: Strength and OHKO rooms are misleading. Both are more accurately Critical-Hit
# 229 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenUnlockedDoors::
# 230 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 1
# 231 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenGymEntranceDoors
# 232 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 233 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 234 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_PARKER, PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 235 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 236 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_GEORGE, PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 237 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_JODY, PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 238 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_defeated TRAINER_BERKE, PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 239 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 240 "data/maps/PetalburgCity_Gym/scripts.pory"

# 241 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_UnlockAllDoors::
# 242 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 1
# 243 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenGymEntranceDoors
# 244 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 245 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 246 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 247 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 248 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 249 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 250 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 251 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 252 "data/maps/PetalburgCity_Gym/scripts.pory"

# 253 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnTransition:
# 254 "data/maps/PetalburgCity_Gym/scripts.pory"
	@ call_if_eq VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_MoveWallyToEntrance
# 255 "data/maps/PetalburgCity_Gym/scripts.pory"
	@ call_if_lt VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_MoveNormanToEntrance
# 256 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_set FLAG_SYS_GAME_CLEAR, PetalburgCity_Gym_EventScript_CheckNormanForRematch
# 257 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 258 "data/maps/PetalburgCity_Gym/scripts.pory"

# 259 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MoveWallyToEntrance::
# 260 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_WALLY, 5, 108
# 261 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 262 "data/maps/PetalburgCity_Gym/scripts.pory"

# 263 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MoveNormanToEntrance::
# 264 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_NORMAN, 4, 107
# 265 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 266 "data/maps/PetalburgCity_Gym/scripts.pory"

# 267 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_CheckNormanForRematch::
# 268 "data/maps/PetalburgCity_Gym/scripts.pory"
	setorcopyvar VAR_TRAINER_BATTLE_OPPONENT_A, TRAINER_NORMAN_1
# 269 "data/maps/PetalburgCity_Gym/scripts.pory"
	specialvar VAR_RESULT, IsTrainerReadyForRematch
# 270 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontMoveNormanToFront
# 271 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_PETALBURG_GYM_STATE, 8, PetalburgCity_Gym_EventScript_DontMoveNormanToFront
# 272 "data/maps/PetalburgCity_Gym/scripts.pory"
	setobjectxyperm LOCALID_NORMAN, 4, 107
# 273 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 274 "data/maps/PetalburgCity_Gym/scripts.pory"

# 275 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontMoveNormanToFront::
# 276 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 8
# 277 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 278 "data/maps/PetalburgCity_Gym/scripts.pory"

# 279 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnWarp:
# 280 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script_2 VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_TurnPlayerNorth
# 281 "data/maps/PetalburgCity_Gym/scripts.pory"
	.2byte 0
# 282 "data/maps/PetalburgCity_Gym/scripts.pory"

# 283 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_TurnPlayerNorth::
# 284 "data/maps/PetalburgCity_Gym/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 285 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 286 "data/maps/PetalburgCity_Gym/scripts.pory"

# 287 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnFrame:
# 288 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script_2 VAR_PETALBURG_GYM_STATE, 1, PetalburgCity_Gym_EventScript_ReturnFromWallyTutorial
# 289 "data/maps/PetalburgCity_Gym/scripts.pory"
	.2byte 0
# 290 "data/maps/PetalburgCity_Gym/scripts.pory"

# 291 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ReturnFromWallyTutorial::
# 292 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 293 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadSoDidItWorkOut, MSGBOX_DEFAULT
# 294 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyThankYouBye, MSGBOX_DEFAULT
# 295 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 296 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 297 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitGym
# 298 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 299 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_EXIT
# 300 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_WALLY
# 301 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLY
# 302 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 303 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 304 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 305 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadGoCollectBadges, MSGBOX_DEFAULT
# 306 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 2
# 307 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 308 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 309 "data/maps/PetalburgCity_Gym/scripts.pory"

# 310 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitGym:
# 311 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 312 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 313 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 314 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 315 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 316 "data/maps/PetalburgCity_Gym/scripts.pory"

# 317 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Norman::
# 318 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 319 "data/maps/PetalburgCity_Gym/scripts.pory"
	faceplayer
# 320 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_PETALBURG_GYM_STATE
# 321 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 2, PetalburgCity_Gym_EventScript_NormanNoBadges
# 322 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 3, PetalburgCity_Gym_EventScript_NormanOneBadge
# 323 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 4, PetalburgCity_Gym_EventScript_NormanTwoBadges
# 324 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 5, PetalburgCity_Gym_EventScript_NormanThreeBadges
# 325 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 6, PetalburgCity_Gym_EventScript_NormanBattle
# 326 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 7, PetalburgCity_Gym_EventScript_NormanPostBattle
# 327 "data/maps/PetalburgCity_Gym/scripts.pory"
	case 8, PetalburgCity_Gym_EventScript_NormanRematch
# 328 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadYoureHereWithYourPokemon, MSGBOX_DEFAULT
# 329 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 330 "data/maps/PetalburgCity_Gym/scripts.pory"
	switch VAR_FACING
# 331 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_SOUTH, PetalburgCity_Gym_EventScript_BeginWallyTutorialSouth
# 332 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_NORTH, PetalburgCity_Gym_EventScript_BeginWallyTutorialNorth
# 333 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_WEST, PetalburgCity_Gym_EventScript_BeginWallyTutorialWest
# 334 "data/maps/PetalburgCity_Gym/scripts.pory"
	case DIR_EAST, PetalburgCity_Gym_EventScript_BeginWallyTutorialEast
# 335 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 336 "data/maps/PetalburgCity_Gym/scripts.pory"

# 337 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialSouth::
# 338 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 0
# 339 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 340 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 341 "data/maps/PetalburgCity_Gym/scripts.pory"

# 342 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialNorth::
# 343 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 344 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 345 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 346 "data/maps/PetalburgCity_Gym/scripts.pory"

# 347 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialWest::
# 348 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 349 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 350 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 351 "data/maps/PetalburgCity_Gym/scripts.pory"

# 352 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorialEast::
# 353 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 3
# 354 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BeginWallyTutorial
# 355 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 356 "data/maps/PetalburgCity_Gym/scripts.pory"

# 357 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BeginWallyTutorial::
# 358 "data/maps/PetalburgCity_Gym/scripts.pory"
	addobject LOCALID_WALLY
# 359 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_DOOR
# 360 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_WallyArriveSouth
# 361 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallyArriveNorth
# 362 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallyArriveWestEast
# 363 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallyArriveWestEast
# 364 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyIdLikeAPokemon, MSGBOX_DEFAULT
# 365 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadOhYoureWallyRight, MSGBOX_DEFAULT
# 366 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyIveNeverCaughtAPokemon, MSGBOX_DEFAULT
# 367 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadHmISee, MSGBOX_DEFAULT
# 368 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_NormanAddressPlayerSouth
# 369 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_NormanAddressPlayerNorth
# 370 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_NormanAddressPlayerWest
# 371 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_NormanAddressPlayerEast
# 372 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadPlayerGoWithWally, MSGBOX_DEFAULT
# 373 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_NormanAddressWallySouth
# 374 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_NormanAddressWallyNorth
# 375 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_NormanAddressWallyWest
# 376 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_NormanAddressWallyEast
# 377 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_IllLoanYouMyZigzagoon, MSGBOX_DEFAULT
# 378 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyThankYouAndDadGivesPokeBall, MSGBOX_DEFAULT
# 379 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WallyOhWowThankYou, MSGBOX_DEFAULT
# 380 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_NormanFaceDoorSouth
# 381 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_NormanFaceDoorNorth
# 382 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_NormanFaceDoorWest
# 383 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_NormanFaceDoorEast
# 384 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_WallyFacePlayer
# 385 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_WallyFaceDown
# 386 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_WallyFacePlayer
# 387 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_WallyFacePlayer
# 388 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_WouldYouReallyComeWithMe, MSGBOX_DEFAULT
# 389 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 390 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DONT_TRANSITION_MUSIC
# 391 "data/maps/PetalburgCity_Gym/scripts.pory"
	playbgm MUS_FOLLOW_ME, FALSE
# 392 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 0, PetalburgCity_Gym_EventScript_ExitGymWithWallySouth
# 393 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 1, PetalburgCity_Gym_EventScript_ExitGymWithWallyNorth
# 394 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 2, PetalburgCity_Gym_EventScript_ExitGymWithWallyWest
# 395 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8008, 3, PetalburgCity_Gym_EventScript_ExitGymWithWallyEast
# 396 "data/maps/PetalburgCity_Gym/scripts.pory"
	removeobject LOCALID_WALLY
# 397 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_MOM
# 398 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 1
# 399 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 2
# 400 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_CITY_WALLY
# 401 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_HIDE_PETALBURG_GYM_WALLY
# 402 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
# 403 "data/maps/PetalburgCity_Gym/scripts.pory"
	special InitBirchState
# 404 "data/maps/PetalburgCity_Gym/scripts.pory"
	warp MAP_PETALBURG_CITY, 15, 8
# 405 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 406 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 407 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 408 "data/maps/PetalburgCity_Gym/scripts.pory"

# 409 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveSouth::
# 410 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 411 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyArrive
# 412 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 413 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 414 "data/maps/PetalburgCity_Gym/scripts.pory"

# 415 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveNorth::
# 416 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyArriveNorth
# 417 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 418 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 419 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 420 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 421 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 422 "data/maps/PetalburgCity_Gym/scripts.pory"

# 423 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyArriveWestEast::
# 424 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 425 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 426 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyArrive
# 427 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 428 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 429 "data/maps/PetalburgCity_Gym/scripts.pory"

# 430 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallySouth::
# 431 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 432 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitSouthWest
# 433 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallySouth
# 434 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 435 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 436 "data/maps/PetalburgCity_Gym/scripts.pory"

# 437 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyNorth::
# 438 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitNorth
# 439 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyNorth
# 440 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 441 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 442 "data/maps/PetalburgCity_Gym/scripts.pory"

# 443 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyWest::
# 444 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitSouthWest
# 445 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyWest
# 446 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 447 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 448 "data/maps/PetalburgCity_Gym/scripts.pory"

# 449 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallyEast::
# 450 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, PetalburgCity_Gym_Movement_WallyExitEast
# 451 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallyEast
# 452 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 453 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 454 "data/maps/PetalburgCity_Gym/scripts.pory"

# 455 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerSouth::
# 456 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterUp
# 457 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 458 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 459 "data/maps/PetalburgCity_Gym/scripts.pory"

# 460 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerNorth::
# 461 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 462 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 463 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 464 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 465 "data/maps/PetalburgCity_Gym/scripts.pory"

# 466 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerWest::
# 467 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 468 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 469 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 470 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 471 "data/maps/PetalburgCity_Gym/scripts.pory"

# 472 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressPlayerEast::
# 473 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterLeft
# 474 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
# 475 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 476 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 477 "data/maps/PetalburgCity_Gym/scripts.pory"

# 478 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallySouth::
# 479 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 480 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 481 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 482 "data/maps/PetalburgCity_Gym/scripts.pory"

# 483 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyNorth::
# 484 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterRight
# 485 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 486 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 487 "data/maps/PetalburgCity_Gym/scripts.pory"

# 488 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyWest::
# 489 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 490 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 491 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 492 "data/maps/PetalburgCity_Gym/scripts.pory"

# 493 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanAddressWallyEast::
# 494 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 495 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 496 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 497 "data/maps/PetalburgCity_Gym/scripts.pory"

# 498 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyFacePlayer::
# 499 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_FacePlayer
# 500 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 501 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 502 "data/maps/PetalburgCity_Gym/scripts.pory"

# 503 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallyFaceDown::
# 504 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterDown
# 505 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 506 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 507 "data/maps/PetalburgCity_Gym/scripts.pory"

# 508 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanNoBadges::
# 509 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanGoToRustboro, MSGBOX_DEFAULT
# 510 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 511 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 512 "data/maps/PetalburgCity_Gym/scripts.pory"

# 513 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanOneBadge::
# 514 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanGoToDewford, MSGBOX_DEFAULT
# 515 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 516 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 517 "data/maps/PetalburgCity_Gym/scripts.pory"

# 518 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanTwoBadges::
# 519 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_YouHaveGottenStronger, MSGBOX_DEFAULT
# 520 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 521 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 522 "data/maps/PetalburgCity_Gym/scripts.pory"

# 523 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanThreeBadges::
# 524 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_YouHaveGottenStronger, MSGBOX_DEFAULT
# 525 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 526 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 527 "data/maps/PetalburgCity_Gym/scripts.pory"

# 528 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorSouth::
# 529 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 530 "data/maps/PetalburgCity_Gym/scripts.pory"

# 531 "data/maps/PetalburgCity_Gym/scripts.pory"
@ For all other NormanFaceDoorX, Norman is already facing the door from NormanAddressWallyX
# 532 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorNorth::
# 533 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 534 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 535 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 536 "data/maps/PetalburgCity_Gym/scripts.pory"

# 537 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorWest::
# 538 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 539 "data/maps/PetalburgCity_Gym/scripts.pory"

# 540 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanFaceDoorEast::
# 541 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 542 "data/maps/PetalburgCity_Gym/scripts.pory"

# 543 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanPostBattle::
# 544 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry
# 545 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_GiveEnigmaBerry
# 546 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_FACADE, PetalburgCity_Gym_EventScript_GiveFacade2
# 547 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_SYS_GAME_CLEAR, PetalburgCity_Gym_EventScript_NoAmountOfTrainingIsEnough
# 548 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadGoingToKeepTraining, MSGBOX_DEFAULT
# 549 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 550 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 551 "data/maps/PetalburgCity_Gym/scripts.pory"

# 552 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveFacade2::
# 553 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_GiveFacade
# 554 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 555 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 556 "data/maps/PetalburgCity_Gym/scripts.pory"

# 557 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanRematch::
# 558 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_NORMAN_1, PetalburgCity_Gym_Text_NormanPreRematch, PetalburgCity_Gym_Text_NormanRematchDefeat, PetalburgCity_Gym_Text_NormanRematchNeedTwoMons
# 559 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanPostRematch, MSGBOX_AUTOCLOSE
# 560 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 561 "data/maps/PetalburgCity_Gym/scripts.pory"

# 562 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ShouldGiveEnigmaBerry::
# 563 "data/maps/PetalburgCity_Gym/scripts.pory"
	specialvar VAR_RESULT, IsEnigmaBerryValid
# 564 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 565 "data/maps/PetalburgCity_Gym/scripts.pory"
	checkitem ITEM_ENIGMA_BERRY_E_READER
# 566 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 567 "data/maps/PetalburgCity_Gym/scripts.pory"
	checkpcitem ITEM_ENIGMA_BERRY_E_READER
# 568 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 569 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_ENIGMA_BERRY_AVAILABLE, 0, PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry
# 570 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GiveEnigmaBerry, MSGBOX_DEFAULT
# 571 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_RESULT, TRUE
# 572 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 573 "data/maps/PetalburgCity_Gym/scripts.pory"

# 574 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontGiveEnigmaBerry::
# 575 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_RESULT, FALSE
# 576 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 577 "data/maps/PetalburgCity_Gym/scripts.pory"

# 578 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveEnigmaBerry::
# 579 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_ENIGMA_BERRY_E_READER
# 580 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 581 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_ENIGMA_BERRY_AVAILABLE, 0
# 582 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 583 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 584 "data/maps/PetalburgCity_Gym/scripts.pory"

# 585 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NormanBattle::
# 586 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DISABLE_EXP
# 587 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_NormanIntro, MSGBOX_DEFAULT
# 588 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_no_intro TRAINER_NORMAN_1, PetalburgCity_Gym_Text_NormanDefeat
# 589 "data/maps/PetalburgCity_Gym/scripts.pory"
	message PetalburgCity_Gym_Text_ReceivedBalanceBadge
# 590 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmessage
# 591 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 592 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ExplainBalanceBadgeTakeThis, MSGBOX_DEFAULT
# 593 "data/maps/PetalburgCity_Gym/scripts.pory"
	clearflag FLAG_DISABLE_EXP
# 594 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_PETALBURG_GYM
# 595 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_STATE, 7
# 596 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_ENTRANCE_DOOR, 3
# 597 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_FIRST_ROOM_DOOR, 3
# 598 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_GYM_SECOND_ROOM_DOOR, 3
# 599 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_TRICK_HOUSE_LEVEL, 4
# 600 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_TRICK_HOUSE_BEING_WATCHED_STATE, 0
# 601 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_TRICK_HOUSE_ENTRANCE_STATE, 0
# 602 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_BADGE05_GET
# 603 "data/maps/PetalburgCity_Gym/scripts.pory"
	call EventScript_HideMrBriney
# 604 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 5
# 605 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 606 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_UnlockAllDoors
# 607 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 608 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_GiveFacade
# 609 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 610 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GiveMegaRing, MSGBOX_DEFAULT
# 611 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_MEGA_RING
# 612 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ExplainMegaRing, MSGBOX_DEFAULT
# 613 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 614 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadHappyAndSad, MSGBOX_DEFAULT
# 615 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 616 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 617 "data/maps/PetalburgCity_Gym/scripts.pory"

# 618 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveFacade::
# 619 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_HEART_SCALE
# 620 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_TM_FACADE
# 621 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
# 622 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_FACADE
# 623 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ExplainFacade, MSGBOX_DEFAULT
# 624 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 625 "data/maps/PetalburgCity_Gym/scripts.pory"

# 626 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanNorth::
# 627 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceFasterUp
# 628 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 629 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 630 "data/maps/PetalburgCity_Gym/scripts.pory"

# 631 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanEast::
# 632 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceFasterRight
# 633 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 634 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 635 "data/maps/PetalburgCity_Gym/scripts.pory"

# 636 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadFaceNormanWest::
# 637 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, Common_Movement_WalkInPlaceFasterLeft
# 638 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 639 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 640 "data/maps/PetalburgCity_Gym/scripts.pory"

# 641 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerNorth::
# 642 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerNorth
# 643 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 644 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 645 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterLeft
# 646 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 647 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 648 "data/maps/PetalburgCity_Gym/scripts.pory"

# 649 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerEast::
# 650 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerEast
# 651 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 652 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 653 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 654 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 655 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 656 "data/maps/PetalburgCity_Gym/scripts.pory"

# 657 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_WallysDadApproachPlayerWest::
# 658 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadApproachPlayerWest
# 659 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 660 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 661 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 662 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 663 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 664 "data/maps/PetalburgCity_Gym/scripts.pory"

# 665 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadNorth::
# 666 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitNorth
# 667 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_NORMAN, Common_Movement_WalkInPlaceFasterDown
# 668 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadNorth
# 669 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 670 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 671 "data/maps/PetalburgCity_Gym/scripts.pory"

# 672 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadEast::
# 673 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitEast
# 674 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadEast
# 675 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 676 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 677 "data/maps/PetalburgCity_Gym/scripts.pory"

# 678 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ExitGymWithWallysDadWest::
# 679 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement LOCALID_WALLYS_DAD, PetalburgCity_Gym_Movement_WallysDadExitWest
# 680 "data/maps/PetalburgCity_Gym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Gym_Movement_PlayerExitWithWallysDadWest
# 681 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmovement 0
# 682 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 683 "data/maps/PetalburgCity_Gym/scripts.pory"

# 684 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitNorth:
# 685 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 686 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 687 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 688 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 689 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 690 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 691 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 692 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 693 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 694 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 695 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 696 "data/maps/PetalburgCity_Gym/scripts.pory"

# 697 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitEast:
# 698 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 699 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 700 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 701 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 702 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 703 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 704 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 705 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 706 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 707 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 708 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 709 "data/maps/PetalburgCity_Gym/scripts.pory"

# 710 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadExitWest:
# 711 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 712 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 713 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 714 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 715 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 716 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 717 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 718 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 719 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 720 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 721 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 722 "data/maps/PetalburgCity_Gym/scripts.pory"
	set_invisible
# 723 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 724 "data/maps/PetalburgCity_Gym/scripts.pory"

# 725 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadNorth:
# 726 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 727 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 728 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 729 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 730 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 731 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 732 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 733 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 734 "data/maps/PetalburgCity_Gym/scripts.pory"

# 735 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadEast:
# 736 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 737 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 738 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 739 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 740 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 741 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 742 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 743 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 744 "data/maps/PetalburgCity_Gym/scripts.pory"

# 745 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallysDadWest:
# 746 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 747 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 748 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 749 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 750 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 751 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 752 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_left
# 753 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 754 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 755 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 756 "data/maps/PetalburgCity_Gym/scripts.pory"

# 757 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadEnterGym:
# 758 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 759 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 760 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_right
# 761 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 762 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_left
# 763 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 764 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 765 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 766 "data/maps/PetalburgCity_Gym/scripts.pory"

# 767 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerNorth:
# 768 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 769 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 770 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 771 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 772 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 773 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_right
# 774 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 775 "data/maps/PetalburgCity_Gym/scripts.pory"

# 776 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerEast:
# 777 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 778 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 779 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 780 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 781 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 782 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 783 "data/maps/PetalburgCity_Gym/scripts.pory"

# 784 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallysDadApproachPlayerWest:
# 785 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 786 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 787 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 788 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 789 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 790 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 791 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 792 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 793 "data/maps/PetalburgCity_Gym/scripts.pory"

# 794 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_Unused:
# 795 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 796 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 797 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 798 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 799 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 800 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 801 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 802 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_down
# 803 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 804 "data/maps/PetalburgCity_Gym/scripts.pory"

# 805 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyArriveNorth:
# 806 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 807 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 808 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 809 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 810 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 811 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 812 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 813 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 814 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_left
# 815 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 816 "data/maps/PetalburgCity_Gym/scripts.pory"

# 817 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyArrive:
# 818 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 819 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 820 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 821 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 822 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 823 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_up
# 824 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 825 "data/maps/PetalburgCity_Gym/scripts.pory"

# 826 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitNorth:
# 827 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 828 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 829 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 830 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 831 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 832 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 833 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 834 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 835 "data/maps/PetalburgCity_Gym/scripts.pory"

# 836 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitEast:
# 837 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 838 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 839 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 840 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 841 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 842 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 843 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 844 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 845 "data/maps/PetalburgCity_Gym/scripts.pory"

# 846 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_WallyExitSouthWest:
# 847 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 848 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 849 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 850 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_up
# 851 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 852 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_down
# 853 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 854 "data/maps/PetalburgCity_Gym/scripts.pory"

# 855 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyNorth:
# 856 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 857 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 858 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 859 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 860 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 861 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 862 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 863 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 864 "data/maps/PetalburgCity_Gym/scripts.pory"

# 865 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallySouth:
# 866 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 867 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 868 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 869 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 870 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 871 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 872 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 873 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 874 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 875 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 876 "data/maps/PetalburgCity_Gym/scripts.pory"

# 877 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyWest:
# 878 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 879 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 880 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 881 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 882 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 883 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 884 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 885 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 886 "data/maps/PetalburgCity_Gym/scripts.pory"

# 887 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Movement_PlayerExitWithWallyEast:
# 888 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_in_place_faster_down
# 889 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 890 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_16
# 891 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 892 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 893 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 894 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_right
# 895 "data/maps/PetalburgCity_Gym/scripts.pory"
	walk_down
# 896 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay_8
# 897 "data/maps/PetalburgCity_Gym/scripts.pory"
	step_end
# 898 "data/maps/PetalburgCity_Gym/scripts.pory"

# 899 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NoAmountOfTrainingIsEnough::
# 900 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DadNoAmountOfTrainingIsEnough, MSGBOX_DEFAULT
# 901 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 902 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 903 "data/maps/PetalburgCity_Gym/scripts.pory"

# 904 "data/maps/PetalburgCity_Gym/scripts.pory"
@PetalburgCity_Gym_EventScript_CritRoomDoor::
# 905 "data/maps/PetalburgCity_Gym/scripts.pory"
@	lockall
# 906 "data/maps/PetalburgCity_Gym/scripts.pory"
@	goto_if_lt VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_DoorLocked
# 907 "data/maps/PetalburgCity_Gym/scripts.pory"
@	setvar VAR_0x8008, 7
# 908 "data/maps/PetalburgCity_Gym/scripts.pory"
@	setvar VAR_0x8009, 85
# 909 "data/maps/PetalburgCity_Gym/scripts.pory"
@	msgbox PetalburgCity_Gym_Text_EnterCritRoom, MSGBOX_YESNO
# 910 "data/maps/PetalburgCity_Gym/scripts.pory"
@	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 911 "data/maps/PetalburgCity_Gym/scripts.pory"
@	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 912 "data/maps/PetalburgCity_Gym/scripts.pory"
@	end
# 913 "data/maps/PetalburgCity_Gym/scripts.pory"

# 914 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_EnterRoom::
# 915 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 916 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 917 "data/maps/PetalburgCity_Gym/scripts.pory"
	warpdoor MAP_PETALBURG_CITY_GYM, VAR_0x8008, VAR_0x8009
# 918 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 919 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 920 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 921 "data/maps/PetalburgCity_Gym/scripts.pory"

# 922 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DontEnterRoom::
# 923 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 924 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 925 "data/maps/PetalburgCity_Gym/scripts.pory"

# 926 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_DoorLocked::
# 927 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_DoorAppearsLocked, MSGBOX_DEFAULT
# 928 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 929 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 930 "data/maps/PetalburgCity_Gym/scripts.pory"

# 931 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8008 and VAR_0x8009 below are the x and y coordinates of the warp
# 932 "data/maps/PetalburgCity_Gym/scripts.pory"
@PetalburgCity_Gym_EventScript_AccuracyRoomDoor::
# 933 "data/maps/PetalburgCity_Gym/scripts.pory"
@	lockall
# 934 "data/maps/PetalburgCity_Gym/scripts.pory"
@	goto_if_lt VAR_PETALBURG_GYM_STATE, 6, PetalburgCity_Gym_EventScript_DoorLocked
# 935 "data/maps/PetalburgCity_Gym/scripts.pory"
@	setvar VAR_0x8008, 1
# 936 "data/maps/PetalburgCity_Gym/scripts.pory"
@	setvar VAR_0x8009, 98
# 937 "data/maps/PetalburgCity_Gym/scripts.pory"
@	msgbox PetalburgCity_Gym_Text_EnterAccuracyRoom, MSGBOX_YESNO
# 938 "data/maps/PetalburgCity_Gym/scripts.pory"
@	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 939 "data/maps/PetalburgCity_Gym/scripts.pory"
@	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 940 "data/maps/PetalburgCity_Gym/scripts.pory"
@	end
# 941 "data/maps/PetalburgCity_Gym/scripts.pory"

# 942 "data/maps/PetalburgCity_Gym/scripts.pory"
@PetalburgCity_Gym_EventScript_SpeedRoomDoor::
# 943 "data/maps/PetalburgCity_Gym/scripts.pory"
@	lockall
# 944 "data/maps/PetalburgCity_Gym/scripts.pory"
@	goto_if_not_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_DoorLocked
# 945 "data/maps/PetalburgCity_Gym/scripts.pory"
@	setvar VAR_0x8008, 7
# 946 "data/maps/PetalburgCity_Gym/scripts.pory"
@	setvar VAR_0x8009, 46
# 947 "data/maps/PetalburgCity_Gym/scripts.pory"
@	msgbox PetalburgCity_Gym_Text_EnterSpeedRoom, MSGBOX_YESNO
# 948 "data/maps/PetalburgCity_Gym/scripts.pory"
@	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 949 "data/maps/PetalburgCity_Gym/scripts.pory"
@	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 950 "data/maps/PetalburgCity_Gym/scripts.pory"
@	end
# 951 "data/maps/PetalburgCity_Gym/scripts.pory"

# 952 "data/maps/PetalburgCity_Gym/scripts.pory"
@PetalburgCity_Gym_EventScript_LeftStrengthRoomDoor::
# 953 "data/maps/PetalburgCity_Gym/scripts.pory"
@	lockall
# 954 "data/maps/PetalburgCity_Gym/scripts.pory"
@	goto_if_not_defeated TRAINER_RANDALL, PetalburgCity_Gym_EventScript_DoorLocked
# 955 "data/maps/PetalburgCity_Gym/scripts.pory"
@	setvar VAR_0x8008, 1
# 956 "data/maps/PetalburgCity_Gym/scripts.pory"
@	setvar VAR_0x8009, 59
# 957 "data/maps/PetalburgCity_Gym/scripts.pory"
@	msgbox PetalburgCity_Gym_Text_EnterStrengthRoom, MSGBOX_YESNO
# 958 "data/maps/PetalburgCity_Gym/scripts.pory"
@	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 959 "data/maps/PetalburgCity_Gym/scripts.pory"
@	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 960 "data/maps/PetalburgCity_Gym/scripts.pory"
@	end
# 961 "data/maps/PetalburgCity_Gym/scripts.pory"

# 962 "data/maps/PetalburgCity_Gym/scripts.pory"
@PetalburgCity_Gym_EventScript_RightStrengthRoomDoor::
# 963 "data/maps/PetalburgCity_Gym/scripts.pory"
@	lockall
# 964 "data/maps/PetalburgCity_Gym/scripts.pory"
@	goto_if_not_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_DoorLocked
# 965 "data/maps/PetalburgCity_Gym/scripts.pory"
@	setvar VAR_0x8008, 7
# 966 "data/maps/PetalburgCity_Gym/scripts.pory"
@	setvar VAR_0x8009, 59
# 967 "data/maps/PetalburgCity_Gym/scripts.pory"
@	msgbox PetalburgCity_Gym_Text_EnterStrengthRoom, MSGBOX_YESNO
# 968 "data/maps/PetalburgCity_Gym/scripts.pory"
@	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 969 "data/maps/PetalburgCity_Gym/scripts.pory"
@	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 970 "data/maps/PetalburgCity_Gym/scripts.pory"
@	end
# 971 "data/maps/PetalburgCity_Gym/scripts.pory"

# 972 "data/maps/PetalburgCity_Gym/scripts.pory"
@PetalburgCity_Gym_EventScript_RecoveryRoomDoor::
# 973 "data/maps/PetalburgCity_Gym/scripts.pory"
@	lockall
# 974 "data/maps/PetalburgCity_Gym/scripts.pory"
@	goto_if_not_defeated TRAINER_MARY, PetalburgCity_Gym_EventScript_DoorLocked
# 975 "data/maps/PetalburgCity_Gym/scripts.pory"
@	setvar VAR_0x8008, 1
# 976 "data/maps/PetalburgCity_Gym/scripts.pory"
@	setvar VAR_0x8009, 72
# 977 "data/maps/PetalburgCity_Gym/scripts.pory"
@	msgbox PetalburgCity_Gym_Text_EnterRecoveryRoom, MSGBOX_YESNO
# 978 "data/maps/PetalburgCity_Gym/scripts.pory"
@	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 979 "data/maps/PetalburgCity_Gym/scripts.pory"
@	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 980 "data/maps/PetalburgCity_Gym/scripts.pory"
@	end
# 981 "data/maps/PetalburgCity_Gym/scripts.pory"

# 982 "data/maps/PetalburgCity_Gym/scripts.pory"
@PetalburgCity_Gym_EventScript_LeftRecoilRoomDoor::
# 983 "data/maps/PetalburgCity_Gym/scripts.pory"
@	lockall
# 984 "data/maps/PetalburgCity_Gym/scripts.pory"
@	goto_if_not_defeated TRAINER_PARKER, PetalburgCity_Gym_EventScript_DoorLocked
# 985 "data/maps/PetalburgCity_Gym/scripts.pory"
@	setvar VAR_0x8008, 1
# 986 "data/maps/PetalburgCity_Gym/scripts.pory"
@	setvar VAR_0x8009, 20
# 987 "data/maps/PetalburgCity_Gym/scripts.pory"
@	msgbox PetalburgCity_Gym_Text_EnterRecoilRoom, MSGBOX_YESNO
# 988 "data/maps/PetalburgCity_Gym/scripts.pory"
@	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 989 "data/maps/PetalburgCity_Gym/scripts.pory"
@	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 990 "data/maps/PetalburgCity_Gym/scripts.pory"
@	end
# 991 "data/maps/PetalburgCity_Gym/scripts.pory"

# 992 "data/maps/PetalburgCity_Gym/scripts.pory"
@PetalburgCity_Gym_EventScript_RightRecoilRoomDoor::
# 993 "data/maps/PetalburgCity_Gym/scripts.pory"
@	lockall
# 994 "data/maps/PetalburgCity_Gym/scripts.pory"
@	goto_if_not_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_DoorLocked
# 995 "data/maps/PetalburgCity_Gym/scripts.pory"
@	setvar VAR_0x8008, 7
# 996 "data/maps/PetalburgCity_Gym/scripts.pory"
@	setvar VAR_0x8009, 20
# 997 "data/maps/PetalburgCity_Gym/scripts.pory"
@	msgbox PetalburgCity_Gym_Text_EnterRecoilRoom, MSGBOX_YESNO
# 998 "data/maps/PetalburgCity_Gym/scripts.pory"
@	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 999 "data/maps/PetalburgCity_Gym/scripts.pory"
@	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 1000 "data/maps/PetalburgCity_Gym/scripts.pory"
@	end
# 1001 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1002 "data/maps/PetalburgCity_Gym/scripts.pory"
@PetalburgCity_Gym_EventScript_LeftZeroReductionRoomDoor::
# 1003 "data/maps/PetalburgCity_Gym/scripts.pory"
@	lockall
# 1004 "data/maps/PetalburgCity_Gym/scripts.pory"
@	goto_if_not_defeated TRAINER_ALEXIA, PetalburgCity_Gym_EventScript_DoorLocked
# 1005 "data/maps/PetalburgCity_Gym/scripts.pory"
@	setvar VAR_0x8008, 1
# 1006 "data/maps/PetalburgCity_Gym/scripts.pory"
@	setvar VAR_0x8009, 33
# 1007 "data/maps/PetalburgCity_Gym/scripts.pory"
@	msgbox PetalburgCity_Gym_Text_EnterZeroReductionRoom, MSGBOX_YESNO
# 1008 "data/maps/PetalburgCity_Gym/scripts.pory"
@	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 1009 "data/maps/PetalburgCity_Gym/scripts.pory"
@	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 1010 "data/maps/PetalburgCity_Gym/scripts.pory"
@	end
# 1011 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1012 "data/maps/PetalburgCity_Gym/scripts.pory"
@PetalburgCity_Gym_EventScript_RightZeroReductionRoomDoor::
# 1013 "data/maps/PetalburgCity_Gym/scripts.pory"
@	lockall
# 1014 "data/maps/PetalburgCity_Gym/scripts.pory"
@	goto_if_not_defeated TRAINER_GEORGE, PetalburgCity_Gym_EventScript_DoorLocked
# 1015 "data/maps/PetalburgCity_Gym/scripts.pory"
@	setvar VAR_0x8008, 7
# 1016 "data/maps/PetalburgCity_Gym/scripts.pory"
@	setvar VAR_0x8009, 33
# 1017 "data/maps/PetalburgCity_Gym/scripts.pory"
@	msgbox PetalburgCity_Gym_Text_EnterZeroReductionRoom, MSGBOX_YESNO
# 1018 "data/maps/PetalburgCity_Gym/scripts.pory"
@	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 1019 "data/maps/PetalburgCity_Gym/scripts.pory"
@	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 1020 "data/maps/PetalburgCity_Gym/scripts.pory"
@	end
# 1021 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1022 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftGymLeadersRoomDoor::
# 1023 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1024 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_JODY, PetalburgCity_Gym_EventScript_DoorLocked
# 1025 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 1
# 1026 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 7
# 1027 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterGymLeadersRoom, MSGBOX_YESNO
# 1028 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 1029 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 1030 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1031 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1032 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightGymLeadersRoomDoor::
# 1033 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1034 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_BERKE, PetalburgCity_Gym_EventScript_DoorLocked
# 1035 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 7
# 1036 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8009, 7
# 1037 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_EnterGymLeadersRoom, MSGBOX_YESNO
# 1038 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, YES, PetalburgCity_Gym_EventScript_EnterRoom
# 1039 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, NO, PetalburgCity_Gym_EventScript_DontEnterRoom
# 1040 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1041 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1042 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Randall::
# 1043 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_RANDALL, PetalburgCity_Gym_Text_RandallIntro, PetalburgCity_Gym_Text_RandallDefeat, PetalburgCity_Gym_EventScript_SlideOpenSpeedRoomDoors
# 1044 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_RandallPostBadge
# 1045 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_RandallPostBattle, MSGBOX_AUTOCLOSE
# 1046 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1047 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1048 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenSpeedRoomDoors::
# 1049 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 1050 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors
# 1051 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1052 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1053 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1054 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1055 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RandallPostBadge::
# 1056 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_RandallPostBadge, MSGBOX_NPC
# 1057 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1058 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1059 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Parker::
# 1060 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_PARKER, PetalburgCity_Gym_Text_ParkerIntro, PetalburgCity_Gym_Text_ParkerDefeat, PetalburgCity_Gym_EventScript_SlideOpenConfusionRoomDoors
# 1061 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_ParkerPostBadge
# 1062 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ParkerPostBattle, MSGBOX_AUTOCLOSE
# 1063 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1064 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1065 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenConfusionRoomDoors::
# 1066 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 1067 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors
# 1068 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1069 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1070 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1071 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1072 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_ParkerPostBadge::
# 1073 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ParkerPostBadge, MSGBOX_NPC
# 1074 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1075 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1076 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_George::
# 1077 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_GEORGE, PetalburgCity_Gym_Text_GeorgeIntro, PetalburgCity_Gym_Text_GeorgeDefeat, PetalburgCity_Gym_EventScript_SlideOpenRecoveryRoomDoors
# 1078 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_GeorgePostBadge
# 1079 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GeorgePostBattle, MSGBOX_AUTOCLOSE
# 1080 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1081 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1082 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenRecoveryRoomDoors::
# 1083 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 1084 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors
# 1085 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1086 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1087 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1088 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1089 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GeorgePostBadge::
# 1090 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GeorgePostBadge, MSGBOX_NPC
# 1091 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1092 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1093 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Berke::
# 1094 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BERKE, PetalburgCity_Gym_Text_BerkeIntro, PetalburgCity_Gym_Text_BerkeDefeat, PetalburgCity_Gym_EventScript_SlideOpenOHKORoomDoors
# 1095 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_BerkePostBadge
# 1096 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_BerkePostBattle, MSGBOX_AUTOCLOSE
# 1097 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1098 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1099 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenOHKORoomDoors::
# 1100 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 1101 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenOHKORoomDoors
# 1102 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1103 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1104 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1105 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1106 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BerkePostBadge::
# 1107 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_BerkePostBadge, MSGBOX_NPC
# 1108 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1109 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1110 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Mary::
# 1111 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_MARY, PetalburgCity_Gym_Text_MaryIntro, PetalburgCity_Gym_Text_MaryDefeat, PetalburgCity_Gym_EventScript_SlideOpenAccuracyRoomDoors
# 1112 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_MaryPostBadge
# 1113 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_MaryPostBattle, MSGBOX_AUTOCLOSE
# 1114 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1115 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1116 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenAccuracyRoomDoors::
# 1117 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 1118 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors
# 1119 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1120 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1121 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1122 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1123 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_MaryPostBadge::
# 1124 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_MaryPostBadge, MSGBOX_NPC
# 1125 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1126 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1127 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Alexia::
# 1128 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_ALEXIA, PetalburgCity_Gym_Text_AlexiaIntro, PetalburgCity_Gym_Text_AlexiaDefeat, PetalburgCity_Gym_EventScript_SlideOpenDefenseRoomDoors
# 1129 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_AlexiaPostBadge
# 1130 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_AlexiaPostBattle, MSGBOX_AUTOCLOSE
# 1131 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1132 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1133 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenDefenseRoomDoors::
# 1134 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 1135 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors
# 1136 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1137 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1138 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1139 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1140 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AlexiaPostBadge::
# 1141 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_AlexiaPostBadge, MSGBOX_NPC
# 1142 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1143 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1144 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Jody::
# 1145 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JODY, PetalburgCity_Gym_Text_JodyIntro, PetalburgCity_Gym_Text_JodyDefeat, PetalburgCity_Gym_EventScript_SlideOpenStrengthRoomDoors
# 1146 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_JodyPostBadge
# 1147 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_JodyPostBattle, MSGBOX_AUTOCLOSE
# 1148 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1149 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1150 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenStrengthRoomDoors::
# 1151 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8005, 0
# 1152 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors
# 1153 "data/maps/PetalburgCity_Gym/scripts.pory"
	special DrawWholeMapView
# 1154 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1155 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1156 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1157 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_JodyPostBadge::
# 1158 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_JodyPostBadge, MSGBOX_NPC
# 1159 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1160 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1161 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8004 below is the room number
# 1162 "data/maps/PetalburgCity_Gym/scripts.pory"
@ VAR_0x8005 below is 0 when the door should be slid open and 1 when it should be unlocked immediately
# 1163 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenGymEntranceDoors::
# 1164 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 1
# 1165 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1166 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1167 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetEntranceRoomDoorMetatiles
# 1168 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1169 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1170 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenSpeedRoomDoors::
# 1171 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 2
# 1172 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1173 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1174 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetSpeedRoomDoorMetatiles
# 1175 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1176 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1177 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenAccuracyRoomDoors::
# 1178 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 3
# 1179 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1180 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1181 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetAccuracyRoomDoorMetatiles
# 1182 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1183 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1184 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenConfusionRoomDoors::
# 1185 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 4
# 1186 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1187 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1188 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetConfusionRoomDoorMetatiles
# 1189 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1190 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1191 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenDefenseRoomDoors::
# 1192 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 5
# 1193 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1194 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1195 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetDefenseRoomDoorMetatiles
# 1196 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1197 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1198 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenRecoveryRoomDoors::
# 1199 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 6
# 1200 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1201 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1202 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetRecoveryRoomDoorMetatiles
# 1203 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1204 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1205 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenStrengthRoomDoors::
# 1206 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 7
# 1207 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1208 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1209 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetStrengthRoomDoorMetatiles
# 1210 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1211 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1212 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_OpenOHKORoomDoors::
# 1213 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8004, 8
# 1214 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 0, PetalburgCity_Gym_EventScript_SlideOpenRoomDoors
# 1215 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_0x8005, 1, PetalburgCity_Gym_EventScript_UnlockRoomDoors
# 1216 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetOHKORoomDoorMetatiles
# 1217 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1218 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1219 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetEntranceRoomDoorMetatiles::
# 1220 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 85, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1221 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 85, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1222 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 98, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1223 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 98, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1224 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1225 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1226 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetSpeedRoomDoorMetatiles::
# 1227 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 46, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1228 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 46, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1229 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 59, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1230 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 59, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1231 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1232 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1233 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetAccuracyRoomDoorMetatiles::
# 1234 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 59, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1235 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 59, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1236 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 72, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1237 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 72, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1238 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1239 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1240 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetConfusionRoomDoorMetatiles::
# 1241 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 20, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1242 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 20, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1243 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1244 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1245 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetDefenseRoomDoorMetatiles::
# 1246 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 20, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1247 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 20, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1248 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 33, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1249 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 33, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1250 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1251 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1252 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetRecoveryRoomDoorMetatiles::
# 1253 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 33, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1254 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 33, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1255 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1256 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1257 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetStrengthRoomDoorMetatiles::
# 1258 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 1, 7, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1259 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 2, 7, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1260 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1261 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1262 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetOHKORoomDoorMetatiles::
# 1263 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 6, 7, METATILE_PetalburgGym_RoomEntrance_Left, FALSE
# 1264 "data/maps/PetalburgCity_Gym/scripts.pory"
	setmetatile 7, 7, METATILE_PetalburgGym_RoomEntrance_Right, FALSE
# 1265 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1266 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1267 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SlideOpenRoomDoors::
# 1268 "data/maps/PetalburgCity_Gym/scripts.pory"
	special PetalburgGymSlideOpenRoomDoors
# 1269 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitstate
# 1270 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1271 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1272 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_UnlockRoomDoors::
# 1273 "data/maps/PetalburgCity_Gym/scripts.pory"
	special PetalburgGymUnlockRoomDoors
# 1274 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 1275 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1276 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymGuide::
# 1277 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 1278 "data/maps/PetalburgCity_Gym/scripts.pory"
	faceplayer
# 1279 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_GymGuidePostVictory
# 1280 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 1281 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1282 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1283 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1284 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymGuidePostVictory::
# 1285 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 1286 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 1287 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1288 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1289 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftGymStatue::
# 1290 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1291 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_GymStatueCertified
# 1292 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_GymStatue
# 1293 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1294 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1295 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightGymStatue::
# 1296 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 1297 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE05_GET, PetalburgCity_Gym_EventScript_GymStatueCertified
# 1298 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_GymStatue
# 1299 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1300 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1301 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymStatueCertified::
# 1302 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 1303 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 1304 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1305 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1306 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymStatue::
# 1307 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 1308 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 1309 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 1310 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1311 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadYoureHereWithYourPokemon:
# 1312 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm?\p"
# 1313 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Well, if it isn't {PLAYER}!\n"
# 1314 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "So you're all finished moving in?\p"
# 1315 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm surprised that you managed to\n"
# 1316 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "get here by yourself.\p"
# 1317 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh, I see.\n"
# 1318 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're with your Pokémon.\p"
# 1319 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm… Then I guess you're going to\n"
# 1320 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "become a TRAINER like me, {PLAYER}.\p"
# 1321 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That's great news!\n"
# 1322 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll be looking forward to it!$"
# 1323 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1324 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyIdLikeAPokemon:
# 1325 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Um… I…\n"
# 1326 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'd like to get a Pokémon, please…$"
# 1327 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1328 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadOhYoureWallyRight:
# 1329 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm? You're… Uh… Oh, right.\n"
# 1330 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're WALLY, right?$"
# 1331 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1332 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyIveNeverCaughtAPokemon:
# 1333 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY: I'm going to go stay with my\n"
# 1334 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "relatives in VERDANTURF TOWN.\p"
# 1335 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I thought I would be lonely by myself,\n"
# 1336 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "so I wanted to take a Pokémon along.\p"
# 1337 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But I've never caught a Pokémon before.\n"
# 1338 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I don't know how…$"
# 1339 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1340 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadHmISee:
# 1341 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm. I see.$"
# 1342 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1343 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadPlayerGoWithWally:
# 1344 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: {PLAYER}, you heard that,\n"
# 1345 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "right?\p"
# 1346 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go with WALLY and make sure that he\n"
# 1347 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "safely catches a Pokémon.$"
# 1348 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1349 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_IllLoanYouMyZigzagoon:
# 1350 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY, here, I'll loan you my Pokémon.\p"
# 1351 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY received a ZIGZAGOON!$"
# 1352 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1353 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyThankYouAndDadGivesPokeBall:
# 1354 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY: Oh, wow!\n"
# 1355 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "A Pokémon!\p"
# 1356 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm. I'll give you a POKé BALL, too.\n"
# 1357 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go for it!\p"
# 1358 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY received a POKé BALL!$"
# 1359 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1360 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyOhWowThankYou:
# 1361 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY: Oh, wow!\n"
# 1362 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Thank you!$"
# 1363 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1364 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WouldYouReallyComeWithMe:
# 1365 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}… Would you really come\n"
# 1366 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with me?$"
# 1367 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1368 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadSoDidItWorkOut:
# 1369 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: So, did it work out?$"
# 1370 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1371 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_WallyThankYouBye:
# 1372 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "WALLY: Thank you, yes, it did.\n"
# 1373 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Here's your Pokémon back.\p"
# 1374 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, thank you for coming along\n"
# 1375 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with me.\p"
# 1376 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You two are why I was able to catch\n"
# 1377 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "my Pokémon.\p"
# 1378 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I promise I'll take really good\n"
# 1379 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "care of it.\p"
# 1380 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh! My mom's waiting for me,\n"
# 1381 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "so I have to go!\p"
# 1382 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Bye, {PLAYER}!$"
# 1383 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1384 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadGoCollectBadges:
# 1385 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Now…\p"
# 1386 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, if you want to become a\n"
# 1387 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "strong TRAINER, here's my advice.\p"
# 1388 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Head for RUSTBORO CITY beyond this\n"
# 1389 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "town.\p"
# 1390 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There, you should challenge\n"
# 1391 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the Gym Leader, ROXANNE.\p"
# 1392 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "After her, go on to other Pokémon\n"
# 1393 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "GYMS and defeat their LEADERS.\p"
# 1394 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Collect BADGES from them,\n"
# 1395 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "understood?\p"
# 1396 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Of course, I'm a Gym Leader, too.\n"
# 1397 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "We'll battle one day, {PLAYER}.\p"
# 1398 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But that's only after you become\n"
# 1399 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger.$"
# 1400 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1401 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanGoToRustboro:
# 1402 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm? Aren't you going to the\n"
# 1403 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Pokémon GYM in RUSTBORO CITY?\p"
# 1404 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There's no challenge for me to\n"
# 1405 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "battle a greenhorn TRAINER.\p"
# 1406 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, I want you to challenge me\n"
# 1407 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "when you become a lot stronger.\p"
# 1408 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll battle you, {PLAYER}, when you\n"
# 1409 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "can show me four GYM BADGES, okay?$"
# 1410 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1411 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanGoToDewford:
# 1412 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: I see… So, you've beaten\n"
# 1413 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the Gym Leader in RUSTBORO CITY.\p"
# 1414 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But there are many more TRAINERS\n"
# 1415 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "who are stronger than you, {PLAYER}.\p"
# 1416 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Across the sea in DEWFORD TOWN is a\n"
# 1417 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Gym Leader named BRAWLY.\p"
# 1418 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You should go challenge him.$"
# 1419 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1420 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_YouHaveGottenStronger:
# 1421 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "DAD: Hm… {PLAYER}, you have gotten\n"
# 1422 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger.\p"
# 1423 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I can tell by the number of BADGES\n"
# 1424 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "that you've earned.$"
# 1425 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1426 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanIntro:
# 1427 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: Hm…\n"
# 1428 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "So, you did defeat Sidney.\p"
# 1429 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Fine, as I promised, we will have\n"
# 1430 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a Pokémon battle.\p"
# 1431 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}…\p"
# 1432 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm so happy that I can have\n"
# 1433 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a real battle with my own child.\p"
# 1434 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But, a battle is a battle!\p"
# 1435 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I will do everything in my power as\n"
# 1436 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a Gym Leader to win.\p"
# 1437 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, you'd better give it your\n"
# 1438 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "best shot, too!$"
# 1439 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1440 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanDefeat:
# 1441 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "…\p"
# 1442 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I… I can't…\p"
# 1443 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I can't believe it. {PLAYER}…\p"
# 1444 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I lost to {PLAYER}?\p"
# 1445 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But, rules are rules!\n"
# 1446 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Here, take this.$"
# 1447 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1448 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ReceivedBalanceBadge:
# 1449 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER} received the Balance Badge\n"
# 1450 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "from Dad!$"
# 1451 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1452 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ExplainBalanceBadgeTakeThis:
# 1453 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: With that Badge, Pokémon that\n"
# 1454 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "know the HM move Rock Smash will\l"
# 1455 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "be able to destroy rocks in your path.\p"
# 1456 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "These are my gifts to you. {PLAYER},\n"
# 1457 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm sure you can use them correctly.$"
# 1458 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1459 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ExplainFacade:
# 1460 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: TM29 contains Facade.\p"
# 1461 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It doubles the power of moves if\n"
# 1462 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the Pokémon is poisoned, paralyzed,\l"
# 1463 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "or burned.\p"
# 1464 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It might be able to turn a bad\n"
# 1465 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "situation into an advantage.$"
# 1466 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1467 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GiveMegaRing:
# 1468 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: A trainer like you certainly has\n"
# 1469 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "what it takes to take your battling to\l"
# 1470 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the next level.\p"
# 1471 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I believe you are long overdue to\n"
# 1472 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "recieve this Mega Ring!$"
# 1473 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1474 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ExplainMegaRing:
# 1475 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: That Ring allows you to unlock\n"
# 1476 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the latent power of Mega Evolution.\p"
# 1477 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Mega Stones can be found all across\n"
# 1478 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the Hoenn region!\p"
# 1479 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "However, only one Pokémon can Mega\n"
# 1480 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Evolve per battle…$"
# 1481 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1482 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadHappyAndSad:
# 1483 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: As the Gym Leader, I can't\n"
# 1484 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "express how upset I am…\p"
# 1485 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But as a father, it makes me both\n"
# 1486 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "happy and a little sad. It's odd…$"
# 1487 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1488 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_PleaseComeWithMe:
# 1489 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Ah, there you are, {PLAYER}{KUN}!\p"
# 1490 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Please come with me.\n"
# 1491 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I have something I want you to have.$"
# 1492 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1493 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_LetMeBorrowPlayer:
# 1494 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "NORMAN, you don't mind, do you?\p"
# 1495 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Let me borrow your {PLAYER}{KUN} for\n"
# 1496 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a minute or two.$"
# 1497 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1498 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadGoingToKeepTraining:
# 1499 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: {PLAYER}, you should go visit\n"
# 1500 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "your mother every so often.\p"
# 1501 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm going to stay here and redouble\n"
# 1502 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "my training.\p"
# 1503 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It would bother me as a Trainer to\n"
# 1504 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "not avenge my loss to you, {PLAYER}!$"
# 1505 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1506 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DadNoAmountOfTrainingIsEnough:
# 1507 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: {PLAYER}, how are things going?\p"
# 1508 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The world of Pokémon is deep.\p"
# 1509 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I honestly think that no amount of\n"
# 1510 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training would ever be enough.$"
# 1511 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1512 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymGuideAdvice:
# 1513 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hey, how's it going, Champion-\n"
# 1514 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "bound {PLAYER}?\p"
# 1515 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The doors in this Gym open when you\n"
# 1516 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "beat the awaiting Trainers.\p"
# 1517 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Whoops! The doors in this room are\n"
# 1518 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "already open, so don't attack me!\p"
# 1519 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The Trainers of Petalburg Gym\n"
# 1520 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "all specialize in a battle style.\p"
# 1521 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "All of them have a slight advantage\n"
# 1522 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "that compliments that style.\p"
# 1523 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "When you defeat them, that advantage\n"
# 1524 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "is bestowed to you for the remaining\l"
# 1525 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "gym battles.\p"
# 1526 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "As for your Dad, all of his Pokémon\n"
# 1527 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "attack twice in the same turn, with\l"
# 1528 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the second hit landing at 30% power!\p"
# 1529 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You'll need to choose which trainers\n"
# 1530 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "to fight carefully in order to get\l"
# 1531 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the upper hand.\p"
# 1532 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Once you've chosen the door…\n"
# 1533 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The other one will lock!\p"
# 1534 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Well, hey, go for it!$"
# 1535 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1536 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymGuidePostVictory:
# 1537 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}! Whoa! You've overcome even\n"
# 1538 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "your own father!\p"
# 1539 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Like, whoa!\n"
# 1540 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What a stunning turn of events!$"
# 1541 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1542 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallIntro:
# 1543 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is the Critical Room.\p"
# 1544 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Let's see how well you've bonded\n"
# 1545 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with your Pokémon!$"
# 1546 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1547 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallDefeat:
# 1548 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That was a magnificent battle!$"
# 1549 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1550 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallPostBattle:
# 1551 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on to the next room where a new\n"
# 1552 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "challenge awaits you.\p"
# 1553 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "At the left is the Speed Room.\p"
# 1554 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The right door leads to the Strength\n"
# 1555 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Room.$"
# 1556 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1557 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RandallPostBadge:
# 1558 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Whomever you beat, and whomever you\n"
# 1559 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "may lose to, you never shirk from\l"
# 1560 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training yourself and your Pokémon.\p"
# 1561 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That's what I think being a\n"
# 1562 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Gym Leader is all about.$"
# 1563 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1564 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerIntro:
# 1565 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The ability to attack before the\n"
# 1566 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "opponent…\p"
# 1567 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Just that alone puts me at a great\n"
# 1568 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "advantage, don't you agree?$"
# 1569 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1570 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerDefeat:
# 1571 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I couldn't confuse your team enough…\n"
# 1572 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You share a strong bond together.$"
# 1573 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1574 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerPostBattle:
# 1575 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The next room is the Recoil Room.\n"
# 1576 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Can you withstand those powerful\l"
# 1577 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "attacks?$"
# 1578 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1579 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ParkerPostBadge:
# 1580 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "After you beat our Leader, the\n"
# 1581 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "training has become a lot tougher.$"
# 1582 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1583 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgeIntro:
# 1584 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Just when you think you're going to\n"
# 1585 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "win, your opponent restores HP…\p"
# 1586 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Can you just imagine how awful that\n"
# 1587 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "must feel?\p"
# 1588 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll show you exactly how awful it\n"
# 1589 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "feels!$"
# 1590 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1591 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgeDefeat:
# 1592 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I couldn't restore HP enough…\n"
# 1593 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What Attack power…$"
# 1594 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1595 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgePostBattle:
# 1596 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I should have expected no less from\n"
# 1597 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "our Leader's kid.\p"
# 1598 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "No, wait! A Trainer's abilities are\n"
# 1599 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "earned only through effort.\p"
# 1600 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I lost because my own efforts\n"
# 1601 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "weren't enough.\p"
# 1602 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on! The Zero Reduction Room is\n"
# 1603 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "next.$"
# 1604 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1605 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GeorgePostBadge:
# 1606 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm going to keep training at Gyms.\n"
# 1607 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "One day, I'll become a Leader.$"
# 1608 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1609 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkeIntro:
# 1610 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm not going to take it easy just\n"
# 1611 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "because you're our Leader's kid.\p"
# 1612 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'll show you how strong it is to\n"
# 1613 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "fire off powerful moves with no\l"
# 1614 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "drawback!$"
# 1615 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1616 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkeDefeat:
# 1617 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your power…\n"
# 1618 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're the real deal.$"
# 1619 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1620 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkePostBattle:
# 1621 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your father really is strong.\n"
# 1622 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "He's a Trainer worth my respect.\p"
# 1623 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "And, I sense the same glow coming\n"
# 1624 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "from you as your father.\p"
# 1625 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I hope that you'll stage a terrific\n"
# 1626 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "battle with your father!$"
# 1627 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1628 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BerkePostBadge:
# 1629 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Since your dad became the Leader,\n"
# 1630 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the Trainers of Petalburg City have\l"
# 1631 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "become a lot tougher.$"
# 1632 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1633 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryIntro:
# 1634 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Giggle…\n"
# 1635 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This is the Accuracy Room.\p"
# 1636 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It's pretty nasty when every attack\n"
# 1637 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "lands without fail.$"
# 1638 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1639 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryDefeat:
# 1640 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You were a cut above me…$"
# 1641 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1642 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryPostBattle:
# 1643 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "There are some even stronger\n"
# 1644 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Trainers waiting for you.\p"
# 1645 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The left is the Strength Room, and\n"
# 1646 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the right is the Recovery Room.\p"
# 1647 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Your Pokémon's Attack power will be\n"
# 1648 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "on trial either way.$"
# 1649 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1650 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_MaryPostBadge:
# 1651 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you know what we're trying to\n"
# 1652 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "achieve as Trainers?\p"
# 1653 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "We're striving to become soul mates\n"
# 1654 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with our Pokémon.$"
# 1655 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1656 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaIntro:
# 1657 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The higher the Attack, the more\n"
# 1658 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "reckless I can be in defense.$"
# 1659 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1660 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaDefeat:
# 1661 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Our strength wasn't enough…$"
# 1662 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1663 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaPostBattle:
# 1664 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I think you've taught me a valuable\n"
# 1665 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "lesson here.\p"
# 1666 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Now, go on! The left door goes to\n"
# 1667 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the Recoil Room.\p"
# 1668 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The right door opens to\n"
# 1669 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the Zero Reduction Room.\p"
# 1670 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Both of them have Trainers who are\n"
# 1671 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "skilled at offense.$"
# 1672 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1673 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_AlexiaPostBadge:
# 1674 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hi! Have you tried using Rock Smash?$"
# 1675 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1676 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyIntro:
# 1677 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Our Gym Leader told us to go all out\n"
# 1678 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "and beat you.\p"
# 1679 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Even if you happen to be the\n"
# 1680 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Leader's kid!$"
# 1681 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1682 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyDefeat:
# 1683 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But… I went all out!$"
# 1684 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1685 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyPostBattle:
# 1686 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The way you use your Pokémon…\n"
# 1687 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It's like your father's style.\p"
# 1688 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Go on through! The Gym Leader, your\n"
# 1689 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "father, is waiting!$"
# 1690 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1691 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JodyPostBadge:
# 1692 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Sure, it's fine to make your Pokémon\n"
# 1693 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "stronger.\p"
# 1694 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "But what decides the winner?\p"
# 1695 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Why, it's the feelings Trainers have\n"
# 1696 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "for their Pokémon.$"
# 1697 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1698 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DoorAppearsLocked:
# 1699 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This door appears to be locked\n"
# 1700 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "right now…$"
# 1701 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1702 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterCritRoom:
# 1703 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“Critical Room,” the sign says.\p"
# 1704 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "If you enter, the other door will\n"
# 1705 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "be locked.\p"
# 1706 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1707 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1708 "data/maps/PetalburgCity_Gym/scripts.pory"
@ Unused
# 1709 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_DoorAppearsLocked2:
# 1710 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This door appears to be locked\n"
# 1711 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "right now…$"
# 1712 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1713 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterAccuracyRoom:
# 1714 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“Accuracy Room,” the sign says.\p"
# 1715 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "If you enter, the other door will\n"
# 1716 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "be locked.\p"
# 1717 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1718 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1719 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterSpeedRoom:
# 1720 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“Speed Room,” the sign says.\p"
# 1721 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "If you enter, the other door will\n"
# 1722 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "be locked.\p"
# 1723 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1724 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1725 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterRecoilRoom:
# 1726 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“Recoil Room,” the sign says.\p"
# 1727 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1728 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1729 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterRecoilRoom2:
# 1730 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“Recoil Room,” the sign says.\p"
# 1731 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "If you enter, the other door will\n"
# 1732 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "be locked.\p"
# 1733 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1734 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1735 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterRecoveryRoom:
# 1736 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“Recovery Room,” the sign says.\p"
# 1737 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "If you enter, the other door will\n"
# 1738 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "be locked.\p"
# 1739 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1740 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1741 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterStrengthRoom:
# 1742 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“Strength Room,” the sign says.\p"
# 1743 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "If you enter, the other door will\n"
# 1744 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "be locked.\p"
# 1745 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1746 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1747 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterZeroReductionRoom:
# 1748 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“Zero Reduction Room,” the sign says.\p"
# 1749 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1750 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1751 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterZeroReductionRoom2:
# 1752 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“Zero Reduction Room,” the sign says.\p"
# 1753 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "If you enter, the other door will\n"
# 1754 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "be locked.\p"
# 1755 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1756 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1757 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_EnterGymLeadersRoom:
# 1758 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“Gym Leader's Room\p"
# 1759 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "“See for yourself what Pokémon await\n"
# 1760 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "you!” the sign says.\p"
# 1761 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you want to go through?$"
# 1762 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1763 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymStatue:
# 1764 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Petalburg City Pokémon Gym$"
# 1765 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1766 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymStatueCertified:
# 1767 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Petalburg City Pokémon Gym\p"
# 1768 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Norman's Certified Trainers:\n"
# 1769 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 1770 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1771 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanPreRematch:
# 1772 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: {PLAYER}…\n"
# 1773 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I had a feeling that you would come.\p"
# 1774 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I would never refuse to accept\n"
# 1775 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a challenge from you.\p"
# 1776 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You do understand, don't you?\p"
# 1777 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Inside a Gym, it doesn't matter that\n"
# 1778 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we are a parent and child.\p"
# 1779 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "…No, because we are parent and child,\n"
# 1780 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we owe it to each other to do the best\l"
# 1781 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we can. Isn't that right, {PLAYER}?$"
# 1782 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1783 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanRematchDefeat:
# 1784 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Uh… Haha…\n"
# 1785 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Maybe that was going too hard…$"
# 1786 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1787 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanPostRematch:
# 1788 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: {PLAYER}…\n"
# 1789 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What is your dream?\p"
# 1790 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "My dream…\n"
# 1791 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hahaha…\l"
# 1792 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It has already come true, actually.$"
# 1793 "data/maps/PetalburgCity_Gym/scripts.pory"

# 1794 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_NormanRematchNeedTwoMons:
# 1795 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Dad: {PLAYER}…\n"
# 1796 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I had a feeling that you would come.\p"
# 1797 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I would never refuse to accept\n"
# 1798 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "a challenge from you.\p"
# 1799 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You do understand, don't you?\p"
# 1800 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Inside a Gym, it doesn't matter that\n"
# 1801 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "we are a parent and child.\p"
# 1802 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hm? Wait a second, {PLAYER}.\p"
# 1803 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Do you only have one Pokémon that is\n"
# 1804 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "capable of battle?\p"
# 1805 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Sorry, but you'll have to come back\n"
# 1806 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with at least two Pokémon.$"
