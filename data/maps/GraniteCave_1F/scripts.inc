# 1 "data/maps/GraniteCave_1F/scripts.pory"

# 2 "data/maps/GraniteCave_1F/scripts.pory"

# 3 "data/maps/GraniteCave_1F/scripts.pory"
.set LOCALID_HIKER, 1
# 4 "data/maps/GraniteCave_1F/scripts.pory"

# 5 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_MapScripts::
# 6 "data/maps/GraniteCave_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, GraniteCave_1F_OnTransition
# 7 "data/maps/GraniteCave_1F/scripts.pory"
	.byte 0
# 8 "data/maps/GraniteCave_1F/scripts.pory"

# 9 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_OnTransition:
# 10 "data/maps/GraniteCave_1F/scripts.pory"
	call_if_unset FLAG_RECEIVED_HM_FLASH, GraniteCave_1F_EventScript_BlockPath
# 11 "data/maps/GraniteCave_1F/scripts.pory"
	end
# 12 "data/maps/GraniteCave_1F/scripts.pory"

# 13 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_EventScript_BlockPath::
# 14 "data/maps/GraniteCave_1F/scripts.pory"
	setobjectxyperm LOCALID_HIKER, 27, 7
# 15 "data/maps/GraniteCave_1F/scripts.pory"
	end
# 16 "data/maps/GraniteCave_1F/scripts.pory"

# 17 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_EventScript_Hiker::
# 18 "data/maps/GraniteCave_1F/scripts.pory"
	lock
# 19 "data/maps/GraniteCave_1F/scripts.pory"
	faceplayer
# 20 "data/maps/GraniteCave_1F/scripts.pory"
	goto_if_set FLAG_RECEIVED_HM_FLASH, GraniteCave_1F_EventScript_ReceivedFlash
# 21 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_Text_GetsDarkAheadHereYouGo, MSGBOX_DEFAULT
# 22 "data/maps/GraniteCave_1F/scripts.pory"
	giveitem ITEM_HM_FLASH
# 23 "data/maps/GraniteCave_1F/scripts.pory"
	setflag FLAG_RECEIVED_HM_FLASH
# 24 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_Text_ExplainFlash, MSGBOX_DEFAULT
# 25 "data/maps/GraniteCave_1F/scripts.pory"
	waitmessage
# 26 "data/maps/GraniteCave_1F/scripts.pory"
	closemessage
# 27 "data/maps/GraniteCave_1F/scripts.pory"
	applymovement LOCALID_HIKER, GraniteCave_1F_Movement_MoveOutOfWay
# 28 "data/maps/GraniteCave_1F/scripts.pory"
	waitmovement 0
# 29 "data/maps/GraniteCave_1F/scripts.pory"
	release
# 30 "data/maps/GraniteCave_1F/scripts.pory"
	end
# 31 "data/maps/GraniteCave_1F/scripts.pory"

# 32 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_EventScript_ReceivedFlash::
# 33 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_Text_ExplainFlash, MSGBOX_DEFAULT
# 34 "data/maps/GraniteCave_1F/scripts.pory"
	release
# 35 "data/maps/GraniteCave_1F/scripts.pory"
	end
# 36 "data/maps/GraniteCave_1F/scripts.pory"

# 37 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_Text_GetsDarkAheadHereYouGo:
# 38 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Hey, you.\n"
# 39 "data/maps/GraniteCave_1F/scripts.pory"
	.string "I take it you're a Trainer.\p"
# 40 "data/maps/GraniteCave_1F/scripts.pory"
	.string "For us Hikers, helping out those\n"
# 41 "data/maps/GraniteCave_1F/scripts.pory"
	.string "that we meet is our motto.\p"
# 42 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Here you go, I'll pass this on to you.$"
# 43 "data/maps/GraniteCave_1F/scripts.pory"

# 44 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_Text_ExplainFlash:
# 45 "data/maps/GraniteCave_1F/scripts.pory"
	.string "There aren't any caves that need\n"
# 46 "data/maps/GraniteCave_1F/scripts.pory"
	.string "lighting up nowadays.\p"
# 47 "data/maps/GraniteCave_1F/scripts.pory"
	.string "But you'll need that move to clear the\n"
# 48 "data/maps/GraniteCave_1F/scripts.pory"
	.string "darkness in Brawly's Gym.$"
# 49 "data/maps/GraniteCave_1F/scripts.pory"

# 50 "data/maps/GraniteCave_1F/scripts.pory"
GraniteCave_1F_Movement_MoveOutOfWay:
# 51 "data/maps/GraniteCave_1F/scripts.pory"
	face_up
# 52 "data/maps/GraniteCave_1F/scripts.pory"
	walk_up
# 53 "data/maps/GraniteCave_1F/scripts.pory"
	face_down
# 54 "data/maps/GraniteCave_1F/scripts.pory"
	step_end
