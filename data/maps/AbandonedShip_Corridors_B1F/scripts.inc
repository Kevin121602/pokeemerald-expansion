# 1 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 2 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_MapScripts::
# 3 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, AbandonedShip_Corridors_B1F_OnResume
# 4 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	map_script MAP_SCRIPT_ON_LOAD, AbandonedShip_Corridors_B1F_OnLoad
# 5 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.byte 0
# 6 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 7 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_OnResume:
# 8 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	setdivewarp MAP_ABANDONED_SHIP_UNDERWATER1, 5, 4
# 9 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	end
# 10 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 11 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_OnLoad:
# 12 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	end
# 13 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 14 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_EventScript_LockStorageRoom::
# 15 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	setmetatile 11, 4, METATILE_InsideShip_IntactDoor_Bottom_Locked, TRUE
# 16 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	return
# 17 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 18 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_EventScript_UnlockStorageRoom::
# 19 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	setmetatile 11, 4, METATILE_InsideShip_IntactDoor_Bottom_Unlocked, TRUE
# 20 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	return
# 21 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 22 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_EventScript_TuberM::
# 23 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	msgbox AbandonedShip_Corridors_B1F_Text_YayItsAShip, MSGBOX_NPC
# 24 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	end
# 25 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 26 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_EventScript_StorageRoomDoor::
# 27 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	lockall
# 28 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto_if_set FLAG_USED_STORAGE_KEY, AbandonedShip_Corridors_B1F_EventScript_DoorIsUnlocked
# 29 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	checkitem ITEM_STORAGE_KEY
# 30 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, AbandonedShip_Corridors_B1F_EventScript_DoorIsLocked
# 31 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	msgbox AbandonedShip_Corridors_B1F_Text_InsertedStorageKey, MSGBOX_DEFAULT
# 32 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	playse SE_PIN
# 33 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	removeitem ITEM_STORAGE_KEY
# 34 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	setflag FLAG_USED_STORAGE_KEY
# 35 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	call AbandonedShip_Corridors_B1F_EventScript_UnlockStorageRoom
# 36 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	special DrawWholeMapView
# 37 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	releaseall
# 38 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	end
# 39 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 40 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_EventScript_DoorIsLocked::
# 41 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	msgbox AbandonedShip_Corridors_B1F_Text_DoorIsLocked, MSGBOX_DEFAULT
# 42 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	releaseall
# 43 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	end
# 44 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 45 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_EventScript_DoorIsUnlocked::
# 46 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	msgbox AbandonedShip_Text_TheDoorIsOpen, MSGBOX_DEFAULT
# 47 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	releaseall
# 48 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	end
# 49 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 50 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_EventScript_Duncan::
# 51 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	trainerbattle_single TRAINER_DUNCAN, AbandonedShip_Corridors_B1F_Text_DuncanIntro, AbandonedShip_Corridors_B1F_Text_DuncanDefeat
# 52 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	msgbox AbandonedShip_Corridors_B1F_Text_DuncanPostBattle, MSGBOX_AUTOCLOSE
# 53 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	end
# 54 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 55 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_Text_DuncanIntro:
# 56 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "When we go out to sea, we Sailors\n"
# 57 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "always bring our Pokémon.\l"
# 58 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "How about a quick battle?$"
# 59 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 60 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_Text_DuncanDefeat:
# 61 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "Whoops, I'm sunk!$"
# 62 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 63 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_Text_DuncanPostBattle:
# 64 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "The ship's bottom has sunk into the\n"
# 65 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "depths.\p"
# 66 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "If a Pokémon knew how to go underwater,\n"
# 67 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "we might make some progress…$"
# 68 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 69 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_Text_YayItsAShip:
# 70 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "Yay!\n"
# 71 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "It's a ship!$"
# 72 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 73 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_Text_DoorIsLocked:
# 74 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "The door is locked.\p"
# 75 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "“Storage” is painted on the door.$"
# 76 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 77 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Corridors_B1F_Text_InsertedStorageKey:
# 78 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "{PLAYER} inserted and turned the\n"
# 79 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "Storage Key.\p"
# 80 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "The inserted Key stuck fast,\n"
# 81 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "but the door opened.$"
# 82 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"

# 83 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
AbandonedShip_Text_TheDoorIsOpen:
# 84 "data/maps/AbandonedShip_Corridors_B1F/scripts.pory"
	.string "The door is open.$"
