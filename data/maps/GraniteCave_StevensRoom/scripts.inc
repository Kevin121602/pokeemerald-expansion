# 1 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 2 "data/maps/GraniteCave_StevensRoom/scripts.pory"
.set LOCALID_STEVEN, 1
# 3 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 4 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_MapScripts::
# 5 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.byte 0
# 6 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 7 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_Steven::
# 8 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	lock
# 9 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	faceplayer
# 10 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_ImStevenLetterForMe, MSGBOX_DEFAULT
# 11 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setvar VAR_0x8004, ITEM_LETTER
# 12 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call Common_EventScript_PlayerHandedOverTheItem
# 13 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	setflag FLAG_DELIVERED_STEVEN_LETTER
# 14 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_ThankYouTakeThis, MSGBOX_DEFAULT
# 15 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	giveitem ITEM_TM_FLASH_CANNON
# 16 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_RESULT, FALSE, GraniteCave_StevensRoom_EventScript_BagFull
# 17 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_CouldBecomeChampionLetsRegister, MSGBOX_DEFAULT
# 18 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	closemessage
# 19 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_NORTH, GraniteCave_StevensRoom_EventScript_StevenExitNorth
# 20 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_SOUTH, GraniteCave_StevensRoom_EventScript_StevenExitSouth
# 21 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_WEST, GraniteCave_StevensRoom_EventScript_StevenExitWestEast
# 22 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	call_if_eq VAR_FACING, DIR_EAST, GraniteCave_StevensRoom_EventScript_StevenExitWestEast
# 23 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	playse SE_EXIT
# 24 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	removeobject LOCALID_STEVEN
# 25 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	release
# 26 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	end
# 27 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 28 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenExitNorth::
# 29 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_STEVEN, GraniteCave_StevensRoom_Movement_StevenExit
# 30 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 31 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 32 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 33 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenExitWestEast::
# 34 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit
# 35 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_STEVEN, GraniteCave_StevensRoom_Movement_StevenExit
# 36 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 37 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 38 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 39 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_StevenExitSouth::
# 40 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit
# 41 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	applymovement LOCALID_STEVEN, GraniteCave_StevensRoom_Movement_StevenExitSouth
# 42 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	waitmovement 0
# 43 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 44 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 45 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_EventScript_BagFull::
# 46 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	msgbox GraniteCave_StevensRoom_Text_OhBagIsFull, MSGBOX_DEFAULT
# 47 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	return
# 48 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 49 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_StevenExit:
# 50 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 51 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 52 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 53 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 54 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 55 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_8
# 56 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	step_end
# 57 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 58 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_PlayerTurnTowardExit:
# 59 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 60 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 61 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_16
# 62 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_in_place_faster_up
# 63 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	step_end
# 64 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 65 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Movement_StevenExitSouth:
# 66 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_left
# 67 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 68 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 69 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 70 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_right
# 71 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 72 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	walk_up
# 73 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	delay_8
# 74 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	step_end
# 75 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 76 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_ImStevenLetterForMe:
# 77 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "My name is Steven.\p"
# 78 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "I'm interested in rare stones,\n"
# 79 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "so I travel here and there.\p"
# 80 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Oh?\n"
# 81 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "A Letter for me?$"
# 82 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 83 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_ThankYouTakeThis:
# 84 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Steven: Okay, thank you.\p"
# 85 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "You went through all this trouble to\n"
# 86 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "deliver that. I need to thank you.\p"
# 87 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Let me see…\n"
# 88 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "I'll give you this TM.\p"
# 89 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "It contains my favorite move,\n"
# 90 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Flash Cannon.$"
# 91 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 92 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_CouldBecomeChampionLetsRegister:
# 93 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Steven: Your Pokémon appear quite\n"
# 94 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "capable.\p"
# 95 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "If you keep training, you could even\n"
# 96 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "become the Champion of the Pokémon\l"
# 97 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "League one day. That's what I think.\p"
# 98 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Now, I've got to hurry along.$"
# 99 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 100 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_RegisteredSteven:
# 101 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Registered STEVEN\n"
# 102 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "in the Pokénav.$"
# 103 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 104 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_IveGotToHurryAlong:
# 105 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Now, I've got to hurry along.$"
# 106 "data/maps/GraniteCave_StevensRoom/scripts.pory"

# 107 "data/maps/GraniteCave_StevensRoom/scripts.pory"
GraniteCave_StevensRoom_Text_OhBagIsFull:
# 108 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "Oh, your BAG is full…\n"
# 109 "data/maps/GraniteCave_StevensRoom/scripts.pory"
	.string "That's too bad, then.$"
