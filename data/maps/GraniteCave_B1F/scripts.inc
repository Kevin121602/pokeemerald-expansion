GraniteCave_B1F_EventScript_DuskStoneCourier::
# 4 "data/maps/GraniteCave_B1F/scripts.pory"
	lock
# 5 "data/maps/GraniteCave_B1F/scripts.pory"
	faceplayer
# 6 "data/maps/GraniteCave_B1F/scripts.pory"
	msgbox GraniteCave_B1F_EventScript_DuskStoneCourier_Text_0
# 17 "data/maps/GraniteCave_B1F/scripts.pory"
	giveitem ITEM_DUSK_STONE
# 18 "data/maps/GraniteCave_B1F/scripts.pory"
	msgbox GraniteCave_B1F_EventScript_DuskStoneCourier_Text_1
# 19 "data/maps/GraniteCave_B1F/scripts.pory"
	waitmessage
# 20 "data/maps/GraniteCave_B1F/scripts.pory"
	closemessage
# 21 "data/maps/GraniteCave_B1F/scripts.pory"
	setflag FLAG_DUSK_STONE_AVAILABLE
# 22 "data/maps/GraniteCave_B1F/scripts.pory"
	applymovement 3, CourierMovement
# 23 "data/maps/GraniteCave_B1F/scripts.pory"
	waitmovement 0
# 24 "data/maps/GraniteCave_B1F/scripts.pory"
	removeobject 3
# 25 "data/maps/GraniteCave_B1F/scripts.pory"
	release
	end


# 29 "data/maps/GraniteCave_B1F/scripts.pory"
CourierMovement:
# 30 "data/maps/GraniteCave_B1F/scripts.pory"
	face_up
# 31 "data/maps/GraniteCave_B1F/scripts.pory"
	walk_faster_up
# 31 "data/maps/GraniteCave_B1F/scripts.pory"
	walk_faster_up
# 31 "data/maps/GraniteCave_B1F/scripts.pory"
	walk_faster_up
# 31 "data/maps/GraniteCave_B1F/scripts.pory"
	walk_faster_up
# 32 "data/maps/GraniteCave_B1F/scripts.pory"
	face_right
# 33 "data/maps/GraniteCave_B1F/scripts.pory"
	walk_faster_right
# 33 "data/maps/GraniteCave_B1F/scripts.pory"
	walk_faster_right
# 33 "data/maps/GraniteCave_B1F/scripts.pory"
	walk_faster_right
# 34 "data/maps/GraniteCave_B1F/scripts.pory"
	face_up
# 35 "data/maps/GraniteCave_B1F/scripts.pory"
	walk_faster_up
# 36 "data/maps/GraniteCave_B1F/scripts.pory"
	face_right
# 37 "data/maps/GraniteCave_B1F/scripts.pory"
	walk_faster_right
# 37 "data/maps/GraniteCave_B1F/scripts.pory"
	walk_faster_right
# 37 "data/maps/GraniteCave_B1F/scripts.pory"
	walk_faster_right
# 37 "data/maps/GraniteCave_B1F/scripts.pory"
	walk_faster_right
	step_end

# 40 "data/maps/GraniteCave_B1F/scripts.pory"

# 41 "data/maps/GraniteCave_B1F/scripts.pory"
GraniteCave_B1F_MapScripts::
# 42 "data/maps/GraniteCave_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CaveHole_CheckFallDownHole
# 43 "data/maps/GraniteCave_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CaveHole_FixCrackedGround
# 44 "data/maps/GraniteCave_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, GraniteCave_B1F_SetHoleWarp
# 45 "data/maps/GraniteCave_B1F/scripts.pory"
	.byte 0
# 46 "data/maps/GraniteCave_B1F/scripts.pory"

# 47 "data/maps/GraniteCave_B1F/scripts.pory"
GraniteCave_B1F_SetHoleWarp:
# 48 "data/maps/GraniteCave_B1F/scripts.pory"
	setstepcallback STEP_CB_CRACKED_FLOOR
# 49 "data/maps/GraniteCave_B1F/scripts.pory"
	setholewarp MAP_GRANITE_CAVE_B2F
# 50 "data/maps/GraniteCave_B1F/scripts.pory"
	end

GraniteCave_B1F_EventScript_DuskStoneCourier_Text_0:
# 6 "data/maps/GraniteCave_B1F/scripts.pory"
	.string "Hey dude…\n"
	.string "I'm totally lost…\p"
	.string "Do you know where the Stone Emporium\n"
	.string "is?\p"
	.string "I was supposed to deliver some Dusk\n"
	.string "Stones to them.\p"
	.string "…\p"
	.string "What?! They're in Lavaridge?\n"
	.string "I got some lousy directions, man.\p"
	.string "Thanks for helping me out, bro.\n"
	.string "Here, take this!$"

GraniteCave_B1F_EventScript_DuskStoneCourier_Text_1:
# 18 "data/maps/GraniteCave_B1F/scripts.pory"
	.string "I gotta hurry!$"
